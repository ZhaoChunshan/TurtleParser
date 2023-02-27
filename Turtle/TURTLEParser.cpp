
// Generated from ./TURTLE.g4 by ANTLR 4.7.2


#include "TURTLEListener.h"
#include "TURTLEVisitor.h"

#include "TURTLEParser.h"


using namespace antlrcpp;
using namespace antlr4;

TURTLEParser::TURTLEParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TURTLEParser::~TURTLEParser() {
  delete _interpreter;
}

std::string TURTLEParser::getGrammarFileName() const {
  return "TURTLE.g4";
}

const std::vector<std::string>& TURTLEParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& TURTLEParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- TurtleDocContext ------------------------------------------------------------------

TURTLEParser::TurtleDocContext::TurtleDocContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TURTLEParser::TurtleDocContext::EOF() {
  return getToken(TURTLEParser::EOF, 0);
}

std::vector<TURTLEParser::StatementContext *> TURTLEParser::TurtleDocContext::statement() {
  return getRuleContexts<TURTLEParser::StatementContext>();
}

TURTLEParser::StatementContext* TURTLEParser::TurtleDocContext::statement(size_t i) {
  return getRuleContext<TURTLEParser::StatementContext>(i);
}


size_t TURTLEParser::TurtleDocContext::getRuleIndex() const {
  return TURTLEParser::RuleTurtleDoc;
}

void TURTLEParser::TurtleDocContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTurtleDoc(this);
}

void TURTLEParser::TurtleDocContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTurtleDoc(this);
}


