
// Generated from ./TURTLE.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  TURTLELexer : public antlr4::Lexer {
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

