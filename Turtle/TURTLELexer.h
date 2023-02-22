
// Generated from ./TURTLE.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TURTLELexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, BASE = 12, PREFIX = 13, NumericLiteral = 14, 
    BooleanLiteral = 15, String = 16, BlankNode = 17, WS = 18, PN_PREFIX = 19, 
    IRIREF = 20, PNAME_NS = 21, PrefixedName = 22, PNAME_LN = 23, BLANK_NODE_LABEL = 24, 
    LANGTAG = 25, INTEGER = 26, DECIMAL = 27, DOUBLE = 28, EXPONENT = 29, 
    STRING_LITERAL_LONG_SINGLE_QUOTE = 30, STRING_LITERAL_LONG_QUOTE = 31, 
    STRING_LITERAL_QUOTE = 32, STRING_LITERAL_SINGLE_QUOTE = 33, UCHAR = 34, 
    ECHAR = 35, ANON_WS = 36, ANON = 37, PN_CHARS_BASE = 38, PN_CHARS_U = 39, 
    PN_CHARS = 40, PN_LOCAL = 41, PLX = 42, PERCENT = 43, HEX = 44, PN_LOCAL_ESC = 45, 
    LC = 46
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

