
// Generated from ./TURTLE.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "TURTLEVisitor.h"


/**
 * This class provides an empty implementation of TURTLEVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  TURTLEBaseVisitor : public TURTLEVisitor {
public:

  virtual antlrcpp::Any visitTurtleDoc(TURTLEParser::TurtleDocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(TURTLEParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDirective(TURTLEParser::DirectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPrefixID(TURTLEParser::PrefixIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBase(TURTLEParser::BaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSparqlBase(TURTLEParser::SparqlBaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSparqlPrefix(TURTLEParser::SparqlPrefixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTriples(TURTLEParser::TriplesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicateObjectList(TURTLEParser::PredicateObjectListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObjectList(TURTLEParser::ObjectListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVerb(TURTLEParser::VerbContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSubject(TURTLEParser::SubjectContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPredicate(TURTLEParser::PredicateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitObject_(TURTLEParser::Object_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLiteral(TURTLEParser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlankNodePropertyList(TURTLEParser::BlankNodePropertyListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCollection(TURTLEParser::CollectionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRdfLiteral(TURTLEParser::RdfLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIri(TURTLEParser::IriContext *ctx) override {
    return visitChildren(ctx);
  }


};

