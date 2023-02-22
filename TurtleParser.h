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

    /// parser
    TURTLEParser *parser;

    /// input stream
    std::istream &in;
    /// Parse tree
    TURTLEParser::TurtleDocContext *tree;
    // Reader in statement vector
    unsigned statementReader;
    /// The currently available triples
    std::vector<Triple> triples;
    /// Reader in the triples
    unsigned triplesReader;
    /// The next blank node id
    unsigned nextBlank;

    
    /// Is Parse Tree ready?
    bool hasParseTree();
    /// Construct a parse tree based on antlr4
    void constructParseTree();

    // Convert a relative IRI into an absolute one
    std::string constructAbsoluteIRI(const std::string &iri);
    /// Construct a new blank node
    std::string newBlankNode();
    std::string bNodeID2Label(unsigned id);
    /// TODO: other helper funcs
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

    antlrcpp::Any visitLiteral(TURTLEParser::LiteralContext *ctx);

    antlrcpp::Any visitBlankNodePropertyList(TURTLEParser::BlankNodePropertyListContext *ctx) ;

    antlrcpp::Any visitCollection(TURTLEParser::CollectionContext *ctx);

    antlrcpp::Any visitRdfLiteral(TURTLEParser::RdfLiteralContext *ctx) ;

    antlrcpp::Any visitIri(TURTLEParser::IriContext *ctx) ;
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
