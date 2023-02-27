
// Generated from ./TURTLE.g4 by ANTLR 4.7.2


#include "TURTLELexer.h"


using namespace antlr4;


TURTLELexer::TURTLELexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

TURTLELexer::~TURTLELexer() {
  delete _interpreter;
}

std::string TURTLELexer::getGrammarFileName() const {
  return "TURTLE.g4";
}

const std::vector<std::string>& TURTLELexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& TURTLELexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& TURTLELexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& TURTLELexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& TURTLELexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> TURTLELexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& TURTLELexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> TURTLELexer::_decisionToDFA;
atn::PredictionContextCache TURTLELexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN TURTLELexer::_atn;
std::vector<uint16_t> TURTLELexer::_serializedATN;

std::vector<std::string> TURTLELexer::_ruleNames = {
  u8"T__0", u8"T__1", u8"T__2", u8"T__3", u8"T__4", u8"T__5", u8"T__6", 
  u8"T__7", u8"T__8", u8"T__9", u8"T__10", u8"T__11", u8"T__12", u8"WS", 
  u8"BASE", u8"PREFIX", u8"IRIREF", u8"PNAME_NS", u8"PNAME_LN", u8"BLANK_NODE_LABEL", 
  u8"LANGTAG", u8"INTEGER", u8"DECIMAL", u8"DOUBLE", u8"EXPONENT", u8"STRING_LITERAL_QUOTE", 
  u8"STRING_LITERAL_SINGLE_QUOTE", u8"STRING_LITERAL_LONG_SINGLE_QUOTE", 
  u8"STRING_LITERAL_LONG_QUOTE", u8"UCHAR", u8"ECHAR", u8"ANON_WS", u8"ANON", 
  u8"PN_CHARS_BASE", u8"PN_CHARS_U", u8"PN_CHARS", u8"PN_PREFIX", u8"PN_LOCAL", 
  u8"PLX", u8"PERCENT", u8"HEX", u8"PN_LOCAL_ESC", u8"LC"
};

std::vector<std::string> TURTLELexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> TURTLELexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> TURTLELexer::_literalNames = {
  "", u8"'.'", u8"'@prefix'", u8"'@base'", u8"';'", u8"','", u8"'a'", u8"'['", 
  u8"']'", u8"'('", u8"')'", u8"'^^'", u8"'true'", u8"'false'"
};

std::vector<std::string> TURTLELexer::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", u8"WS", u8"BASE", 
  u8"PREFIX", u8"IRIREF", u8"PNAME_NS", u8"PNAME_LN", u8"BLANK_NODE_LABEL", 
  u8"LANGTAG", u8"INTEGER", u8"DECIMAL", u8"DOUBLE", u8"EXPONENT", u8"STRING_LITERAL_QUOTE", 
  u8"STRING_LITERAL_SINGLE_QUOTE", u8"STRING_LITERAL_LONG_SINGLE_QUOTE", 
  u8"STRING_LITERAL_LONG_QUOTE", u8"UCHAR", u8"ECHAR", u8"ANON_WS", u8"ANON", 
  u8"PN_CHARS_BASE", u8"PN_CHARS_U", u8"PN_CHARS", u8"PN_PREFIX", u8"PN_LOCAL", 
  u8"PLX", u8"PERCENT", u8"HEX", u8"PN_LOCAL_ESC", u8"LC"
};

dfa::Vocabulary TURTLELexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> TURTLELexer::_tokenNames;

TURTLELexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
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
    0x2, 0x2d, 0x1b1, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
    0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 
    0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
    0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 
    0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 
    0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 
    0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 
    0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 
    0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 
    0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 
    0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 
    0x25, 0x9, 0x25, 0x4, 0x26, 0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 
    0x9, 0x28, 0x4, 0x29, 0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 
    0x2b, 0x4, 0x2c, 0x9, 0x2c, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x6, 0xf, 
    0x87, 0xa, 0xf, 0xd, 0xf, 0xe, 0xf, 0x88, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x7, 0x12, 0x9b, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0x9e, 0xb, 0x12, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x13, 0x5, 0x13, 0xa3, 0xa, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x15, 0x3, 0x15, 0x5, 0x15, 0xaf, 0xa, 0x15, 0x3, 0x15, 0x3, 0x15, 
    0x7, 0x15, 0xb3, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xb6, 0xb, 0x15, 0x3, 
    0x15, 0x5, 0x15, 0xb9, 0xa, 0x15, 0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 0xbd, 
    0xa, 0x16, 0xd, 0x16, 0xe, 0x16, 0xbe, 0x3, 0x16, 0x3, 0x16, 0x6, 0x16, 
    0xc3, 0xa, 0x16, 0xd, 0x16, 0xe, 0x16, 0xc4, 0x7, 0x16, 0xc7, 0xa, 0x16, 
    0xc, 0x16, 0xe, 0x16, 0xca, 0xb, 0x16, 0x3, 0x17, 0x5, 0x17, 0xcd, 0xa, 
    0x17, 0x3, 0x17, 0x6, 0x17, 0xd0, 0xa, 0x17, 0xd, 0x17, 0xe, 0x17, 0xd1, 
    0x3, 0x18, 0x5, 0x18, 0xd5, 0xa, 0x18, 0x3, 0x18, 0x7, 0x18, 0xd8, 0xa, 
    0x18, 0xc, 0x18, 0xe, 0x18, 0xdb, 0xb, 0x18, 0x3, 0x18, 0x3, 0x18, 0x6, 
    0x18, 0xdf, 0xa, 0x18, 0xd, 0x18, 0xe, 0x18, 0xe0, 0x3, 0x19, 0x5, 0x19, 
    0xe4, 0xa, 0x19, 0x3, 0x19, 0x6, 0x19, 0xe7, 0xa, 0x19, 0xd, 0x19, 0xe, 
    0x19, 0xe8, 0x3, 0x19, 0x3, 0x19, 0x7, 0x19, 0xed, 0xa, 0x19, 0xc, 0x19, 
    0xe, 0x19, 0xf0, 0xb, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x6, 0x19, 
    0xf5, 0xa, 0x19, 0xd, 0x19, 0xe, 0x19, 0xf6, 0x3, 0x19, 0x3, 0x19, 0x6, 
    0x19, 0xfb, 0xa, 0x19, 0xd, 0x19, 0xe, 0x19, 0xfc, 0x3, 0x19, 0x5, 0x19, 
    0x100, 0xa, 0x19, 0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0x104, 0xa, 0x1a, 
    0x3, 0x1a, 0x6, 0x1a, 0x107, 0xa, 0x1a, 0xd, 0x1a, 0xe, 0x1a, 0x108, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x7, 0x1b, 0x10f, 0xa, 0x1b, 
    0xc, 0x1b, 0xe, 0x1b, 0x112, 0xb, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x7, 0x1c, 0x11a, 0xa, 0x1c, 0xc, 0x1c, 
    0xe, 0x1c, 0x11d, 0xb, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x128, 
    0xa, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 0x12d, 0xa, 0x1d, 
    0x7, 0x1d, 0x12f, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0x132, 0xb, 0x1d, 
    0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 
    0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x13f, 
    0xa, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x144, 0xa, 0x1e, 
    0x7, 0x1e, 0x146, 0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0x149, 0xb, 0x1e, 
    0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 
    0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 
    0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x163, 
    0xa, 0x1f, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 
    0x22, 0x3, 0x22, 0x7, 0x22, 0x16c, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 
    0x16f, 0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x24, 
    0x3, 0x24, 0x5, 0x24, 0x177, 0xa, 0x24, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 
    0x17b, 0xa, 0x25, 0x3, 0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 0x180, 
    0xa, 0x26, 0xc, 0x26, 0xe, 0x26, 0x183, 0xb, 0x26, 0x3, 0x26, 0x5, 0x26, 
    0x186, 0xa, 0x26, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x5, 0x27, 0x18b, 
    0xa, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x7, 0x27, 0x190, 0xa, 0x27, 
    0xc, 0x27, 0xe, 0x27, 0x193, 0xb, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 
    0x5, 0x27, 0x198, 0xa, 0x27, 0x5, 0x27, 0x19a, 0xa, 0x27, 0x3, 0x28, 
    0x3, 0x28, 0x5, 0x28, 0x19e, 0xa, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 
    0x3, 0x29, 0x3, 0x2a, 0x5, 0x2a, 0x1a5, 0xa, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 
    0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x6, 0x2c, 0x1ac, 0xa, 0x2c, 0xd, 0x2c, 
    0xe, 0x2c, 0x1ad, 0x3, 0x2c, 0x3, 0x2c, 0x2, 0x2, 0x2d, 0x3, 0x3, 0x5, 
    0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x13, 
    0xb, 0x15, 0xc, 0x17, 0xd, 0x19, 0xe, 0x1b, 0xf, 0x1d, 0x10, 0x1f, 0x11, 
    0x21, 0x12, 0x23, 0x13, 0x25, 0x14, 0x27, 0x15, 0x29, 0x16, 0x2b, 0x17, 
    0x2d, 0x18, 0x2f, 0x19, 0x31, 0x1a, 0x33, 0x1b, 0x35, 0x1c, 0x37, 0x1d, 
    0x39, 0x1e, 0x3b, 0x1f, 0x3d, 0x20, 0x3f, 0x21, 0x41, 0x22, 0x43, 0x23, 
    0x45, 0x24, 0x47, 0x25, 0x49, 0x26, 0x4b, 0x27, 0x4d, 0x28, 0x4f, 0x29, 
    0x51, 0x2a, 0x53, 0x2b, 0x55, 0x2c, 0x57, 0x2d, 0x3, 0x2, 0x1b, 0x5, 
    0x2, 0xb, 0xc, 0xf, 0xf, 0x22, 0x22, 0x4, 0x2, 0x44, 0x44, 0x64, 0x64, 
    0x4, 0x2, 0x43, 0x43, 0x63, 0x63, 0x4, 0x2, 0x55, 0x55, 0x75, 0x75, 
    0x4, 0x2, 0x47, 0x47, 0x67, 0x67, 0x4, 0x2, 0x52, 0x52, 0x72, 0x72, 
    0x4, 0x2, 0x54, 0x54, 0x74, 0x74, 0x4, 0x2, 0x48, 0x48, 0x68, 0x68, 
    0x4, 0x2, 0x4b, 0x4b, 0x6b, 0x6b, 0x4, 0x2, 0x5a, 0x5a, 0x7a, 0x7a, 
    0xa, 0x2, 0x2, 0x22, 0x24, 0x24, 0x3e, 0x3e, 0x40, 0x40, 0x5e, 0x5e, 
    0x60, 0x60, 0x62, 0x62, 0x7d, 0x7f, 0x3, 0x2, 0x32, 0x3b, 0x4, 0x2, 
    0x43, 0x5c, 0x63, 0x7c, 0x5, 0x2, 0x32, 0x3b, 0x43, 0x5c, 0x63, 0x7c, 
    0x4, 0x2, 0x2d, 0x2d, 0x2f, 0x2f, 0x6, 0x2, 0xc, 0xc, 0xf, 0xf, 0x24, 
    0x24, 0x5e, 0x5e, 0x6, 0x2, 0xc, 0xc, 0xf, 0xf, 0x29, 0x29, 0x5e, 0x5e, 
    0x4, 0x2, 0x29, 0x29, 0x5e, 0x5e, 0x4, 0x2, 0x24, 0x24, 0x5e, 0x5e, 
    0xa, 0x2, 0x24, 0x24, 0x29, 0x29, 0x5e, 0x5e, 0x64, 0x64, 0x68, 0x68, 
    0x70, 0x70, 0x74, 0x74, 0x76, 0x76, 0x7, 0x2, 0x2f, 0x2f, 0x32, 0x3b, 
    0xb9, 0xb9, 0x302, 0x371, 0x2041, 0x2042, 0x4, 0x2, 0x30, 0x30, 0x3c, 
    0x3c, 0x5, 0x2, 0x32, 0x3b, 0x43, 0x48, 0x63, 0x68, 0x9, 0x2, 0x23, 
    0x23, 0x25, 0x31, 0x3d, 0x3d, 0x3f, 0x3f, 0x41, 0x42, 0x61, 0x61, 0x80, 
    0x80, 0x4, 0x2, 0xc, 0xc, 0xf, 0xf, 0x3, 0x10, 0x2, 0x43, 0x2, 0x5c, 
    0x2, 0x63, 0x2, 0x7c, 0x2, 0xc2, 0x2, 0xd8, 0x2, 0xda, 0x2, 0xf8, 0x2, 
    0xfa, 0x2, 0x301, 0x2, 0x372, 0x2, 0x37f, 0x2, 0x381, 0x2, 0x2001, 0x2, 
    0x200e, 0x2, 0x200f, 0x2, 0x2072, 0x2, 0x2191, 0x2, 0x2c02, 0x2, 0x2ff1, 
    0x2, 0x3003, 0x2, 0xd801, 0x2, 0xf902, 0x2, 0xfdd1, 0x2, 0xfdf2, 0x2, 
    0xffff, 0x2, 0x2, 0x3, 0x1, 0x10, 0x1ea, 0x2, 0x3, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 0x2, 0x2, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 0x2, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1b, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x1f, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x21, 0x3, 0x2, 0x2, 0x2, 0x2, 0x23, 0x3, 0x2, 0x2, 0x2, 0x2, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x27, 0x3, 0x2, 0x2, 0x2, 0x2, 0x29, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2d, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x31, 0x3, 0x2, 0x2, 0x2, 0x2, 0x33, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x35, 0x3, 0x2, 0x2, 0x2, 0x2, 0x37, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x39, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3b, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x2, 0x41, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x43, 0x3, 0x2, 0x2, 0x2, 0x2, 0x45, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x47, 0x3, 0x2, 0x2, 0x2, 0x2, 0x49, 0x3, 0x2, 0x2, 0x2, 
    0x2, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x2, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x2, 0x4f, 
    0x3, 0x2, 0x2, 0x2, 0x2, 0x51, 0x3, 0x2, 0x2, 0x2, 0x2, 0x53, 0x3, 0x2, 
    0x2, 0x2, 0x2, 0x55, 0x3, 0x2, 0x2, 0x2, 0x2, 0x57, 0x3, 0x2, 0x2, 0x2, 
    0x3, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x7, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x9, 0x69, 0x3, 0x2, 0x2, 0x2, 0xb, 0x6b, 0x3, 0x2, 
    0x2, 0x2, 0xd, 0x6d, 0x3, 0x2, 0x2, 0x2, 0xf, 0x6f, 0x3, 0x2, 0x2, 0x2, 
    0x11, 0x71, 0x3, 0x2, 0x2, 0x2, 0x13, 0x73, 0x3, 0x2, 0x2, 0x2, 0x15, 
    0x75, 0x3, 0x2, 0x2, 0x2, 0x17, 0x77, 0x3, 0x2, 0x2, 0x2, 0x19, 0x7a, 
    0x3, 0x2, 0x2, 0x2, 0x1b, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x86, 0x3, 
    0x2, 0x2, 0x2, 0x1f, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x21, 0x91, 0x3, 0x2, 
    0x2, 0x2, 0x23, 0x97, 0x3, 0x2, 0x2, 0x2, 0x25, 0xa2, 0x3, 0x2, 0x2, 
    0x2, 0x27, 0xa6, 0x3, 0x2, 0x2, 0x2, 0x29, 0xa9, 0x3, 0x2, 0x2, 0x2, 
    0x2b, 0xba, 0x3, 0x2, 0x2, 0x2, 0x2d, 0xcc, 0x3, 0x2, 0x2, 0x2, 0x2f, 
    0xd4, 0x3, 0x2, 0x2, 0x2, 0x31, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x33, 0x101, 
    0x3, 0x2, 0x2, 0x2, 0x35, 0x10a, 0x3, 0x2, 0x2, 0x2, 0x37, 0x115, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x120, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x137, 0x3, 0x2, 
    0x2, 0x2, 0x3d, 0x162, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x164, 0x3, 0x2, 0x2, 
    0x2, 0x41, 0x167, 0x3, 0x2, 0x2, 0x2, 0x43, 0x169, 0x3, 0x2, 0x2, 0x2, 
    0x45, 0x172, 0x3, 0x2, 0x2, 0x2, 0x47, 0x176, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x17a, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x17c, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x18a, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x51, 0x19f, 0x3, 
    0x2, 0x2, 0x2, 0x53, 0x1a4, 0x3, 0x2, 0x2, 0x2, 0x55, 0x1a6, 0x3, 0x2, 
    0x2, 0x2, 0x57, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x30, 0x2, 
    0x2, 0x5a, 0x4, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x42, 0x2, 0x2, 
    0x5c, 0x5d, 0x7, 0x72, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x74, 0x2, 0x2, 0x5e, 
    0x5f, 0x7, 0x67, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x68, 0x2, 0x2, 0x60, 0x61, 
    0x7, 0x6b, 0x2, 0x2, 0x61, 0x62, 0x7, 0x7a, 0x2, 0x2, 0x62, 0x6, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x64, 0x7, 0x42, 0x2, 0x2, 0x64, 0x65, 0x7, 0x64, 
    0x2, 0x2, 0x65, 0x66, 0x7, 0x63, 0x2, 0x2, 0x66, 0x67, 0x7, 0x75, 0x2, 
    0x2, 0x67, 0x68, 0x7, 0x67, 0x2, 0x2, 0x68, 0x8, 0x3, 0x2, 0x2, 0x2, 
    0x69, 0x6a, 0x7, 0x3d, 0x2, 0x2, 0x6a, 0xa, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6c, 0x7, 0x2e, 0x2, 0x2, 0x6c, 0xc, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 
    0x7, 0x63, 0x2, 0x2, 0x6e, 0xe, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 
    0x5d, 0x2, 0x2, 0x70, 0x10, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 0x5f, 
    0x2, 0x2, 0x72, 0x12, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0x2a, 0x2, 
    0x2, 0x74, 0x14, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 0x7, 0x2b, 0x2, 0x2, 
    0x76, 0x16, 0x3, 0x2, 0x2, 0x2, 0x77, 0x78, 0x7, 0x60, 0x2, 0x2, 0x78, 
    0x79, 0x7, 0x60, 0x2, 0x2, 0x79, 0x18, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 
    0x7, 0x76, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x74, 0x2, 0x2, 0x7c, 0x7d, 0x7, 
    0x77, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x67, 0x2, 0x2, 0x7e, 0x1a, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x80, 0x7, 0x68, 0x2, 0x2, 0x80, 0x81, 0x7, 0x63, 0x2, 
    0x2, 0x81, 0x82, 0x7, 0x6e, 0x2, 0x2, 0x82, 0x83, 0x7, 0x75, 0x2, 0x2, 
    0x83, 0x84, 0x7, 0x67, 0x2, 0x2, 0x84, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x85, 
    0x87, 0x9, 0x2, 0x2, 0x2, 0x86, 0x85, 0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x8, 0xf, 
    0x2, 0x2, 0x8b, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8d, 0x9, 0x3, 0x2, 
    0x2, 0x8d, 0x8e, 0x9, 0x4, 0x2, 0x2, 0x8e, 0x8f, 0x9, 0x5, 0x2, 0x2, 
    0x8f, 0x90, 0x9, 0x6, 0x2, 0x2, 0x90, 0x20, 0x3, 0x2, 0x2, 0x2, 0x91, 
    0x92, 0x9, 0x7, 0x2, 0x2, 0x92, 0x93, 0x9, 0x8, 0x2, 0x2, 0x93, 0x94, 
    0x9, 0x9, 0x2, 0x2, 0x94, 0x95, 0x9, 0xa, 0x2, 0x2, 0x95, 0x96, 0x9, 
    0xb, 0x2, 0x2, 0x96, 0x22, 0x3, 0x2, 0x2, 0x2, 0x97, 0x9c, 0x7, 0x3e, 
    0x2, 0x2, 0x98, 0x9b, 0xa, 0xc, 0x2, 0x2, 0x99, 0x9b, 0x5, 0x3d, 0x1f, 
    0x2, 0x9a, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x99, 0x3, 0x2, 0x2, 0x2, 
    0x9b, 0x9e, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9c, 
    0x9d, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x9c, 
    0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0x7, 0x40, 0x2, 0x2, 0xa0, 0x24, 0x3, 
    0x2, 0x2, 0x2, 0xa1, 0xa3, 0x5, 0x4b, 0x26, 0x2, 0xa2, 0xa1, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0x3, 0x2, 0x2, 
    0x2, 0xa4, 0xa5, 0x7, 0x3c, 0x2, 0x2, 0xa5, 0x26, 0x3, 0x2, 0x2, 0x2, 
    0xa6, 0xa7, 0x5, 0x25, 0x13, 0x2, 0xa7, 0xa8, 0x5, 0x4d, 0x27, 0x2, 
    0xa8, 0x28, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x7, 0x61, 0x2, 0x2, 0xaa, 
    0xab, 0x7, 0x3c, 0x2, 0x2, 0xab, 0xae, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaf, 
    0x5, 0x47, 0x24, 0x2, 0xad, 0xaf, 0x9, 0xd, 0x2, 0x2, 0xae, 0xac, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb8, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0xb3, 0x5, 0x49, 0x25, 0x2, 0xb1, 0xb3, 0x7, 0x30, 0x2, 
    0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 0x2, 
    0xb3, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 
    0xb5, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 
    0x3, 0x2, 0x2, 0x2, 0xb7, 0xb9, 0x5, 0x49, 0x25, 0x2, 0xb8, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xb9, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0xba, 0xbc, 0x7, 0x42, 0x2, 0x2, 0xbb, 0xbd, 0x9, 0xe, 0x2, 
    0x2, 0xbc, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbe, 0x3, 0x2, 0x2, 0x2, 
    0xbe, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbf, 
    0xc8, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc2, 0x7, 0x2f, 0x2, 0x2, 0xc1, 0xc3, 
    0x9, 0xf, 0x2, 0x2, 0xc2, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc4, 0x3, 
    0x2, 0x2, 0x2, 0xc4, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x3, 0x2, 
    0x2, 0x2, 0xc5, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc0, 0x3, 0x2, 0x2, 
    0x2, 0xc7, 0xca, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc6, 0x3, 0x2, 0x2, 0x2, 
    0xc8, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0x2c, 0x3, 0x2, 0x2, 0x2, 0xca, 
    0xc8, 0x3, 0x2, 0x2, 0x2, 0xcb, 0xcd, 0x9, 0x10, 0x2, 0x2, 0xcc, 0xcb, 
    0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0xce, 0xd0, 0x9, 0xd, 0x2, 0x2, 0xcf, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0xd0, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xcf, 0x3, 0x2, 0x2, 
    0x2, 0xd1, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x2e, 0x3, 0x2, 0x2, 0x2, 
    0xd3, 0xd5, 0x9, 0x10, 0x2, 0x2, 0xd4, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd4, 
    0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 
    0x9, 0xd, 0x2, 0x2, 0xd7, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0xd9, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xda, 0x3, 0x2, 
    0x2, 0x2, 0xda, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xd9, 0x3, 0x2, 0x2, 
    0x2, 0xdc, 0xde, 0x7, 0x30, 0x2, 0x2, 0xdd, 0xdf, 0x9, 0xd, 0x2, 0x2, 
    0xde, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe0, 
    0xde, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0xe2, 0xe4, 0x9, 0x10, 0x2, 0x2, 0xe3, 0xe2, 0x3, 
    0x2, 0x2, 0x2, 0xe3, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xff, 0x3, 0x2, 
    0x2, 0x2, 0xe5, 0xe7, 0x9, 0xd, 0x2, 0x2, 0xe6, 0xe5, 0x3, 0x2, 0x2, 
    0x2, 0xe7, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 
    0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xea, 0x3, 0x2, 0x2, 0x2, 0xea, 
    0xee, 0x7, 0x30, 0x2, 0x2, 0xeb, 0xed, 0x9, 0xd, 0x2, 0x2, 0xec, 0xeb, 
    0x3, 0x2, 0x2, 0x2, 0xed, 0xf0, 0x3, 0x2, 0x2, 0x2, 0xee, 0xec, 0x3, 
    0x2, 0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf1, 0x3, 0x2, 
    0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf1, 0x100, 0x5, 0x33, 0x1a, 
    0x2, 0xf2, 0xf4, 0x7, 0x30, 0x2, 0x2, 0xf3, 0xf5, 0x9, 0xd, 0x2, 0x2, 
    0xf4, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x3, 0x2, 0x2, 0x2, 0xf6, 
    0xf4, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf8, 
    0x3, 0x2, 0x2, 0x2, 0xf8, 0x100, 0x5, 0x33, 0x1a, 0x2, 0xf9, 0xfb, 0x9, 
    0xd, 0x2, 0x2, 0xfa, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 0xfc, 0x3, 0x2, 
    0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x3, 0x2, 0x2, 
    0x2, 0xfd, 0xfe, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x100, 0x5, 0x33, 0x1a, 0x2, 
    0xff, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xff, 0xf2, 0x3, 0x2, 0x2, 0x2, 0xff, 
    0xfa, 0x3, 0x2, 0x2, 0x2, 0x100, 0x32, 0x3, 0x2, 0x2, 0x2, 0x101, 0x103, 
    0x9, 0x6, 0x2, 0x2, 0x102, 0x104, 0x9, 0x10, 0x2, 0x2, 0x103, 0x102, 
    0x3, 0x2, 0x2, 0x2, 0x103, 0x104, 0x3, 0x2, 0x2, 0x2, 0x104, 0x106, 
    0x3, 0x2, 0x2, 0x2, 0x105, 0x107, 0x9, 0xd, 0x2, 0x2, 0x106, 0x105, 
    0x3, 0x2, 0x2, 0x2, 0x107, 0x108, 0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 
    0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 0x3, 0x2, 0x2, 0x2, 0x109, 0x34, 0x3, 
    0x2, 0x2, 0x2, 0x10a, 0x110, 0x7, 0x24, 0x2, 0x2, 0x10b, 0x10f, 0xa, 
    0x11, 0x2, 0x2, 0x10c, 0x10f, 0x5, 0x3f, 0x20, 0x2, 0x10d, 0x10f, 0x5, 
    0x3d, 0x1f, 0x2, 0x10e, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 0x3, 
    0x2, 0x2, 0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x112, 0x3, 
    0x2, 0x2, 0x2, 0x110, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 
    0x2, 0x2, 0x2, 0x111, 0x113, 0x3, 0x2, 0x2, 0x2, 0x112, 0x110, 0x3, 
    0x2, 0x2, 0x2, 0x113, 0x114, 0x7, 0x24, 0x2, 0x2, 0x114, 0x36, 0x3, 
    0x2, 0x2, 0x2, 0x115, 0x11b, 0x7, 0x29, 0x2, 0x2, 0x116, 0x11a, 0xa, 
    0x12, 0x2, 0x2, 0x117, 0x11a, 0x5, 0x3f, 0x20, 0x2, 0x118, 0x11a, 0x5, 
    0x3d, 0x1f, 0x2, 0x119, 0x116, 0x3, 0x2, 0x2, 0x2, 0x119, 0x117, 0x3, 
    0x2, 0x2, 0x2, 0x119, 0x118, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x11d, 0x3, 
    0x2, 0x2, 0x2, 0x11b, 0x119, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x3, 
    0x2, 0x2, 0x2, 0x11c, 0x11e, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11b, 0x3, 
    0x2, 0x2, 0x2, 0x11e, 0x11f, 0x7, 0x29, 0x2, 0x2, 0x11f, 0x38, 0x3, 
    0x2, 0x2, 0x2, 0x120, 0x121, 0x7, 0x29, 0x2, 0x2, 0x121, 0x122, 0x7, 
    0x29, 0x2, 0x2, 0x122, 0x123, 0x7, 0x29, 0x2, 0x2, 0x123, 0x130, 0x3, 
    0x2, 0x2, 0x2, 0x124, 0x128, 0x7, 0x29, 0x2, 0x2, 0x125, 0x126, 0x7, 
    0x29, 0x2, 0x2, 0x126, 0x128, 0x7, 0x29, 0x2, 0x2, 0x127, 0x124, 0x3, 
    0x2, 0x2, 0x2, 0x127, 0x125, 0x3, 0x2, 0x2, 0x2, 0x127, 0x128, 0x3, 
    0x2, 0x2, 0x2, 0x128, 0x12c, 0x3, 0x2, 0x2, 0x2, 0x129, 0x12d, 0xa, 
    0x13, 0x2, 0x2, 0x12a, 0x12d, 0x5, 0x3f, 0x20, 0x2, 0x12b, 0x12d, 0x5, 
    0x3d, 0x1f, 0x2, 0x12c, 0x129, 0x3, 0x2, 0x2, 0x2, 0x12c, 0x12a, 0x3, 
    0x2, 0x2, 0x2, 0x12c, 0x12b, 0x3, 0x2, 0x2, 0x2, 0x12d, 0x12f, 0x3, 
    0x2, 0x2, 0x2, 0x12e, 0x127, 0x3, 0x2, 0x2, 0x2, 0x12f, 0x132, 0x3, 
    0x2, 0x2, 0x2, 0x130, 0x12e, 0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 
    0x2, 0x2, 0x2, 0x131, 0x133, 0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 
    0x2, 0x2, 0x2, 0x133, 0x134, 0x7, 0x29, 0x2, 0x2, 0x134, 0x135, 0x7, 
    0x29, 0x2, 0x2, 0x135, 0x136, 0x7, 0x29, 0x2, 0x2, 0x136, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x137, 0x138, 0x7, 0x24, 0x2, 0x2, 0x138, 0x139, 0x7, 
    0x24, 0x2, 0x2, 0x139, 0x13a, 0x7, 0x24, 0x2, 0x2, 0x13a, 0x147, 0x3, 
    0x2, 0x2, 0x2, 0x13b, 0x13f, 0x7, 0x24, 0x2, 0x2, 0x13c, 0x13d, 0x7, 
    0x24, 0x2, 0x2, 0x13d, 0x13f, 0x7, 0x24, 0x2, 0x2, 0x13e, 0x13b, 0x3, 
    0x2, 0x2, 0x2, 0x13e, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x13e, 0x13f, 0x3, 
    0x2, 0x2, 0x2, 0x13f, 0x143, 0x3, 0x2, 0x2, 0x2, 0x140, 0x144, 0xa, 
    0x14, 0x2, 0x2, 0x141, 0x144, 0x5, 0x3f, 0x20, 0x2, 0x142, 0x144, 0x5, 
    0x3d, 0x1f, 0x2, 0x143, 0x140, 0x3, 0x2, 0x2, 0x2, 0x143, 0x141, 0x3, 
    0x2, 0x2, 0x2, 0x143, 0x142, 0x3, 0x2, 0x2, 0x2, 0x144, 0x146, 0x3, 
    0x2, 0x2, 0x2, 0x145, 0x13e, 0x3, 0x2, 0x2, 0x2, 0x146, 0x149, 0x3, 
    0x2, 0x2, 0x2, 0x147, 0x145, 0x3, 0x2, 0x2, 0x2, 0x147, 0x148, 0x3, 
    0x2, 0x2, 0x2, 0x148, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x149, 0x147, 0x3, 
    0x2, 0x2, 0x2, 0x14a, 0x14b, 0x7, 0x24, 0x2, 0x2, 0x14b, 0x14c, 0x7, 
    0x24, 0x2, 0x2, 0x14c, 0x14d, 0x7, 0x24, 0x2, 0x2, 0x14d, 0x3c, 0x3, 
    0x2, 0x2, 0x2, 0x14e, 0x14f, 0x7, 0x5e, 0x2, 0x2, 0x14f, 0x150, 0x7, 
    0x77, 0x2, 0x2, 0x150, 0x151, 0x3, 0x2, 0x2, 0x2, 0x151, 0x152, 0x5, 
    0x53, 0x2a, 0x2, 0x152, 0x153, 0x5, 0x53, 0x2a, 0x2, 0x153, 0x154, 0x5, 
    0x53, 0x2a, 0x2, 0x154, 0x155, 0x5, 0x53, 0x2a, 0x2, 0x155, 0x163, 0x3, 
    0x2, 0x2, 0x2, 0x156, 0x157, 0x7, 0x5e, 0x2, 0x2, 0x157, 0x158, 0x7, 
    0x57, 0x2, 0x2, 0x158, 0x159, 0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x5, 
    0x53, 0x2a, 0x2, 0x15a, 0x15b, 0x5, 0x53, 0x2a, 0x2, 0x15b, 0x15c, 0x5, 
    0x53, 0x2a, 0x2, 0x15c, 0x15d, 0x5, 0x53, 0x2a, 0x2, 0x15d, 0x15e, 0x5, 
    0x53, 0x2a, 0x2, 0x15e, 0x15f, 0x5, 0x53, 0x2a, 0x2, 0x15f, 0x160, 0x5, 
    0x53, 0x2a, 0x2, 0x160, 0x161, 0x5, 0x53, 0x2a, 0x2, 0x161, 0x163, 0x3, 
    0x2, 0x2, 0x2, 0x162, 0x14e, 0x3, 0x2, 0x2, 0x2, 0x162, 0x156, 0x3, 
    0x2, 0x2, 0x2, 0x163, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x164, 0x165, 0x7, 0x5e, 
    0x2, 0x2, 0x165, 0x166, 0x9, 0x15, 0x2, 0x2, 0x166, 0x40, 0x3, 0x2, 
    0x2, 0x2, 0x167, 0x168, 0x9, 0x2, 0x2, 0x2, 0x168, 0x42, 0x3, 0x2, 0x2, 
    0x2, 0x169, 0x16d, 0x7, 0x5d, 0x2, 0x2, 0x16a, 0x16c, 0x5, 0x41, 0x21, 
    0x2, 0x16b, 0x16a, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x16f, 0x3, 0x2, 0x2, 
    0x2, 0x16d, 0x16b, 0x3, 0x2, 0x2, 0x2, 0x16d, 0x16e, 0x3, 0x2, 0x2, 
    0x2, 0x16e, 0x170, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x16d, 0x3, 0x2, 0x2, 
    0x2, 0x170, 0x171, 0x7, 0x5f, 0x2, 0x2, 0x171, 0x44, 0x3, 0x2, 0x2, 
    0x2, 0x172, 0x173, 0x9, 0x1b, 0x2, 0x2, 0x173, 0x46, 0x3, 0x2, 0x2, 
    0x2, 0x174, 0x177, 0x5, 0x45, 0x23, 0x2, 0x175, 0x177, 0x7, 0x61, 0x2, 
    0x2, 0x176, 0x174, 0x3, 0x2, 0x2, 0x2, 0x176, 0x175, 0x3, 0x2, 0x2, 
    0x2, 0x177, 0x48, 0x3, 0x2, 0x2, 0x2, 0x178, 0x17b, 0x5, 0x47, 0x24, 
    0x2, 0x179, 0x17b, 0x9, 0x16, 0x2, 0x2, 0x17a, 0x178, 0x3, 0x2, 0x2, 
    0x2, 0x17a, 0x179, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x4a, 0x3, 0x2, 0x2, 0x2, 
    0x17c, 0x185, 0x5, 0x45, 0x23, 0x2, 0x17d, 0x180, 0x5, 0x49, 0x25, 0x2, 
    0x17e, 0x180, 0x7, 0x30, 0x2, 0x2, 0x17f, 0x17d, 0x3, 0x2, 0x2, 0x2, 
    0x17f, 0x17e, 0x3, 0x2, 0x2, 0x2, 0x180, 0x183, 0x3, 0x2, 0x2, 0x2, 
    0x181, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x181, 0x182, 0x3, 0x2, 0x2, 0x2, 
    0x182, 0x184, 0x3, 0x2, 0x2, 0x2, 0x183, 0x181, 0x3, 0x2, 0x2, 0x2, 
    0x184, 0x186, 0x5, 0x49, 0x25, 0x2, 0x185, 0x181, 0x3, 0x2, 0x2, 0x2, 
    0x185, 0x186, 0x3, 0x2, 0x2, 0x2, 0x186, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x187, 
    0x18b, 0x5, 0x47, 0x24, 0x2, 0x188, 0x18b, 0x4, 0x32, 0x3c, 0x2, 0x189, 
    0x18b, 0x5, 0x4f, 0x28, 0x2, 0x18a, 0x187, 0x3, 0x2, 0x2, 0x2, 0x18a, 
    0x188, 0x3, 0x2, 0x2, 0x2, 0x18a, 0x189, 0x3, 0x2, 0x2, 0x2, 0x18b, 
    0x199, 0x3, 0x2, 0x2, 0x2, 0x18c, 0x190, 0x5, 0x49, 0x25, 0x2, 0x18d, 
    0x190, 0x9, 0x17, 0x2, 0x2, 0x18e, 0x190, 0x5, 0x4f, 0x28, 0x2, 0x18f, 
    0x18c, 0x3, 0x2, 0x2, 0x2, 0x18f, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18f, 
    0x18e, 0x3, 0x2, 0x2, 0x2, 0x190, 0x193, 0x3, 0x2, 0x2, 0x2, 0x191, 
    0x18f, 0x3, 0x2, 0x2, 0x2, 0x191, 0x192, 0x3, 0x2, 0x2, 0x2, 0x192, 
    0x197, 0x3, 0x2, 0x2, 0x2, 0x193, 0x191, 0x3, 0x2, 0x2, 0x2, 0x194, 
    0x198, 0x5, 0x49, 0x25, 0x2, 0x195, 0x198, 0x7, 0x3c, 0x2, 0x2, 0x196, 
    0x198, 0x5, 0x4f, 0x28, 0x2, 0x197, 0x194, 0x3, 0x2, 0x2, 0x2, 0x197, 
    0x195, 0x3, 0x2, 0x2, 0x2, 0x197, 0x196, 0x3, 0x2, 0x2, 0x2, 0x198, 
    0x19a, 0x3, 0x2, 0x2, 0x2, 0x199, 0x191, 0x3, 0x2, 0x2, 0x2, 0x199, 
    0x19a, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x19b, 0x19e, 
    0x5, 0x51, 0x29, 0x2, 0x19c, 0x19e, 0x5, 0x55, 0x2b, 0x2, 0x19d, 0x19b, 
    0x3, 0x2, 0x2, 0x2, 0x19d, 0x19c, 0x3, 0x2, 0x2, 0x2, 0x19e, 0x50, 0x3, 
    0x2, 0x2, 0x2, 0x19f, 0x1a0, 0x7, 0x27, 0x2, 0x2, 0x1a0, 0x1a1, 0x5, 
    0x53, 0x2a, 0x2, 0x1a1, 0x1a2, 0x5, 0x53, 0x2a, 0x2, 0x1a2, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x1a3, 0x1a5, 0x9, 0x18, 0x2, 0x2, 0x1a4, 0x1a3, 0x3, 
    0x2, 0x2, 0x2, 0x1a5, 0x54, 0x3, 0x2, 0x2, 0x2, 0x1a6, 0x1a7, 0x7, 0x5e, 
    0x2, 0x2, 0x1a7, 0x1a8, 0x9, 0x19, 0x2, 0x2, 0x1a8, 0x56, 0x3, 0x2, 
    0x2, 0x2, 0x1a9, 0x1ab, 0x7, 0x25, 0x2, 0x2, 0x1aa, 0x1ac, 0xa, 0x1a, 
    0x2, 0x2, 0x1ab, 0x1aa, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1ad, 0x3, 0x2, 
    0x2, 0x2, 0x1ad, 0x1ab, 0x3, 0x2, 0x2, 0x2, 0x1ad, 0x1ae, 0x3, 0x2, 
    0x2, 0x2, 0x1ae, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1af, 0x1b0, 0x8, 0x2c, 
    0x3, 0x2, 0x1b0, 0x58, 0x3, 0x2, 0x2, 0x2, 0x34, 0x2, 0x88, 0x9a, 0x9c, 
    0xa2, 0xae, 0xb2, 0xb4, 0xb8, 0xbe, 0xc4, 0xc8, 0xcc, 0xd1, 0xd4, 0xd9, 
    0xe0, 0xe3, 0xe8, 0xee, 0xf6, 0xfc, 0xff, 0x103, 0x108, 0x10e, 0x110, 
    0x119, 0x11b, 0x127, 0x12c, 0x130, 0x13e, 0x143, 0x147, 0x162, 0x16d, 
    0x176, 0x17a, 0x17f, 0x181, 0x185, 0x18a, 0x18f, 0x191, 0x197, 0x199, 
    0x19d, 0x1a4, 0x1ad, 0x4, 0x8, 0x2, 0x2, 0x2, 0x3, 0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

TURTLELexer::Initializer TURTLELexer::_init;
