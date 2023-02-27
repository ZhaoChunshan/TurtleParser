
// Generated from ./TURTLE.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TURTLEParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by TURTLEParser.
 */
class  TURTLEVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by TURTLEParser.
   */
    virtual antlrcpp::Any visitTurtleDoc(TURTLEParser::TurtleDocContext *context) = 0;

    virtual antlrcpp::Any visitStatement(TURTLEParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitDirective(TURTLEParser::DirectiveContext *context) = 0;

    virtual antlrcpp::Any visitPrefixID(TURTLEParser::PrefixIDContext *context) = 0;

    virtual antlrcpp::Any visitBase(TURTLEParser::BaseContext *context) = 0;

    virtual antlrcpp::Any visitSparqlBase(TURTLEParser::SparqlBaseContext *context) = 0;

    virtual antlrcpp::Any visitSparqlPrefix(TURTLEParser::SparqlPrefixContext *context) = 0;

    virtual antlrcpp::Any visitTriples(TURTLEParser::TriplesContext *context) = 0;

    virtual antlrcpp::Any visitPredicateObjectList(TURTLEParser::PredicateObjectListContext *context) = 0;

    virtual antlrcpp::Any visitObjectList(TURTLEParser::ObjectListContext *context) = 0;

    virtual antlrcpp::Any visitVerb(TURTLEParser::VerbContext *context) = 0;

    virtual antlrcpp::Any visitSubject(TURTLEParser::SubjectContext *context) = 0;

    virtual antlrcpp::Any visitPredicate(TURTLEParser::PredicateContext *context) = 0;

    virtual antlrcpp::Any visitObject_(TURTLEParser::Object_Context *context) = 0;

    virtual antlrcpp::Any visitLiteral(TURTLEParser::LiteralContext *context) = 0;

    virtual antlrcpp::Any visitBlankNodePropertyList(TURTLEParser::BlankNodePropertyListContext *context) = 0;

    virtual antlrcpp::Any visitCollection(TURTLEParser::CollectionContext *context) = 0;

    virtual antlrcpp::Any visitNumericLiteral(TURTLEParser::NumericLiteralContext *context) = 0;

    virtual antlrcpp::Any visitRdfLiteral(TURTLEParser::RdfLiteralContext *context) = 0;

    virtual antlrcpp::Any visitBooleanLiteral(TURTLEParser::BooleanLiteralContext *context) = 0;

    virtual antlrcpp::Any visitString_(TURTLEParser::String_Context *context) = 0;

    virtual antlrcpp::Any visitIri(TURTLEParser::IriContext *context) = 0;

    virtual antlrcpp::Any visitPrefixedName(TURTLEParser::PrefixedNameContext *context) = 0;

    virtual antlrcpp::Any visitBlankNode(TURTLEParser::BlankNodeContext *context) = 0;


};

