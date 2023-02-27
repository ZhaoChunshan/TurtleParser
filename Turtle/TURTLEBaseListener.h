
// Generated from ./TURTLE.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TURTLEListener.h"


/**
 * This class provides an empty implementation of TURTLEListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  TURTLEBaseListener : public TURTLEListener {
public:

  virtual void enterTurtleDoc(TURTLEParser::TurtleDocContext * /*ctx*/) override { }
  virtual void exitTurtleDoc(TURTLEParser::TurtleDocContext * /*ctx*/) override { }

  virtual void enterStatement(TURTLEParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(TURTLEParser::StatementContext * /*ctx*/) override { }

  virtual void enterDirective(TURTLEParser::DirectiveContext * /*ctx*/) override { }
  virtual void exitDirective(TURTLEParser::DirectiveContext * /*ctx*/) override { }

  virtual void enterPrefixID(TURTLEParser::PrefixIDContext * /*ctx*/) override { }
  virtual void exitPrefixID(TURTLEParser::PrefixIDContext * /*ctx*/) override { }

  virtual void enterBase(TURTLEParser::BaseContext * /*ctx*/) override { }
  virtual void exitBase(TURTLEParser::BaseContext * /*ctx*/) override { }

  virtual void enterSparqlBase(TURTLEParser::SparqlBaseContext * /*ctx*/) override { }
  virtual void exitSparqlBase(TURTLEParser::SparqlBaseContext * /*ctx*/) override { }

  virtual void enterSparqlPrefix(TURTLEParser::SparqlPrefixContext * /*ctx*/) override { }
  virtual void exitSparqlPrefix(TURTLEParser::SparqlPrefixContext * /*ctx*/) override { }

  virtual void enterTriples(TURTLEParser::TriplesContext * /*ctx*/) override { }
  virtual void exitTriples(TURTLEParser::TriplesContext * /*ctx*/) override { }

  virtual void enterPredicateObjectList(TURTLEParser::PredicateObjectListContext * /*ctx*/) override { }
  virtual void exitPredicateObjectList(TURTLEParser::PredicateObjectListContext * /*ctx*/) override { }

  virtual void enterObjectList(TURTLEParser::ObjectListContext * /*ctx*/) override { }
  virtual void exitObjectList(TURTLEParser::ObjectListContext * /*ctx*/) override { }

  virtual void enterVerb(TURTLEParser::VerbContext * /*ctx*/) override { }
  virtual void exitVerb(TURTLEParser::VerbContext * /*ctx*/) override { }

  virtual void enterSubject(TURTLEParser::SubjectContext * /*ctx*/) override { }
  virtual void exitSubject(TURTLEParser::SubjectContext * /*ctx*/) override { }

  virtual void enterPredicate(TURTLEParser::PredicateContext * /*ctx*/) override { }
  virtual void exitPredicate(TURTLEParser::PredicateContext * /*ctx*/) override { }

  virtual void enterObject_(TURTLEParser::Object_Context * /*ctx*/) override { }
  virtual void exitObject_(TURTLEParser::Object_Context * /*ctx*/) override { }

  virtual void enterLiteral(TURTLEParser::LiteralContext * /*ctx*/) override { }
  virtual void exitLiteral(TURTLEParser::LiteralContext * /*ctx*/) override { }

  virtual void enterBlankNodePropertyList(TURTLEParser::BlankNodePropertyListContext * /*ctx*/) override { }
  virtual void exitBlankNodePropertyList(TURTLEParser::BlankNodePropertyListContext * /*ctx*/) override { }

  virtual void enterCollection(TURTLEParser::CollectionContext * /*ctx*/) override { }
  virtual void exitCollection(TURTLEParser::CollectionContext * /*ctx*/) override { }

  virtual void enterNumericLiteral(TURTLEParser::NumericLiteralContext * /*ctx*/) override { }
  virtual void exitNumericLiteral(TURTLEParser::NumericLiteralContext * /*ctx*/) override { }

  virtual void enterRdfLiteral(TURTLEParser::RdfLiteralContext * /*ctx*/) override { }
  virtual void exitRdfLiteral(TURTLEParser::RdfLiteralContext * /*ctx*/) override { }

  virtual void enterBooleanLiteral(TURTLEParser::BooleanLiteralContext * /*ctx*/) override { }
  virtual void exitBooleanLiteral(TURTLEParser::BooleanLiteralContext * /*ctx*/) override { }

  virtual void enterString_(TURTLEParser::String_Context * /*ctx*/) override { }
  virtual void exitString_(TURTLEParser::String_Context * /*ctx*/) override { }

  virtual void enterIri(TURTLEParser::IriContext * /*ctx*/) override { }
  virtual void exitIri(TURTLEParser::IriContext * /*ctx*/) override { }

  virtual void enterPrefixedName(TURTLEParser::PrefixedNameContext * /*ctx*/) override { }
  virtual void exitPrefixedName(TURTLEParser::PrefixedNameContext * /*ctx*/) override { }

  virtual void enterBlankNode(TURTLEParser::BlankNodeContext * /*ctx*/) override { }
  virtual void exitBlankNode(TURTLEParser::BlankNodeContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

