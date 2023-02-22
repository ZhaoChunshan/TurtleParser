#include "TurtleParser.h"

using namespace std;

const string predicate_a = "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>";
const string type_string = "<http://www.w3.org/2001/XMLSchema#string>";
const string type_integer = "<http://www.w3.org/2001/XMLSchema#integer>";
const string type_decimal = "<http://www.w3.org/2001/XMLSchema#decimal>";
const string type_double = "<http://www.w3.org/2001/XMLSchema#double>";
const string type_boolean = "<http://www.w3.org/2001/XMLSchema#boolean>";

/**
	Construct funtion, get parser tree

	@param istream the Turtle file/string.
*/
TurtleParser::TurtleParser(std::istream& in): in(in), tree(nullptr), triplesReader(0), \
    nextBlank(0), parser(nullptr), statementReader(0) { }

TurtleParser::~TurtleParser(){ 
    delete parser;
}

bool TurtleParser::parse(std::string& subject,std::string& predicate,std::string& object,Type::Type_ID& objectType,std::string& objectSubType) {

}

bool TurtleParser::hasParseTree() {
    return tree != nullptr;
}

/**
	Overall driver function for Turtle parsing.
*/
void TurtleParser::constructParseTree() {
    try{
        TURTLEErrorListener lstnr;
        antlr4::ANTLRInputStream input(in);
        TURTLELexer lexer(&input);
        lexer.removeErrorListeners();
	    lexer.addErrorListener(&lstnr);

        antlr4::CommonTokenStream tokens(&lexer);
        parser = new TURTLEParser (&tokens);
        parser->removeErrorListeners(); 
        parser->addErrorListener(&lstnr);

        tree = parser->turtleDoc();

    } catch (const runtime_error& e1) {
        throw runtime_error(e1.what());
    }
}

antlrcpp::Any TurtleParser::visitStatement(TURTLEParser::StatementContext *ctx){
    if(ctx->directive()){
        visitDirective(ctx->directive());
    } else {
        visitTriples(ctx->triples());
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitDirective(TURTLEParser::DirectiveContext *ctx){
    if(ctx->prefixID()){
        visitPrefixID(ctx->prefixID());
    } else if (ctx->base()){
        visitBase(ctx->base());
    } else if (ctx->sparqlPrefix()){
        visitSparqlPrefix(ctx->sparqlPrefix());
    } else {
        visitSparqlBase(ctx->sparqlBase());
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitPrefixID(TURTLEParser::PrefixIDContext *ctx){
    string iri = constructAbsoluteIRI(
        unescapeString( 
            ctx->IRIREF()->getText() 
        )
    );
    string prefix =  ctx->PNAME_NS()->getText();
    prefix.pop_back();  // pop the last ':'
    namespaces.insert(make_pair(prefix, iri));
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitBase(TURTLEParser::BaseContext *ctx){
    base = constructAbsoluteIRI(
        unescapeString( 
            ctx->IRIREF()->getText() 
        )
    );
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitSparqlBase(TURTLEParser::SparqlBaseContext *ctx){
    base = constructAbsoluteIRI(
        unescapeString( 
            ctx->IRIREF()->getText() 
        )
    );
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitSparqlPrefix(TURTLEParser::SparqlPrefixContext *ctx){
    string iri = constructAbsoluteIRI(
        unescapeString( 
            ctx->IRIREF()->getText() 
        )
    );
    string prefix =  ctx->PNAME_NS()->getText();
    prefix.pop_back();  // pop the last ':'
    namespaces.insert(make_pair(prefix, iri));
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitTriples(TURTLEParser::TriplesContext *ctx) {
    if(ctx->subject()){
        // subject predicateObjectList
        visitSubject(ctx->subject());   // should set curSubject
        visitPredicateObjectList(ctx->predicateObjectList());
    } else {
        // blankNodePropertyList predicateObjectList?
        string bnodeName = visitBlankNodePropertyList(ctx->blankNodePropertyList()).as<string>();
        if(ctx->predicateObjectList()){
            curSubject = bnodeName;
            visitPredicateObjectList(ctx->predicateObjectList());
        }
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitPredicateObjectList(TURTLEParser::PredicateObjectListContext *ctx){
    int n = ctx->verb().size();
    for(int i = 0; i < n; ++i){
        visitVerb(ctx->verb(i));
        visitObjectList(ctx->objectList(i));
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitObjectList(TURTLEParser::ObjectListContext *ctx) {
    for(auto *obj_ctx : ctx->object_()){
        visitObject_(obj_ctx);
    }
    return antlrcpp::Any();
}


antlrcpp::Any TurtleParser::visitVerb(TURTLEParser::VerbContext *ctx){
    if(ctx->predicate()){
        visitPredicate(ctx->predicate());
    } else {
        curPredicate = predicate_a;
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitSubject(TURTLEParser::SubjectContext *ctx){
    if(ctx->iri()){
        curSubject = visitIri(ctx->iri()).as<string>();
    } else if(ctx->BlankNode()){
        string bnodeText = ctx->BlankNode()->getText();
        if(bnodeText.at(0) == '['){
            // anno blank node
            curSubject = newBlankNode();
        } else {
            string bnodeLabel = bnodeText.substr(2, bnodeText.length() - 2);
            if(bnodeLabels.find(bnodeLabel) != bnodeLabels.end()){
                curSubject = bNodeID2Label(bnodeLabels[bnodeLabel]);
            } else {
                bnodeLabels.insert(make_pair(bnodeLabel, nextBlank));
                curSubject = newBlankNode();
            }
        }
    } else {
        curSubject = visitCollection(ctx->collection()).as<string>();
    }
    return antlrcpp::Any();
}

antlrcpp::Any visitPredicate(TURTLEParser::PredicateContext *ctx){

}

antlrcpp::Any visitObject_(TURTLEParser::Object_Context *ctx){

}

antlrcpp::Any visitLiteral(TURTLEParser::LiteralContext *ctx);

antlrcpp::Any visitBlankNodePropertyList(TURTLEParser::BlankNodePropertyListContext *ctx) ;

antlrcpp::Any visitCollection(TURTLEParser::CollectionContext *ctx);

antlrcpp::Any visitRdfLiteral(TURTLEParser::RdfLiteralContext *ctx) ;


antlrcpp::Any TurtleParser::visitIri(TURTLEParser::IriContext *ctx){
    return antlrcpp::Any();
}

/**
	Throw a runtime error when lexical and syntactic errors are detected in the query.
*/
void TURTLEErrorListener::syntaxError(antlr4::Recognizer *recognizer, antlr4::Token * offendingSymbol, \
	size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e)
{
	throw runtime_error("[Syntax Error]:line " + to_string(line) + ":" + to_string(charPositionInLine) + " " + msg);
}