antlrcpp::Any TURTLEParser::TurtleDocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitTurtleDoc(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::TurtleDocContext* TURTLEParser::turtleDoc() {
  TurtleDocContext *_localctx = _tracker.createInstance<TurtleDocContext>(_ctx, getState());
  enterRule(_localctx, 0, TURTLEParser::RuleTurtleDoc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(51);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TURTLEParser::T__1)
      | (1ULL << TURTLEParser::T__2)
      | (1ULL << TURTLEParser::T__6)
      | (1ULL << TURTLEParser::T__8)
      | (1ULL << TURTLEParser::BASE)
      | (1ULL << TURTLEParser::PREFIX)
      | (1ULL << TURTLEParser::IRIREF)
      | (1ULL << TURTLEParser::PNAME_NS)
      | (1ULL << TURTLEParser::PNAME_LN)
      | (1ULL << TURTLEParser::BLANK_NODE_LABEL)
      | (1ULL << TURTLEParser::ANON))) != 0)) {
      setState(48);
      statement();
      setState(53);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(54);
    match(TURTLEParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

TURTLEParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TURTLEParser::DirectiveContext* TURTLEParser::StatementContext::directive() {
  return getRuleContext<TURTLEParser::DirectiveContext>(0);
}

TURTLEParser::TriplesContext* TURTLEParser::StatementContext::triples() {
  return getRuleContext<TURTLEParser::TriplesContext>(0);
}


size_t TURTLEParser::StatementContext::getRuleIndex() const {
  return TURTLEParser::RuleStatement;
}

void TURTLEParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void TURTLEParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


antlrcpp::Any TURTLEParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::StatementContext* TURTLEParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, TURTLEParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(60);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TURTLEParser::T__1:
      case TURTLEParser::T__2:
      case TURTLEParser::BASE:
      case TURTLEParser::PREFIX: {
        enterOuterAlt(_localctx, 1);
        setState(56);
        directive();
        break;
      }

      case TURTLEParser::T__6:
      case TURTLEParser::T__8:
      case TURTLEParser::IRIREF:
      case TURTLEParser::PNAME_NS:
      case TURTLEParser::PNAME_LN:
      case TURTLEParser::BLANK_NODE_LABEL:
      case TURTLEParser::ANON: {
        enterOuterAlt(_localctx, 2);
        setState(57);
        triples();
        setState(58);
        match(TURTLEParser::T__0);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DirectiveContext ------------------------------------------------------------------

TURTLEParser::DirectiveContext::DirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TURTLEParser::PrefixIDContext* TURTLEParser::DirectiveContext::prefixID() {
  return getRuleContext<TURTLEParser::PrefixIDContext>(0);
}

TURTLEParser::BaseContext* TURTLEParser::DirectiveContext::base() {
  return getRuleContext<TURTLEParser::BaseContext>(0);
}

TURTLEParser::SparqlPrefixContext* TURTLEParser::DirectiveContext::sparqlPrefix() {
  return getRuleContext<TURTLEParser::SparqlPrefixContext>(0);
}

TURTLEParser::SparqlBaseContext* TURTLEParser::DirectiveContext::sparqlBase() {
  return getRuleContext<TURTLEParser::SparqlBaseContext>(0);
}


size_t TURTLEParser::DirectiveContext::getRuleIndex() const {
  return TURTLEParser::RuleDirective;
}

void TURTLEParser::DirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDirective(this);
}

void TURTLEParser::DirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDirective(this);
}


antlrcpp::Any TURTLEParser::DirectiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitDirective(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::DirectiveContext* TURTLEParser::directive() {
  DirectiveContext *_localctx = _tracker.createInstance<DirectiveContext>(_ctx, getState());
  enterRule(_localctx, 4, TURTLEParser::RuleDirective);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TURTLEParser::T__1: {
        enterOuterAlt(_localctx, 1);
        setState(62);
        prefixID();
        break;
      }

      case TURTLEParser::T__2: {
        enterOuterAlt(_localctx, 2);
        setState(63);
        base();
        break;
      }

      case TURTLEParser::PREFIX: {
        enterOuterAlt(_localctx, 3);
        setState(64);
        sparqlPrefix();
        break;
      }

      case TURTLEParser::BASE: {
        enterOuterAlt(_localctx, 4);
        setState(65);
        sparqlBase();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixIDContext ------------------------------------------------------------------

TURTLEParser::PrefixIDContext::PrefixIDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TURTLEParser::PrefixIDContext::PNAME_NS() {
  return getToken(TURTLEParser::PNAME_NS, 0);
}

tree::TerminalNode* TURTLEParser::PrefixIDContext::IRIREF() {
  return getToken(TURTLEParser::IRIREF, 0);
}


size_t TURTLEParser::PrefixIDContext::getRuleIndex() const {
  return TURTLEParser::RulePrefixID;
}

void TURTLEParser::PrefixIDContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixID(this);
}

void TURTLEParser::PrefixIDContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixID(this);
}


antlrcpp::Any TURTLEParser::PrefixIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitPrefixID(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::PrefixIDContext* TURTLEParser::prefixID() {
  PrefixIDContext *_localctx = _tracker.createInstance<PrefixIDContext>(_ctx, getState());
  enterRule(_localctx, 6, TURTLEParser::RulePrefixID);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(68);
    match(TURTLEParser::T__1);
    setState(69);
    match(TURTLEParser::PNAME_NS);
    setState(70);
    match(TURTLEParser::IRIREF);
    setState(71);
    match(TURTLEParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BaseContext ------------------------------------------------------------------

TURTLEParser::BaseContext::BaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TURTLEParser::BaseContext::IRIREF() {
  return getToken(TURTLEParser::IRIREF, 0);
}


size_t TURTLEParser::BaseContext::getRuleIndex() const {
  return TURTLEParser::RuleBase;
}

void TURTLEParser::BaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBase(this);
}

void TURTLEParser::BaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBase(this);
}


antlrcpp::Any TURTLEParser::BaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitBase(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::BaseContext* TURTLEParser::base() {
  BaseContext *_localctx = _tracker.createInstance<BaseContext>(_ctx, getState());
  enterRule(_localctx, 8, TURTLEParser::RuleBase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    match(TURTLEParser::T__2);
    setState(74);
    match(TURTLEParser::IRIREF);
    setState(75);
    match(TURTLEParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SparqlBaseContext ------------------------------------------------------------------

TURTLEParser::SparqlBaseContext::SparqlBaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TURTLEParser::SparqlBaseContext::BASE() {
  return getToken(TURTLEParser::BASE, 0);
}

tree::TerminalNode* TURTLEParser::SparqlBaseContext::IRIREF() {
  return getToken(TURTLEParser::IRIREF, 0);
}


size_t TURTLEParser::SparqlBaseContext::getRuleIndex() const {
  return TURTLEParser::RuleSparqlBase;
}

void TURTLEParser::SparqlBaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSparqlBase(this);
}

void TURTLEParser::SparqlBaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSparqlBase(this);
}


antlrcpp::Any TURTLEParser::SparqlBaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitSparqlBase(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::SparqlBaseContext* TURTLEParser::sparqlBase() {
  SparqlBaseContext *_localctx = _tracker.createInstance<SparqlBaseContext>(_ctx, getState());
  enterRule(_localctx, 10, TURTLEParser::RuleSparqlBase);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(77);
    match(TURTLEParser::BASE);
    setState(78);
    match(TURTLEParser::IRIREF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SparqlPrefixContext ------------------------------------------------------------------

TURTLEParser::SparqlPrefixContext::SparqlPrefixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TURTLEParser::SparqlPrefixContext::PREFIX() {
  return getToken(TURTLEParser::PREFIX, 0);
}

tree::TerminalNode* TURTLEParser::SparqlPrefixContext::PNAME_NS() {
  return getToken(TURTLEParser::PNAME_NS, 0);
}

tree::TerminalNode* TURTLEParser::SparqlPrefixContext::IRIREF() {
  return getToken(TURTLEParser::IRIREF, 0);
}


size_t TURTLEParser::SparqlPrefixContext::getRuleIndex() const {
  return TURTLEParser::RuleSparqlPrefix;
}

void TURTLEParser::SparqlPrefixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSparqlPrefix(this);
}

void TURTLEParser::SparqlPrefixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSparqlPrefix(this);
}


antlrcpp::Any TURTLEParser::SparqlPrefixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitSparqlPrefix(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::SparqlPrefixContext* TURTLEParser::sparqlPrefix() {
  SparqlPrefixContext *_localctx = _tracker.createInstance<SparqlPrefixContext>(_ctx, getState());
  enterRule(_localctx, 12, TURTLEParser::RuleSparqlPrefix);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(80);
    match(TURTLEParser::PREFIX);
    setState(81);
    match(TURTLEParser::PNAME_NS);
    setState(82);
    match(TURTLEParser::IRIREF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TriplesContext ------------------------------------------------------------------

TURTLEParser::TriplesContext::TriplesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TURTLEParser::SubjectContext* TURTLEParser::TriplesContext::subject() {
  return getRuleContext<TURTLEParser::SubjectContext>(0);
}

TURTLEParser::PredicateObjectListContext* TURTLEParser::TriplesContext::predicateObjectList() {
  return getRuleContext<TURTLEParser::PredicateObjectListContext>(0);
}

TURTLEParser::BlankNodePropertyListContext* TURTLEParser::TriplesContext::blankNodePropertyList() {
  return getRuleContext<TURTLEParser::BlankNodePropertyListContext>(0);
}


size_t TURTLEParser::TriplesContext::getRuleIndex() const {
  return TURTLEParser::RuleTriples;
}

void TURTLEParser::TriplesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTriples(this);
}

void TURTLEParser::TriplesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTriples(this);
}


antlrcpp::Any TURTLEParser::TriplesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitTriples(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::TriplesContext* TURTLEParser::triples() {
  TriplesContext *_localctx = _tracker.createInstance<TriplesContext>(_ctx, getState());
  enterRule(_localctx, 14, TURTLEParser::RuleTriples);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(91);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TURTLEParser::T__8:
      case TURTLEParser::IRIREF:
      case TURTLEParser::PNAME_NS:
      case TURTLEParser::PNAME_LN:
      case TURTLEParser::BLANK_NODE_LABEL:
      case TURTLEParser::ANON: {
        enterOuterAlt(_localctx, 1);
        setState(84);
        subject();
        setState(85);
        predicateObjectList();
        break;
      }

      case TURTLEParser::T__6: {
        enterOuterAlt(_localctx, 2);
        setState(87);
        blankNodePropertyList();
        setState(89);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << TURTLEParser::T__5)
          | (1ULL << TURTLEParser::IRIREF)
          | (1ULL << TURTLEParser::PNAME_NS)
          | (1ULL << TURTLEParser::PNAME_LN))) != 0)) {
          setState(88);
          predicateObjectList();
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateObjectListContext ------------------------------------------------------------------

TURTLEParser::PredicateObjectListContext::PredicateObjectListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TURTLEParser::VerbContext *> TURTLEParser::PredicateObjectListContext::verb() {
  return getRuleContexts<TURTLEParser::VerbContext>();
}

TURTLEParser::VerbContext* TURTLEParser::PredicateObjectListContext::verb(size_t i) {
  return getRuleContext<TURTLEParser::VerbContext>(i);
}

std::vector<TURTLEParser::ObjectListContext *> TURTLEParser::PredicateObjectListContext::objectList() {
  return getRuleContexts<TURTLEParser::ObjectListContext>();
}

TURTLEParser::ObjectListContext* TURTLEParser::PredicateObjectListContext::objectList(size_t i) {
  return getRuleContext<TURTLEParser::ObjectListContext>(i);
}


size_t TURTLEParser::PredicateObjectListContext::getRuleIndex() const {
  return TURTLEParser::RulePredicateObjectList;
}

void TURTLEParser::PredicateObjectListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicateObjectList(this);
}

void TURTLEParser::PredicateObjectListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicateObjectList(this);
}


antlrcpp::Any TURTLEParser::PredicateObjectListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitPredicateObjectList(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::PredicateObjectListContext* TURTLEParser::predicateObjectList() {
  PredicateObjectListContext *_localctx = _tracker.createInstance<PredicateObjectListContext>(_ctx, getState());
  enterRule(_localctx, 16, TURTLEParser::RulePredicateObjectList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(93);
    verb();
    setState(94);
    objectList();
    setState(103);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TURTLEParser::T__3) {
      setState(95);
      match(TURTLEParser::T__3);
      setState(99);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << TURTLEParser::T__5)
        | (1ULL << TURTLEParser::IRIREF)
        | (1ULL << TURTLEParser::PNAME_NS)
        | (1ULL << TURTLEParser::PNAME_LN))) != 0)) {
        setState(96);
        verb();
        setState(97);
        objectList();
      }
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectListContext ------------------------------------------------------------------

TURTLEParser::ObjectListContext::ObjectListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TURTLEParser::Object_Context *> TURTLEParser::ObjectListContext::object_() {
  return getRuleContexts<TURTLEParser::Object_Context>();
}

TURTLEParser::Object_Context* TURTLEParser::ObjectListContext::object_(size_t i) {
  return getRuleContext<TURTLEParser::Object_Context>(i);
}


size_t TURTLEParser::ObjectListContext::getRuleIndex() const {
  return TURTLEParser::RuleObjectList;
}

void TURTLEParser::ObjectListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectList(this);
}

void TURTLEParser::ObjectListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectList(this);
}


