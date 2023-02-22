//---------------------------------------------------------------------------
//
// 仿照 RDF-3X 的TurtleParser类进行设计，提供类似的接口
//
//---------------------------------------------------------------------------
#include "Type.h"
#include "Turtle/TURTLEBaseVisitor.h"
#include <string>
#include <map>
#include <vector>
//---------------------------------------------------------------------------
/**
	Parser for Turtle files, inherited from TURTLEBaseVisitor, which is
	automatically generated from the TURTLE grammar by ANTLR. Implements
	visiting important grammatical units, and TurtleParser::parse function
    to stream a triple.
*/
class TurtleParser : public TURTLEBaseVisitor
{
    private:
    /// A triple
    struct Triple {
        /// The entries
        std::string subject,predicate,object,objectSubType;
        /// Type for the object
        Type::Type_ID objectType;

        /// Constructor
        Triple(const std::string& subject,const std::string& predicate,const std::string& object,Type::Type_ID objectType,const std::string& objectSubType) : subject(subject),predicate(predicate),object(object),objectSubType(objectSubType),objectType(objectType) {}
    };

    /// The uri base
    std::string base;
    /// All known prefixes
    std::map<std::string,std::string> prefixes;
    /// All blank node labels -> id
    std::map<std::string, unsigned> bnodeLabels;


    /// The currently available triples
    std::vector<Triple> triples;
    /// Reader in the triples
    unsigned triplesReader;
    /// The next blank node id
    unsigned nextBlank;

    // Convert a relative URI into an absolute one
    void constructAbsoluteURI(std::string& uri);
    /// Construct a new blank node
    void newBlankNode(std::string& node);
    /// Report an error
    void parseError(const std::string& message);

    /// The antlr visit functions



    public:
    /// Constructor
    TurtleParser(std::istream& in);
    /// Destructor
    ~TurtleParser();

    /// Read the next triple
    bool parse(std::string& subject,std::string& predicate,std::string& object,Type::Type_ID& objectType,std::string& objectSubType);
};

/**
	Listener for errors during Turtle file parsing, which throws a 
	corresponding exception when an error arises.
*/
class TurtleErrorListener: public antlr4::BaseErrorListener
{
public:
	void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token * offendingSymbol, \
		size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e);
};

//---------------------------------------------------------------------------
