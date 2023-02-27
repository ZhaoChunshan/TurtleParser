
// Generated from ./TURTLE.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TURTLEParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20, 
    T__20 = 21, T__21 = 22, T__22 = 23, T__23 = 24, T__24 = 25, T__25 = 26, 
    T__26 = 27, T__27 = 28, NumericLiteral = 29, BooleanLiteral = 30, String = 31, 
    PrefixedName = 32, BlankNode = 33, WS = 34, IRIREF = 35, PNAME_NS = 36, 
    PNAME_LN = 37, BLANK_NODE_LABEL = 38, LANGTAG = 39, INTEGER = 40, DECIMAL = 41, 
    DOUBLE = 42, EXPONENT = 43, STRING_LITERAL_QUOTE = 44, STRING_LITERAL_SINGLE_QUOTE = 45, 
    STRING_LITERAL_LONG_SINGLE_QUOTE = 46, STRING_LITERAL_LONG_QUOTE = 47, 
    UCHAR = 48, ECHAR = 49, ANON_WS = 50, ANON = 51, PN_CHARS_BASE = 52, 
    PN_CHARS_U = 53, PN_CHARS = 54, PN_PREFIX = 55, PN_LOCAL = 56, PLX = 57, 
    PERCENT = 58, HEX = 59, PN_LOCAL_ESC = 60, LC = 61
  };

  enum {
    RuleTurtleDoc = 0, RuleStatement = 1, RuleDirective = 2, RulePrefixID = 3, 
    RuleBase = 4, RuleSparqlBase = 5, RuleSparqlPrefix = 6, RuleTriples = 7, 
    RulePredicateObjectList = 8, RuleObjectList = 9, RuleVerb = 10, RuleSubject = 11, 
    RulePredicate = 12, RuleObject_ = 13, RuleLiteral = 14, RuleBlankNodePropertyList = 15, 
    RuleCollection = 16, RuleRdfLiteral = 17, RuleIri = 18
  };

  TURTLEParser(antlr4::TokenStream *input);
  ~TURTLEParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class TurtleDocContext;
  class StatementContext;
  class DirectiveContext;
  class PrefixIDContext;
  class BaseContext;
  class SparqlBaseContext;
  class SparqlPrefixContext;
  class TriplesContext;
  class PredicateObjectListContext;
  class ObjectListContext;
  class VerbContext;
  class SubjectContext;
  class PredicateContext;
  class Object_Context;
  class LiteralContext;
  class BlankNodePropertyListContext;
  class CollectionContext;
  class RdfLiteralContext;
  class IriContext; 

  class  TurtleDocContext : public antlr4::ParserRuleContext {
  public:
    TurtleDocContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TurtleDocContext* turtleDoc();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DirectiveContext *directive();
    TriplesContext *triples();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  DirectiveContext : public antlr4::ParserRuleContext {
  public:
    DirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrefixIDContext *prefixID();
    BaseContext *base();
    SparqlPrefixContext *sparqlPrefix();
    SparqlBaseContext *sparqlBase();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectiveContext* directive();

  class  PrefixIDContext : public antlr4::ParserRuleContext {
  public:
    PrefixIDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PNAME_NS();
    antlr4::tree::TerminalNode *IRIREF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrefixIDContext* prefixID();

  class  BaseContext : public antlr4::ParserRuleContext {
  public:
    BaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IRIREF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BaseContext* base();

  class  SparqlBaseContext : public antlr4::ParserRuleContext {
  public:
    SparqlBaseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IRIREF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SparqlBaseContext* sparqlBase();

  class  SparqlPrefixContext : public antlr4::ParserRuleContext {
  public:
    SparqlPrefixContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PNAME_NS();
    antlr4::tree::TerminalNode *IRIREF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SparqlPrefixContext* sparqlPrefix();

  class  TriplesContext : public antlr4::ParserRuleContext {
  public:
    TriplesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SubjectContext *subject();
    PredicateObjectListContext *predicateObjectList();
    BlankNodePropertyListContext *blankNodePropertyList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TriplesContext* triples();

  class  PredicateObjectListContext : public antlr4::ParserRuleContext {
  public:
    PredicateObjectListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VerbContext *> verb();
    VerbContext* verb(size_t i);
    std::vector<ObjectListContext *> objectList();
    ObjectListContext* objectList(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateObjectListContext* predicateObjectList();

  class  ObjectListContext : public antlr4::ParserRuleContext {
  public:
    ObjectListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Object_Context *> object_();
    Object_Context* object_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectListContext* objectList();

  class  VerbContext : public antlr4::ParserRuleContext {
  public:
    VerbContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicateContext *predicate();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VerbContext* verb();

  class  SubjectContext : public antlr4::ParserRuleContext {
  public:
    SubjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IriContext *iri();
    antlr4::tree::TerminalNode *BlankNode();
    CollectionContext *collection();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SubjectContext* subject();

  class  PredicateContext : public antlr4::ParserRuleContext {
  public:
    PredicateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IriContext *iri();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PredicateContext* predicate();

  class  Object_Context : public antlr4::ParserRuleContext {
  public:
    Object_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IriContext *iri();
    antlr4::tree::TerminalNode *BlankNode();
    CollectionContext *collection();
    BlankNodePropertyListContext *blankNodePropertyList();
    LiteralContext *literal();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Object_Context* object_();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RdfLiteralContext *rdfLiteral();
    antlr4::tree::TerminalNode *NumericLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  BlankNodePropertyListContext : public antlr4::ParserRuleContext {
  public:
    BlankNodePropertyListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PredicateObjectListContext *predicateObjectList();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlankNodePropertyListContext* blankNodePropertyList();

  class  CollectionContext : public antlr4::ParserRuleContext {
  public:
    CollectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Object_Context *> object_();
    Object_Context* object_(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CollectionContext* collection();

  class  RdfLiteralContext : public antlr4::ParserRuleContext {
  public:
    RdfLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *String();
    antlr4::tree::TerminalNode *LANGTAG();
    IriContext *iri();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RdfLiteralContext* rdfLiteral();

  class  IriContext : public antlr4::ParserRuleContext {
  public:
    IriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IRIREF();
    antlr4::tree::TerminalNode *PrefixedName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IriContext* iri();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