antlrcpp::Any TURTLEParser::ObjectListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitObjectList(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::ObjectListContext* TURTLEParser::objectList() {
  ObjectListContext *_localctx = _tracker.createInstance<ObjectListContext>(_ctx, getState());
  enterRule(_localctx, 18, TURTLEParser::RuleObjectList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    object_();
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == TURTLEParser::T__4) {
      setState(107);
      match(TURTLEParser::T__4);
      setState(108);
      object_();
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VerbContext ------------------------------------------------------------------

TURTLEParser::VerbContext::VerbContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TURTLEParser::PredicateContext* TURTLEParser::VerbContext::predicate() {
  return getRuleContext<TURTLEParser::PredicateContext>(0);
}


size_t TURTLEParser::VerbContext::getRuleIndex() const {
  return TURTLEParser::RuleVerb;
}

void TURTLEParser::VerbContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVerb(this);
}

void TURTLEParser::VerbContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVerb(this);
}


antlrcpp::Any TURTLEParser::VerbContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitVerb(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::VerbContext* TURTLEParser::verb() {
  VerbContext *_localctx = _tracker.createInstance<VerbContext>(_ctx, getState());
  enterRule(_localctx, 20, TURTLEParser::RuleVerb);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(116);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TURTLEParser::IRIREF:
      case TURTLEParser::PNAME_NS:
      case TURTLEParser::PNAME_LN: {
        enterOuterAlt(_localctx, 1);
        setState(114);
        predicate();
        break;
      }

      case TURTLEParser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(115);
        match(TURTLEParser::T__5);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubjectContext ------------------------------------------------------------------

TURTLEParser::SubjectContext::SubjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TURTLEParser::IriContext* TURTLEParser::SubjectContext::iri() {
  return getRuleContext<TURTLEParser::IriContext>(0);
}

TURTLEParser::BlankNodeContext* TURTLEParser::SubjectContext::blankNode() {
  return getRuleContext<TURTLEParser::BlankNodeContext>(0);
}

TURTLEParser::CollectionContext* TURTLEParser::SubjectContext::collection() {
  return getRuleContext<TURTLEParser::CollectionContext>(0);
}


size_t TURTLEParser::SubjectContext::getRuleIndex() const {
  return TURTLEParser::RuleSubject;
}

void TURTLEParser::SubjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubject(this);
}

void TURTLEParser::SubjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubject(this);
}


antlrcpp::Any TURTLEParser::SubjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitSubject(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::SubjectContext* TURTLEParser::subject() {
  SubjectContext *_localctx = _tracker.createInstance<SubjectContext>(_ctx, getState());
  enterRule(_localctx, 22, TURTLEParser::RuleSubject);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(121);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TURTLEParser::IRIREF:
      case TURTLEParser::PNAME_NS:
      case TURTLEParser::PNAME_LN: {
        enterOuterAlt(_localctx, 1);
        setState(118);
        iri();
        break;
      }

      case TURTLEParser::BLANK_NODE_LABEL:
      case TURTLEParser::ANON: {
        enterOuterAlt(_localctx, 2);
        setState(119);
        blankNode();
        break;
      }

      case TURTLEParser::T__8: {
        enterOuterAlt(_localctx, 3);
        setState(120);
        collection();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PredicateContext ------------------------------------------------------------------

TURTLEParser::PredicateContext::PredicateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TURTLEParser::IriContext* TURTLEParser::PredicateContext::iri() {
  return getRuleContext<TURTLEParser::IriContext>(0);
}


size_t TURTLEParser::PredicateContext::getRuleIndex() const {
  return TURTLEParser::RulePredicate;
}

void TURTLEParser::PredicateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPredicate(this);
}

void TURTLEParser::PredicateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPredicate(this);
}


antlrcpp::Any TURTLEParser::PredicateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitPredicate(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::PredicateContext* TURTLEParser::predicate() {
  PredicateContext *_localctx = _tracker.createInstance<PredicateContext>(_ctx, getState());
  enterRule(_localctx, 24, TURTLEParser::RulePredicate);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    iri();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Object_Context ------------------------------------------------------------------

TURTLEParser::Object_Context::Object_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TURTLEParser::IriContext* TURTLEParser::Object_Context::iri() {
  return getRuleContext<TURTLEParser::IriContext>(0);
}

TURTLEParser::BlankNodeContext* TURTLEParser::Object_Context::blankNode() {
  return getRuleContext<TURTLEParser::BlankNodeContext>(0);
}

TURTLEParser::CollectionContext* TURTLEParser::Object_Context::collection() {
  return getRuleContext<TURTLEParser::CollectionContext>(0);
}

TURTLEParser::BlankNodePropertyListContext* TURTLEParser::Object_Context::blankNodePropertyList() {
  return getRuleContext<TURTLEParser::BlankNodePropertyListContext>(0);
}

TURTLEParser::LiteralContext* TURTLEParser::Object_Context::literal() {
  return getRuleContext<TURTLEParser::LiteralContext>(0);
}


size_t TURTLEParser::Object_Context::getRuleIndex() const {
  return TURTLEParser::RuleObject_;
}

void TURTLEParser::Object_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_(this);
}

void TURTLEParser::Object_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_(this);
}


antlrcpp::Any TURTLEParser::Object_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitObject_(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::Object_Context* TURTLEParser::object_() {
  Object_Context *_localctx = _tracker.createInstance<Object_Context>(_ctx, getState());
  enterRule(_localctx, 26, TURTLEParser::RuleObject_);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TURTLEParser::IRIREF:
      case TURTLEParser::PNAME_NS:
      case TURTLEParser::PNAME_LN: {
        enterOuterAlt(_localctx, 1);
        setState(125);
        iri();
        break;
      }

      case TURTLEParser::BLANK_NODE_LABEL:
      case TURTLEParser::ANON: {
        enterOuterAlt(_localctx, 2);
        setState(126);
        blankNode();
        break;
      }

      case TURTLEParser::T__8: {
        enterOuterAlt(_localctx, 3);
        setState(127);
        collection();
        break;
      }

      case TURTLEParser::T__6: {
        enterOuterAlt(_localctx, 4);
        setState(128);
        blankNodePropertyList();
        break;
      }

      case TURTLEParser::T__11:
      case TURTLEParser::T__12:
      case TURTLEParser::INTEGER:
      case TURTLEParser::DECIMAL:
      case TURTLEParser::DOUBLE:
      case TURTLEParser::STRING_LITERAL_QUOTE:
      case TURTLEParser::STRING_LITERAL_SINGLE_QUOTE:
      case TURTLEParser::STRING_LITERAL_LONG_SINGLE_QUOTE:
      case TURTLEParser::STRING_LITERAL_LONG_QUOTE: {
        enterOuterAlt(_localctx, 5);
        setState(129);
        literal();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LiteralContext ------------------------------------------------------------------

TURTLEParser::LiteralContext::LiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TURTLEParser::RdfLiteralContext* TURTLEParser::LiteralContext::rdfLiteral() {
  return getRuleContext<TURTLEParser::RdfLiteralContext>(0);
}

TURTLEParser::NumericLiteralContext* TURTLEParser::LiteralContext::numericLiteral() {
  return getRuleContext<TURTLEParser::NumericLiteralContext>(0);
}

TURTLEParser::BooleanLiteralContext* TURTLEParser::LiteralContext::booleanLiteral() {
  return getRuleContext<TURTLEParser::BooleanLiteralContext>(0);
}


size_t TURTLEParser::LiteralContext::getRuleIndex() const {
  return TURTLEParser::RuleLiteral;
}

void TURTLEParser::LiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLiteral(this);
}

void TURTLEParser::LiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLiteral(this);
}


antlrcpp::Any TURTLEParser::LiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitLiteral(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::LiteralContext* TURTLEParser::literal() {
  LiteralContext *_localctx = _tracker.createInstance<LiteralContext>(_ctx, getState());
  enterRule(_localctx, 28, TURTLEParser::RuleLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(135);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TURTLEParser::STRING_LITERAL_QUOTE:
      case TURTLEParser::STRING_LITERAL_SINGLE_QUOTE:
      case TURTLEParser::STRING_LITERAL_LONG_SINGLE_QUOTE:
      case TURTLEParser::STRING_LITERAL_LONG_QUOTE: {
        enterOuterAlt(_localctx, 1);
        setState(132);
        rdfLiteral();
        break;
      }

      case TURTLEParser::INTEGER:
      case TURTLEParser::DECIMAL:
      case TURTLEParser::DOUBLE: {
        enterOuterAlt(_localctx, 2);
        setState(133);
        numericLiteral();
        break;
      }

      case TURTLEParser::T__11:
      case TURTLEParser::T__12: {
        enterOuterAlt(_localctx, 3);
        setState(134);
        booleanLiteral();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlankNodePropertyListContext ------------------------------------------------------------------

TURTLEParser::BlankNodePropertyListContext::BlankNodePropertyListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TURTLEParser::PredicateObjectListContext* TURTLEParser::BlankNodePropertyListContext::predicateObjectList() {
  return getRuleContext<TURTLEParser::PredicateObjectListContext>(0);
}


size_t TURTLEParser::BlankNodePropertyListContext::getRuleIndex() const {
  return TURTLEParser::RuleBlankNodePropertyList;
}

void TURTLEParser::BlankNodePropertyListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlankNodePropertyList(this);
}

void TURTLEParser::BlankNodePropertyListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlankNodePropertyList(this);
}


antlrcpp::Any TURTLEParser::BlankNodePropertyListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitBlankNodePropertyList(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::BlankNodePropertyListContext* TURTLEParser::blankNodePropertyList() {
  BlankNodePropertyListContext *_localctx = _tracker.createInstance<BlankNodePropertyListContext>(_ctx, getState());
  enterRule(_localctx, 30, TURTLEParser::RuleBlankNodePropertyList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(137);
    match(TURTLEParser::T__6);
    setState(138);
    predicateObjectList();
    setState(139);
    match(TURTLEParser::T__7);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CollectionContext ------------------------------------------------------------------

TURTLEParser::CollectionContext::CollectionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<TURTLEParser::Object_Context *> TURTLEParser::CollectionContext::object_() {
  return getRuleContexts<TURTLEParser::Object_Context>();
}

TURTLEParser::Object_Context* TURTLEParser::CollectionContext::object_(size_t i) {
  return getRuleContext<TURTLEParser::Object_Context>(i);
}


size_t TURTLEParser::CollectionContext::getRuleIndex() const {
  return TURTLEParser::RuleCollection;
}

void TURTLEParser::CollectionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCollection(this);
}

void TURTLEParser::CollectionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCollection(this);
}


antlrcpp::Any TURTLEParser::CollectionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitCollection(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::CollectionContext* TURTLEParser::collection() {
  CollectionContext *_localctx = _tracker.createInstance<CollectionContext>(_ctx, getState());
  enterRule(_localctx, 32, TURTLEParser::RuleCollection);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(141);
    match(TURTLEParser::T__8);
    setState(145);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TURTLEParser::T__6)
      | (1ULL << TURTLEParser::T__8)
      | (1ULL << TURTLEParser::T__11)
      | (1ULL << TURTLEParser::T__12)
      | (1ULL << TURTLEParser::IRIREF)
      | (1ULL << TURTLEParser::PNAME_NS)
      | (1ULL << TURTLEParser::PNAME_LN)
      | (1ULL << TURTLEParser::BLANK_NODE_LABEL)
      | (1ULL << TURTLEParser::INTEGER)
      | (1ULL << TURTLEParser::DECIMAL)
      | (1ULL << TURTLEParser::DOUBLE)
      | (1ULL << TURTLEParser::STRING_LITERAL_QUOTE)
      | (1ULL << TURTLEParser::STRING_LITERAL_SINGLE_QUOTE)
      | (1ULL << TURTLEParser::STRING_LITERAL_LONG_SINGLE_QUOTE)
      | (1ULL << TURTLEParser::STRING_LITERAL_LONG_QUOTE)
      | (1ULL << TURTLEParser::ANON))) != 0)) {
      setState(142);
      object_();
      setState(147);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(148);
    match(TURTLEParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumericLiteralContext ------------------------------------------------------------------

TURTLEParser::NumericLiteralContext::NumericLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TURTLEParser::NumericLiteralContext::INTEGER() {
  return getToken(TURTLEParser::INTEGER, 0);
}

tree::TerminalNode* TURTLEParser::NumericLiteralContext::DECIMAL() {
  return getToken(TURTLEParser::DECIMAL, 0);
}

tree::TerminalNode* TURTLEParser::NumericLiteralContext::DOUBLE() {
  return getToken(TURTLEParser::DOUBLE, 0);
}


size_t TURTLEParser::NumericLiteralContext::getRuleIndex() const {
  return TURTLEParser::RuleNumericLiteral;
}

void TURTLEParser::NumericLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericLiteral(this);
}

void TURTLEParser::NumericLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericLiteral(this);
}


antlrcpp::Any TURTLEParser::NumericLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitNumericLiteral(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::NumericLiteralContext* TURTLEParser::numericLiteral() {
  NumericLiteralContext *_localctx = _tracker.createInstance<NumericLiteralContext>(_ctx, getState());
  enterRule(_localctx, 34, TURTLEParser::RuleNumericLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(150);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TURTLEParser::INTEGER)
      | (1ULL << TURTLEParser::DECIMAL)
      | (1ULL << TURTLEParser::DOUBLE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RdfLiteralContext ------------------------------------------------------------------

TURTLEParser::RdfLiteralContext::RdfLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

TURTLEParser::String_Context* TURTLEParser::RdfLiteralContext::string_() {
  return getRuleContext<TURTLEParser::String_Context>(0);
}

tree::TerminalNode* TURTLEParser::RdfLiteralContext::LANGTAG() {
  return getToken(TURTLEParser::LANGTAG, 0);
}

TURTLEParser::IriContext* TURTLEParser::RdfLiteralContext::iri() {
  return getRuleContext<TURTLEParser::IriContext>(0);
}


size_t TURTLEParser::RdfLiteralContext::getRuleIndex() const {
  return TURTLEParser::RuleRdfLiteral;
}

void TURTLEParser::RdfLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRdfLiteral(this);
}

void TURTLEParser::RdfLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRdfLiteral(this);
}


antlrcpp::Any TURTLEParser::RdfLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitRdfLiteral(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::RdfLiteralContext* TURTLEParser::rdfLiteral() {
  RdfLiteralContext *_localctx = _tracker.createInstance<RdfLiteralContext>(_ctx, getState());
  enterRule(_localctx, 36, TURTLEParser::RuleRdfLiteral);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    string_();
    setState(156);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TURTLEParser::LANGTAG: {
        setState(153);
        match(TURTLEParser::LANGTAG);
        break;
      }

      case TURTLEParser::T__10: {
        setState(154);
        match(TURTLEParser::T__10);
        setState(155);
        iri();
        break;
      }

      case TURTLEParser::T__0:
      case TURTLEParser::T__3:
      case TURTLEParser::T__4:
      case TURTLEParser::T__6:
      case TURTLEParser::T__7:
      case TURTLEParser::T__8:
      case TURTLEParser::T__9:
      case TURTLEParser::T__11:
      case TURTLEParser::T__12:
      case TURTLEParser::IRIREF:
      case TURTLEParser::PNAME_NS:
      case TURTLEParser::PNAME_LN:
      case TURTLEParser::BLANK_NODE_LABEL:
      case TURTLEParser::INTEGER:
      case TURTLEParser::DECIMAL:
      case TURTLEParser::DOUBLE:
      case TURTLEParser::STRING_LITERAL_QUOTE:
      case TURTLEParser::STRING_LITERAL_SINGLE_QUOTE:
      case TURTLEParser::STRING_LITERAL_LONG_SINGLE_QUOTE:
      case TURTLEParser::STRING_LITERAL_LONG_QUOTE:
      case TURTLEParser::ANON: {
        break;
      }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

TURTLEParser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t TURTLEParser::BooleanLiteralContext::getRuleIndex() const {
  return TURTLEParser::RuleBooleanLiteral;
}

void TURTLEParser::BooleanLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanLiteral(this);
}

void TURTLEParser::BooleanLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanLiteral(this);
}


antlrcpp::Any TURTLEParser::BooleanLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitBooleanLiteral(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::BooleanLiteralContext* TURTLEParser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 38, TURTLEParser::RuleBooleanLiteral);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(158);
    _la = _input->LA(1);
    if (!(_la == TURTLEParser::T__11

    || _la == TURTLEParser::T__12)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- String_Context ------------------------------------------------------------------

TURTLEParser::String_Context::String_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TURTLEParser::String_Context::STRING_LITERAL_QUOTE() {
  return getToken(TURTLEParser::STRING_LITERAL_QUOTE, 0);
}

tree::TerminalNode* TURTLEParser::String_Context::STRING_LITERAL_SINGLE_QUOTE() {
  return getToken(TURTLEParser::STRING_LITERAL_SINGLE_QUOTE, 0);
}

tree::TerminalNode* TURTLEParser::String_Context::STRING_LITERAL_LONG_SINGLE_QUOTE() {
  return getToken(TURTLEParser::STRING_LITERAL_LONG_SINGLE_QUOTE, 0);
}

tree::TerminalNode* TURTLEParser::String_Context::STRING_LITERAL_LONG_QUOTE() {
  return getToken(TURTLEParser::STRING_LITERAL_LONG_QUOTE, 0);
}


size_t TURTLEParser::String_Context::getRuleIndex() const {
  return TURTLEParser::RuleString_;
}

void TURTLEParser::String_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString_(this);
}

void TURTLEParser::String_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString_(this);
}


antlrcpp::Any TURTLEParser::String_Context::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitString_(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::String_Context* TURTLEParser::string_() {
  String_Context *_localctx = _tracker.createInstance<String_Context>(_ctx, getState());
  enterRule(_localctx, 40, TURTLEParser::RuleString_);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << TURTLEParser::STRING_LITERAL_QUOTE)
      | (1ULL << TURTLEParser::STRING_LITERAL_SINGLE_QUOTE)
      | (1ULL << TURTLEParser::STRING_LITERAL_LONG_SINGLE_QUOTE)
      | (1ULL << TURTLEParser::STRING_LITERAL_LONG_QUOTE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IriContext ------------------------------------------------------------------

TURTLEParser::IriContext::IriContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TURTLEParser::IriContext::IRIREF() {
  return getToken(TURTLEParser::IRIREF, 0);
}

TURTLEParser::PrefixedNameContext* TURTLEParser::IriContext::prefixedName() {
  return getRuleContext<TURTLEParser::PrefixedNameContext>(0);
}


size_t TURTLEParser::IriContext::getRuleIndex() const {
  return TURTLEParser::RuleIri;
}

void TURTLEParser::IriContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIri(this);
}

void TURTLEParser::IriContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIri(this);
}


antlrcpp::Any TURTLEParser::IriContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitIri(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::IriContext* TURTLEParser::iri() {
  IriContext *_localctx = _tracker.createInstance<IriContext>(_ctx, getState());
  enterRule(_localctx, 42, TURTLEParser::RuleIri);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(164);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case TURTLEParser::IRIREF: {
        enterOuterAlt(_localctx, 1);
        setState(162);
        match(TURTLEParser::IRIREF);
        break;
      }

      case TURTLEParser::PNAME_NS:
      case TURTLEParser::PNAME_LN: {
        enterOuterAlt(_localctx, 2);
        setState(163);
        prefixedName();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixedNameContext ------------------------------------------------------------------

TURTLEParser::PrefixedNameContext::PrefixedNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TURTLEParser::PrefixedNameContext::PNAME_LN() {
  return getToken(TURTLEParser::PNAME_LN, 0);
}

tree::TerminalNode* TURTLEParser::PrefixedNameContext::PNAME_NS() {
  return getToken(TURTLEParser::PNAME_NS, 0);
}


size_t TURTLEParser::PrefixedNameContext::getRuleIndex() const {
  return TURTLEParser::RulePrefixedName;
}

void TURTLEParser::PrefixedNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixedName(this);
}

void TURTLEParser::PrefixedNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixedName(this);
}


antlrcpp::Any TURTLEParser::PrefixedNameContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitPrefixedName(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::PrefixedNameContext* TURTLEParser::prefixedName() {
  PrefixedNameContext *_localctx = _tracker.createInstance<PrefixedNameContext>(_ctx, getState());
  enterRule(_localctx, 44, TURTLEParser::RulePrefixedName);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(166);
    _la = _input->LA(1);
    if (!(_la == TURTLEParser::PNAME_NS

    || _la == TURTLEParser::PNAME_LN)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlankNodeContext ------------------------------------------------------------------

TURTLEParser::BlankNodeContext::BlankNodeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* TURTLEParser::BlankNodeContext::BLANK_NODE_LABEL() {
  return getToken(TURTLEParser::BLANK_NODE_LABEL, 0);
}

tree::TerminalNode* TURTLEParser::BlankNodeContext::ANON() {
  return getToken(TURTLEParser::ANON, 0);
}


size_t TURTLEParser::BlankNodeContext::getRuleIndex() const {
  return TURTLEParser::RuleBlankNode;
}

void TURTLEParser::BlankNodeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlankNode(this);
}

void TURTLEParser::BlankNodeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<TURTLEListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlankNode(this);
}


antlrcpp::Any TURTLEParser::BlankNodeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<TURTLEVisitor*>(visitor))
    return parserVisitor->visitBlankNode(this);
  else
    return visitor->visitChildren(this);
}

TURTLEParser::BlankNodeContext* TURTLEParser::blankNode() {
  BlankNodeContext *_localctx = _tracker.createInstance<BlankNodeContext>(_ctx, getState());
  enterRule(_localctx, 46, TURTLEParser::RuleBlankNode);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    _la = _input->LA(1);
    if (!(_la == TURTLEParser::BLANK_NODE_LABEL

    || _la == TURTLEParser::ANON)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> TURTLEParser::_decisionToDFA;
atn::PredictionContextCache TURTLEParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TURTLEParser::_atn;
std::vector<uint16_t> TURTLEParser::_serializedATN;

std::vector<std::string> TURTLEParser::_ruleNames = {
  "turtleDoc", "statement", "directive", "prefixID", "base", "sparqlBase", 
  "sparqlPrefix", "triples", "predicateObjectList", "objectList", "verb", 
  "subject", "predicate", "object_", "literal", "blankNodePropertyList", 
  "collection", "numericLiteral", "rdfLiteral", "booleanLiteral", "string_", 
  "iri", "prefixedName", "blankNode"
};

std::vector<std::string> TURTLEParser::_literalNames = {
  "", "'.'", "'@prefix'", "'@base'", "';'", "','", "'a'", "'['", "']'", 
  "'('", "')'", "'^^'", "'true'", "'false'"
};

std::vector<std::string> TURTLEParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "WS", "BASE", 
  "PREFIX", "IRIREF", "PNAME_NS", "PNAME_LN", "BLANK_NODE_LABEL", "LANGTAG", 
  "INTEGER", "DECIMAL", "DOUBLE", "EXPONENT", "STRING_LITERAL_QUOTE", "STRING_LITERAL_SINGLE_QUOTE", 
  "STRING_LITERAL_LONG_SINGLE_QUOTE", "STRING_LITERAL_LONG_QUOTE", "UCHAR", 
  "ECHAR", "ANON_WS", "ANON", "PN_CHARS_BASE", "PN_CHARS_U", "PN_CHARS", 
  "PN_PREFIX", "PN_LOCAL", "PLX", "PERCENT", "HEX", "PN_LOCAL_ESC", "LC"
};

dfa::Vocabulary TURTLEParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TURTLEParser::_tokenNames;

TURTLEParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x2d, 0xad, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x3, 0x2, 0x7, 0x2, 0x34, 0xa, 0x2, 0xc, 0x2, 
    0xe, 0x2, 0x37, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x5, 0x3, 0x3f, 0xa, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x5, 0x4, 0x45, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 
    0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x5c, 0xa, 0x9, 0x5, 0x9, 
    0x5e, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x5, 0xa, 0x66, 0xa, 0xa, 0x7, 0xa, 0x68, 0xa, 0xa, 0xc, 0xa, 0xe, 
    0xa, 0x6b, 0xb, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x7, 0xb, 0x70, 0xa, 
    0xb, 0xc, 0xb, 0xe, 0xb, 0x73, 0xb, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 
    0x77, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x7c, 0xa, 0xd, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 
    0x5, 0xf, 0x85, 0xa, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 
    0x8a, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x7, 0x12, 0x92, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x95, 0xb, 
    0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0x9f, 0xa, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x5, 0x17, 0xa7, 0xa, 0x17, 
    0x3, 0x18, 0x3, 0x18, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x2, 0x2, 0x1a, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x2, 
    0x7, 0x3, 0x2, 0x18, 0x1a, 0x3, 0x2, 0xe, 0xf, 0x3, 0x2, 0x1c, 0x1f, 
    0x3, 0x2, 0x14, 0x15, 0x4, 0x2, 0x16, 0x16, 0x23, 0x23, 0x2, 0xab, 0x2, 
    0x35, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x6, 0x44, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x46, 0x3, 0x2, 0x2, 0x2, 0xa, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x4f, 0x3, 0x2, 0x2, 0x2, 0xe, 0x52, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x12, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x16, 0x76, 0x3, 0x2, 0x2, 0x2, 0x18, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x84, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x89, 0x3, 0x2, 0x2, 0x2, 0x20, 0x8b, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x8f, 0x3, 0x2, 0x2, 0x2, 0x24, 0x98, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x28, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x2e, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0x30, 0xaa, 0x3, 0x2, 0x2, 0x2, 0x32, 0x34, 
    0x5, 0x4, 0x3, 0x2, 0x33, 0x32, 0x3, 0x2, 0x2, 0x2, 0x34, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x35, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x38, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 0x3, 0x2, 0x2, 
    0x2, 0x38, 0x39, 0x7, 0x2, 0x2, 0x3, 0x39, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x3a, 0x3f, 0x5, 0x6, 0x4, 0x2, 0x3b, 0x3c, 0x5, 0x10, 0x9, 0x2, 0x3c, 
    0x3d, 0x7, 0x3, 0x2, 0x2, 0x3d, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3a, 
    0x3, 0x2, 0x2, 0x2, 0x3e, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x45, 0x5, 0x8, 0x5, 0x2, 0x41, 0x45, 0x5, 0xa, 
    0x6, 0x2, 0x42, 0x45, 0x5, 0xe, 0x8, 0x2, 0x43, 0x45, 0x5, 0xc, 0x7, 
    0x2, 0x44, 0x40, 0x3, 0x2, 0x2, 0x2, 0x44, 0x41, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x44, 0x43, 0x3, 0x2, 0x2, 0x2, 0x45, 
    0x7, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x7, 0x4, 0x2, 0x2, 0x47, 0x48, 
    0x7, 0x14, 0x2, 0x2, 0x48, 0x49, 0x7, 0x13, 0x2, 0x2, 0x49, 0x4a, 0x7, 
    0x3, 0x2, 0x2, 0x4a, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x5, 
    0x2, 0x2, 0x4c, 0x4d, 0x7, 0x13, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x3, 0x2, 
    0x2, 0x4e, 0xb, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x11, 0x2, 0x2, 
    0x50, 0x51, 0x7, 0x13, 0x2, 0x2, 0x51, 0xd, 0x3, 0x2, 0x2, 0x2, 0x52, 
    0x53, 0x7, 0x12, 0x2, 0x2, 0x53, 0x54, 0x7, 0x14, 0x2, 0x2, 0x54, 0x55, 
    0x7, 0x13, 0x2, 0x2, 0x55, 0xf, 0x3, 0x2, 0x2, 0x2, 0x56, 0x57, 0x5, 
    0x18, 0xd, 0x2, 0x57, 0x58, 0x5, 0x12, 0xa, 0x2, 0x58, 0x5e, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0x5b, 0x5, 0x20, 0x11, 0x2, 0x5a, 0x5c, 0x5, 0x12, 0xa, 
    0x2, 0x5b, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x56, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x59, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x11, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 
    0x5, 0x16, 0xc, 0x2, 0x60, 0x69, 0x5, 0x14, 0xb, 0x2, 0x61, 0x65, 0x7, 
    0x6, 0x2, 0x2, 0x62, 0x63, 0x5, 0x16, 0xc, 0x2, 0x63, 0x64, 0x5, 0x14, 
    0xb, 0x2, 0x64, 0x66, 0x3, 0x2, 0x2, 0x2, 0x65, 0x62, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x66, 0x3, 0x2, 0x2, 0x2, 0x66, 0x68, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x61, 0x3, 0x2, 0x2, 0x2, 0x68, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x69, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x71, 0x5, 
    0x1c, 0xf, 0x2, 0x6d, 0x6e, 0x7, 0x7, 0x2, 0x2, 0x6e, 0x70, 0x5, 0x1c, 
    0xf, 0x2, 0x6f, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x70, 0x73, 0x3, 0x2, 0x2, 
    0x2, 0x71, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x15, 0x3, 0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x74, 
    0x77, 0x5, 0x1a, 0xe, 0x2, 0x75, 0x77, 0x7, 0x8, 0x2, 0x2, 0x76, 0x74, 
    0x3, 0x2, 0x2, 0x2, 0x76, 0x75, 0x3, 0x2, 0x2, 0x2, 0x77, 0x17, 0x3, 
    0x2, 0x2, 0x2, 0x78, 0x7c, 0x5, 0x2c, 0x17, 0x2, 0x79, 0x7c, 0x5, 0x30, 
    0x19, 0x2, 0x7a, 0x7c, 0x5, 0x22, 0x12, 0x2, 0x7b, 0x78, 0x3, 0x2, 0x2, 
    0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7a, 0x3, 0x2, 0x2, 0x2, 
    0x7c, 0x19, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7e, 0x5, 0x2c, 0x17, 0x2, 0x7e, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x85, 0x5, 0x2c, 0x17, 0x2, 0x80, 0x85, 
    0x5, 0x30, 0x19, 0x2, 0x81, 0x85, 0x5, 0x22, 0x12, 0x2, 0x82, 0x85, 
    0x5, 0x20, 0x11, 0x2, 0x83, 0x85, 0x5, 0x1e, 0x10, 0x2, 0x84, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x84, 0x80, 0x3, 0x2, 0x2, 0x2, 0x84, 0x81, 0x3, 
    0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x83, 0x3, 0x2, 
    0x2, 0x2, 0x85, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x86, 0x8a, 0x5, 0x26, 0x14, 
    0x2, 0x87, 0x8a, 0x5, 0x24, 0x13, 0x2, 0x88, 0x8a, 0x5, 0x28, 0x15, 
    0x2, 0x89, 0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x87, 0x3, 0x2, 0x2, 0x2, 
    0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x8b, 
    0x8c, 0x7, 0x9, 0x2, 0x2, 0x8c, 0x8d, 0x5, 0x12, 0xa, 0x2, 0x8d, 0x8e, 
    0x7, 0xa, 0x2, 0x2, 0x8e, 0x21, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x93, 0x7, 
    0xb, 0x2, 0x2, 0x90, 0x92, 0x5, 0x1c, 0xf, 0x2, 0x91, 0x90, 0x3, 0x2, 
    0x2, 0x2, 0x92, 0x95, 0x3, 0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 
    0x2, 0x93, 0x94, 0x3, 0x2, 0x2, 0x2, 0x94, 0x96, 0x3, 0x2, 0x2, 0x2, 
    0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x96, 0x97, 0x7, 0xc, 0x2, 0x2, 0x97, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x98, 0x99, 0x9, 0x2, 0x2, 0x2, 0x99, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x9e, 0x5, 0x2a, 0x16, 0x2, 0x9b, 0x9f, 0x7, 
    0x17, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0xd, 0x2, 0x2, 0x9d, 0x9f, 0x5, 0x2c, 
    0x17, 0x2, 0x9e, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 0x3, 0x2, 0x2, 
    0x2, 0x9e, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9f, 0x27, 0x3, 0x2, 0x2, 0x2, 
    0xa0, 0xa1, 0x9, 0x3, 0x2, 0x2, 0xa1, 0x29, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0xa3, 0x9, 0x4, 0x2, 0x2, 0xa3, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa7, 
    0x7, 0x13, 0x2, 0x2, 0xa5, 0xa7, 0x5, 0x2e, 0x18, 0x2, 0xa6, 0xa4, 0x3, 
    0x2, 0x2, 0x2, 0xa6, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0x2d, 0x3, 0x2, 
    0x2, 0x2, 0xa8, 0xa9, 0x9, 0x5, 0x2, 0x2, 0xa9, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0xaa, 0xab, 0x9, 0x6, 0x2, 0x2, 0xab, 0x31, 0x3, 0x2, 0x2, 0x2, 
    0x11, 0x35, 0x3e, 0x44, 0x5b, 0x5d, 0x65, 0x69, 0x71, 0x76, 0x7b, 0x84, 
    0x89, 0x93, 0x9e, 0xa6, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TURTLEParser::Initializer TURTLEParser::_init;
