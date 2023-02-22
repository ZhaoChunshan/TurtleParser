#include "TurtleParser.h"

using namespace std;

/**
	Throw a runtime error when lexical and syntactic errors are detected in the query.
*/
void TURTLEErrorListener::syntaxError(antlr4::Recognizer *recognizer, antlr4::Token * offendingSymbol, \
	size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e)
{
	throw runtime_error("[Syntax Error]:line " + to_string(line) + ":" + to_string(charPositionInLine) + " " + msg);
}

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

antlrcpp::Any visitStatement(TURTLEParser::StatementContext *ctx){
    
}