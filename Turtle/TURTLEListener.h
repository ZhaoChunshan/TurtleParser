
// Generated from ./TURTLE.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TURTLEParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by TURTLEParser.
 */
class  TURTLEListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterTurtleDoc(TURTLEParser::TurtleDocContext *ctx) = 0;
  virtual void exitTurtleDoc(TURTLEParser::TurtleDocContext *ctx) = 0;

  virtual void enterStatement(TURTLEParser::StatementContext *ctx) = 0;
  virtual void exitStatement(TURTLEParser::StatementContext *ctx) = 0;

  virtual void enterDirective(TURTLEParser::DirectiveContext *ctx) = 0;
  virtual void exitDirective(TURTLEParser::DirectiveContext *ctx) = 0;

  virtual void enterPrefixID(TURTLEParser::PrefixIDContext *ctx) = 0;
  virtual void exitPrefixID(TURTLEParser::PrefixIDContext *ctx) = 0;

  virtual void enterBase(TURTLEParser::BaseContext *ctx) = 0;
  virtual void exitBase(TURTLEParser::BaseContext *ctx) = 0;

  virtual void enterSparqlBase(TURTLEParser::SparqlBaseContext *ctx) = 0;
  virtual void exitSparqlBase(TURTLEParser::SparqlBaseContext *ctx) = 0;

  virtual void enterSparqlPrefix(TURTLEParser::SparqlPrefixContext *ctx) = 0;
  virtual void exitSparqlPrefix(TURTLEParser::SparqlPrefixContext *ctx) = 0;

  virtual void enterTriples(TURTLEParser::TriplesContext *ctx) = 0;
  virtual void exitTriples(TURTLEParser::TriplesContext *ctx) = 0;

  virtual void enterPredicateObjectList(TURTLEParser::PredicateObjectListContext *ctx) = 0;
  virtual void exitPredicateObjectList(TURTLEParser::PredicateObjectListContext *ctx) = 0;

  virtual void enterObjectList(TURTLEParser::ObjectListContext *ctx) = 0;
  virtual void exitObjectList(TURTLEParser::ObjectListContext *ctx) = 0;

  virtual void enterVerb(TURTLEParser::VerbContext *ctx) = 0;
  virtual void exitVerb(TURTLEParser::VerbContext *ctx) = 0;

  virtual void enterSubject(TURTLEParser::SubjectContext *ctx) = 0;
  virtual void exitSubject(TURTLEParser::SubjectContext *ctx) = 0;

  virtual void enterPredicate(TURTLEParser::PredicateContext *ctx) = 0;
  virtual void exitPredicate(TURTLEParser::PredicateContext *ctx) = 0;

  virtual void enterObject_(TURTLEParser::Object_Context *ctx) = 0;
  virtual void exitObject_(TURTLEParser::Object_Context *ctx) = 0;

  virtual void enterLiteral(TURTLEParser::LiteralContext *ctx) = 0;
  virtual void exitLiteral(TURTLEParser::LiteralContext *ctx) = 0;

  virtual void enterBlankNodePropertyList(TURTLEParser::BlankNodePropertyListContext *ctx) = 0;
  virtual void exitBlankNodePropertyList(TURTLEParser::BlankNodePropertyListContext *ctx) = 0;

  virtual void enterCollection(TURTLEParser::CollectionContext *ctx) = 0;
  virtual void exitCollection(TURTLEParser::CollectionContext *ctx) = 0;

  virtual void enterNumericLiteral(TURTLEParser::NumericLiteralContext *ctx) = 0;
  virtual void exitNumericLiteral(TURTLEParser::NumericLiteralContext *ctx) = 0;

  virtual void enterRdfLiteral(TURTLEParser::RdfLiteralContext *ctx) = 0;
  virtual void exitRdfLiteral(TURTLEParser::RdfLiteralContext *ctx) = 0;

  virtual void enterBooleanLiteral(TURTLEParser::BooleanLiteralContext *ctx) = 0;
  virtual void exitBooleanLiteral(TURTLEParser::BooleanLiteralContext *ctx) = 0;

  virtual void enterString_(TURTLEParser::String_Context *ctx) = 0;
  virtual void exitString_(TURTLEParser::String_Context *ctx) = 0;

  virtual void enterIri(TURTLEParser::IriContext *ctx) = 0;
  virtual void exitIri(TURTLEParser::IriContext *ctx) = 0;

  virtual void enterPrefixedName(TURTLEParser::PrefixedNameContext *ctx) = 0;
  virtual void exitPrefixedName(TURTLEParser::PrefixedNameContext *ctx) = 0;

  virtual void enterBlankNode(TURTLEParser::BlankNodeContext *ctx) = 0;
  virtual void exitBlankNode(TURTLEParser::BlankNodeContext *ctx) = 0;


};

