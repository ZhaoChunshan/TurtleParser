//---------------------------------------------------------------------------
//
// 仿照 RDF-3X 的TurtleParser类进行设计，提供类似的接口
//
//---------------------------------------------------------------------------
#include "Type.h"
#include "Turtle/TURTLELexer.h"
#include "Turtle/TURTLEParser.h"
#include "Turtle/TURTLEBaseVisitor.h"
#include "antlr4-runtime.h"
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
    public:
    /// Constructor
    TurtleParser(std::istream& in);
    /// Destructor
    ~TurtleParser();

    /// Read the next triple
    bool parse(std::string& subject,std::string& predicate,std::string& object,Type::Type_ID& objectType,std::string& objectSubType);

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

    /// Five items to represent the parser state. (W3C recommendation)

    /// The uri base
    std::string base;
    /// All known prefixes -> iri
    std::map<std::string,std::string> namespaces;
    /// All blank node labels -> id
    std::map<std::string, unsigned> bnodeLabels;
    /// Current subject
    std::string curSubject;
    /// Current predicate
    std::string curPredicate;


    /// input stream
    std::istream &in;
    /// The currently available triples
    std::vector<Triple> triples;
    /// Reader in the triples
    unsigned triplesReader;
    /// The next blank node id
    unsigned nextBlank;

    /// Construct a parse tree based on antlr4, and get all the tripes
    void prepareTripes();

    // Convert a relative IRI into an absolute one
    std::string constructAbsoluteIRI(const std::string &iri);
    /// Construct a new blank node
    std::string newBlankNode();
    /// Convert a blank node id to its name in triple.
    std::string bNodeID2Name(unsigned id);

    // Convert two hex char to a unsigned char
    // For example : 'A' '0' => 160, '2' 'b' => 43
    unsigned char twoHexCharToByte(char high, char low);
    /// Get str unescaped, process numeric escapes, string escapes, reserved character escapes at the same 
    /// time. Make sure that every '\\' is used for escape, never just as a char.
    /// The grammar and the check of lexer && parser guarantee this property.
    std::string unescapeString(const std::string &str);


    /// TODO: The antlr visit functions
    antlrcpp::Any visitStatement(TURTLEParser::StatementContext *ctx);

    antlrcpp::Any visitDirective(TURTLEParser::DirectiveContext *ctx);

    antlrcpp::Any visitPrefixID(TURTLEParser::PrefixIDContext *ctx);

    antlrcpp::Any visitBase(TURTLEParser::BaseContext *ctx);

    antlrcpp::Any visitSparqlBase(TURTLEParser::SparqlBaseContext *ctx);

    antlrcpp::Any visitSparqlPrefix(TURTLEParser::SparqlPrefixContext *ctx);

    antlrcpp::Any visitTriples(TURTLEParser::TriplesContext *ctx);

    antlrcpp::Any visitPredicateObjectList(TURTLEParser::PredicateObjectListContext *ctx);

    antlrcpp::Any visitObjectList(TURTLEParser::ObjectListContext *ctx);

    antlrcpp::Any visitVerb(TURTLEParser::VerbContext *ctx);

    antlrcpp::Any visitSubject(TURTLEParser::SubjectContext *ctx);

    antlrcpp::Any visitPredicate(TURTLEParser::PredicateContext *ctx);

    antlrcpp::Any visitObject_(TURTLEParser::Object_Context *ctx) ;

    antlrcpp::Any visitLiteral(TURTLEParser::LiteralContext *ctx, std::string &object, Type::Type_ID &objectType, std::string &objectSubType);

    antlrcpp::Any visitBlankNodePropertyList(TURTLEParser::BlankNodePropertyListContext *ctx) ;

    antlrcpp::Any visitCollection(TURTLEParser::CollectionContext *ctx);

    antlrcpp::Any visitRdfLiteral(TURTLEParser::RdfLiteralContext *ctx, std::string &object, Type::Type_ID &objectType, std::string &objectSubType) ;

    antlrcpp::Any visitIri(TURTLEParser::IriContext *ctx) ;

    // addtional new function

    antlrcpp::Any visitBlankNode(const std::string &text);

    antlrcpp::Any visitString(const std::string &text);

    antlrcpp::Any visitStringQuote(const std::string &str);

    antlrcpp::Any visitStringSingleQuote(const std::string &str);

    antlrcpp::Any visitStringLongQuote(const std::string &str);

    antlrcpp::Any visitStringLongSingleQuote(const std::string &str);

    antlrcpp::Any visitPrefixedName(const std::string &text);
};

/**
	Listener for errors during Turtle file parsing, which throws a 
	corresponding exception when an error arises.
*/
class TURTLEErrorListener: public antlr4::BaseErrorListener
{
public:
	void syntaxError(antlr4::Recognizer *recognizer, antlr4::Token * offendingSymbol, \
		size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e);
};

//---------------------------------------------------------------------------
