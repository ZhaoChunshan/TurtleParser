
// Generated from ./TURTLE.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TURTLEParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, WS = 14, 
    BASE = 15, PREFIX = 16, IRIREF = 17, PNAME_NS = 18, PNAME_LN = 19, BLANK_NODE_LABEL = 20, 
    LANGTAG = 21, INTEGER = 22, DECIMAL = 23, DOUBLE = 24, EXPONENT = 25, 
    STRING_LITERAL_QUOTE = 26, STRING_LITERAL_SINGLE_QUOTE = 27, STRING_LITERAL_LONG_SINGLE_QUOTE = 28, 
    STRING_LITERAL_LONG_QUOTE = 29, UCHAR = 30, ECHAR = 31, ANON_WS = 32, 
    ANON = 33, PN_CHARS_BASE = 34, PN_CHARS_U = 35, PN_CHARS = 36, PN_PREFIX = 37, 
    PN_LOCAL = 38, PLX = 39, PERCENT = 40, HEX = 41, PN_LOCAL_ESC = 42, 
    LC = 43
  };

  enum {
    RuleTurtleDoc = 0, RuleStatement = 1, RuleDirective = 2, RulePrefixID = 3, 
    RuleBase = 4, RuleSparqlBase = 5, RuleSparqlPrefix = 6, RuleTriples = 7, 
    RulePredicateObjectList = 8, RuleObjectList = 9, RuleVerb = 10, RuleSubject = 11, 
    RulePredicate = 12, RuleObject_ = 13, RuleLiteral = 14, RuleBlankNodePropertyList = 15, 
    RuleCollection = 16, RuleNumericLiteral = 17, RuleRdfLiteral = 18, RuleBooleanLiteral = 19, 
    RuleString_ = 20, RuleIri = 21, RulePrefixedName = 22, RuleBlankNode = 23
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
  class NumericLiteralContext;
  class RdfLiteralContext;
  class BooleanLiteralContext;
  class String_Context;
  class IriContext;
  class PrefixedNameContext;
  class BlankNodeContext; 

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
    antlr4::tree::TerminalNode *BASE();
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
    antlr4::tree::TerminalNode *PREFIX();
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
    BlankNodeContext *blankNode();
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
    BlankNodeContext *blankNode();
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
    NumericLiteralContext *numericLiteral();
    BooleanLiteralContext *booleanLiteral();

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

  class  NumericLiteralContext : public antlr4::ParserRuleContext {
  public:
    NumericLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *DECIMAL();
    antlr4::tree::TerminalNode *DOUBLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumericLiteralContext* numericLiteral();

  class  RdfLiteralContext : public antlr4::ParserRuleContext {
  public:
    RdfLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    String_Context *string_();
    antlr4::tree::TerminalNode *LANGTAG();
    IriContext *iri();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RdfLiteralContext* rdfLiteral();

  class  BooleanLiteralContext : public antlr4::ParserRuleContext {
  public:
    BooleanLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BooleanLiteralContext* booleanLiteral();

  class  String_Context : public antlr4::ParserRuleContext {
  public:
    String_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_LITERAL_QUOTE();
    antlr4::tree::TerminalNode *STRING_LITERAL_SINGLE_QUOTE();
    antlr4::tree::TerminalNode *STRING_LITERAL_LONG_SINGLE_QUOTE();
    antlr4::tree::TerminalNode *STRING_LITERAL_LONG_QUOTE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  String_Context* string_();

  class  IriContext : public antlr4::ParserRuleContext {
  public:
    IriContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IRIREF();
    PrefixedNameContext *prefixedName();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IriContext* iri();

  class  PrefixedNameContext : public antlr4::ParserRuleContext {
  public:
    PrefixedNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PNAME_LN();
    antlr4::tree::TerminalNode *PNAME_NS();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrefixedNameContext* prefixedName();

  class  BlankNodeContext : public antlr4::ParserRuleContext {
  public:
    BlankNodeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BLANK_NODE_LABEL();
    antlr4::tree::TerminalNode *ANON();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlankNodeContext* blankNode();


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

