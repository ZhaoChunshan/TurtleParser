
// Generated from ./TURTLE.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TURTLELexer : public antlr4::Lexer {
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

  TURTLELexer(antlr4::CharStream *input);
  ~TURTLELexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

