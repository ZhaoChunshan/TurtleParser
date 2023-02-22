// Generated from d:\TurtleParser\turtle\TURTLE.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class TURTLELexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.9.2", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, T__10=11, BASE=12, PREFIX=13, NumericLiteral=14, BooleanLiteral=15, 
		String=16, BlankNode=17, WS=18, PN_PREFIX=19, IRIREF=20, PNAME_NS=21, 
		PrefixedName=22, PNAME_LN=23, BLANK_NODE_LABEL=24, LANGTAG=25, INTEGER=26, 
		DECIMAL=27, DOUBLE=28, EXPONENT=29, STRING_LITERAL_LONG_SINGLE_QUOTE=30, 
		STRING_LITERAL_LONG_QUOTE=31, STRING_LITERAL_QUOTE=32, STRING_LITERAL_SINGLE_QUOTE=33, 
		UCHAR=34, ECHAR=35, ANON_WS=36, ANON=37, PN_CHARS_BASE=38, PN_CHARS_U=39, 
		PN_CHARS=40, PN_LOCAL=41, PLX=42, PERCENT=43, HEX=44, PN_LOCAL_ESC=45, 
		LC=46;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	private static String[] makeRuleNames() {
		return new String[] {
			"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
			"T__9", "T__10", "BASE", "PREFIX", "NumericLiteral", "BooleanLiteral", 
			"String", "BlankNode", "WS", "PN_PREFIX", "IRIREF", "PNAME_NS", "PrefixedName", 
			"PNAME_LN", "BLANK_NODE_LABEL", "LANGTAG", "INTEGER", "DECIMAL", "DOUBLE", 
			"EXPONENT", "STRING_LITERAL_LONG_SINGLE_QUOTE", "STRING_LITERAL_LONG_QUOTE", 
			"STRING_LITERAL_QUOTE", "STRING_LITERAL_SINGLE_QUOTE", "UCHAR", "ECHAR", 
			"ANON_WS", "ANON", "PN_CHARS_BASE", "PN_CHARS_U", "PN_CHARS", "PN_LOCAL", 
			"PLX", "PERCENT", "HEX", "PN_LOCAL_ESC", "LC"
		};
	}
	public static final String[] ruleNames = makeRuleNames();

	private static String[] makeLiteralNames() {
		return new String[] {
			null, "'.'", "'@prefix'", "'@base'", "';'", "','", "'a'", "'['", "']'", 
			"'('", "')'", "'^^'"
		};
	}
	private static final String[] _LITERAL_NAMES = makeLiteralNames();
	private static String[] makeSymbolicNames() {
		return new String[] {
			null, null, null, null, null, null, null, null, null, null, null, null, 
			"BASE", "PREFIX", "NumericLiteral", "BooleanLiteral", "String", "BlankNode", 
			"WS", "PN_PREFIX", "IRIREF", "PNAME_NS", "PrefixedName", "PNAME_LN", 
			"BLANK_NODE_LABEL", "LANGTAG", "INTEGER", "DECIMAL", "DOUBLE", "EXPONENT", 
			"STRING_LITERAL_LONG_SINGLE_QUOTE", "STRING_LITERAL_LONG_QUOTE", "STRING_LITERAL_QUOTE", 
			"STRING_LITERAL_SINGLE_QUOTE", "UCHAR", "ECHAR", "ANON_WS", "ANON", "PN_CHARS_BASE", 
			"PN_CHARS_U", "PN_CHARS", "PN_LOCAL", "PLX", "PERCENT", "HEX", "PN_LOCAL_ESC", 
			"LC"
		};
	}
	private static final String[] _SYMBOLIC_NAMES = makeSymbolicNames();
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public TURTLELexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "TURTLE.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\60\u01ca\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22"+
		"\t\22\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31"+
		"\t\31\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t"+
		" \4!\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\4+\t"+
		"+\4,\t,\4-\t-\4.\t.\4/\t/\3\2\3\2\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\3\4"+
		"\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3"+
		"\13\3\13\3\f\3\f\3\f\3\r\3\r\3\r\3\r\3\r\3\16\3\16\3\16\3\16\3\16\3\16"+
		"\3\17\3\17\3\17\5\17\u008f\n\17\3\20\3\20\3\20\3\20\3\20\3\20\3\20\3\20"+
		"\3\20\5\20\u009a\n\20\3\21\3\21\3\21\3\21\5\21\u00a0\n\21\3\22\3\22\5"+
		"\22\u00a4\n\22\3\23\6\23\u00a7\n\23\r\23\16\23\u00a8\3\23\3\23\3\24\3"+
		"\24\3\24\7\24\u00b0\n\24\f\24\16\24\u00b3\13\24\3\24\5\24\u00b6\n\24\3"+
		"\25\3\25\3\25\7\25\u00bb\n\25\f\25\16\25\u00be\13\25\3\25\3\25\3\26\5"+
		"\26\u00c3\n\26\3\26\3\26\3\27\3\27\5\27\u00c9\n\27\3\30\3\30\3\30\3\31"+
		"\3\31\3\31\3\31\3\31\5\31\u00d3\n\31\3\31\3\31\7\31\u00d7\n\31\f\31\16"+
		"\31\u00da\13\31\3\31\5\31\u00dd\n\31\3\32\3\32\6\32\u00e1\n\32\r\32\16"+
		"\32\u00e2\3\32\3\32\6\32\u00e7\n\32\r\32\16\32\u00e8\7\32\u00eb\n\32\f"+
		"\32\16\32\u00ee\13\32\3\33\5\33\u00f1\n\33\3\33\6\33\u00f4\n\33\r\33\16"+
		"\33\u00f5\3\34\5\34\u00f9\n\34\3\34\7\34\u00fc\n\34\f\34\16\34\u00ff\13"+
		"\34\3\34\3\34\6\34\u0103\n\34\r\34\16\34\u0104\3\35\5\35\u0108\n\35\3"+
		"\35\6\35\u010b\n\35\r\35\16\35\u010c\3\35\3\35\7\35\u0111\n\35\f\35\16"+
		"\35\u0114\13\35\3\35\3\35\3\35\6\35\u0119\n\35\r\35\16\35\u011a\3\35\3"+
		"\35\6\35\u011f\n\35\r\35\16\35\u0120\3\35\5\35\u0124\n\35\3\36\3\36\5"+
		"\36\u0128\n\36\3\36\6\36\u012b\n\36\r\36\16\36\u012c\3\37\3\37\3\37\3"+
		"\37\3\37\3\37\3\37\5\37\u0136\n\37\3\37\3\37\3\37\5\37\u013b\n\37\7\37"+
		"\u013d\n\37\f\37\16\37\u0140\13\37\3\37\3\37\3\37\3\37\3 \3 \3 \3 \3 "+
		"\3 \3 \5 \u014d\n \3 \3 \3 \5 \u0152\n \7 \u0154\n \f \16 \u0157\13 \3"+
		" \3 \3 \3 \3!\3!\3!\3!\7!\u0161\n!\f!\16!\u0164\13!\3!\3!\3\"\3\"\3\""+
		"\3\"\7\"\u016c\n\"\f\"\16\"\u016f\13\"\3\"\3\"\3#\3#\3#\3#\3#\3#\3#\3"+
		"#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\3#\5#\u0187\n#\3$\3$\3$\3%\3%\3&\3"+
		"&\7&\u0190\n&\f&\16&\u0193\13&\3&\3&\3\'\3\'\3(\3(\5(\u019b\n(\3)\3)\5"+
		")\u019f\n)\3*\3*\3*\5*\u01a4\n*\3*\3*\3*\7*\u01a9\n*\f*\16*\u01ac\13*"+
		"\3*\3*\3*\5*\u01b1\n*\5*\u01b3\n*\3+\3+\5+\u01b7\n+\3,\3,\3,\3,\3-\5-"+
		"\u01be\n-\3.\3.\3.\3/\3/\6/\u01c5\n/\r/\16/\u01c6\3/\3/\2\2\60\3\3\5\4"+
		"\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21!\22"+
		"#\23%\24\'\25)\26+\27-\30/\31\61\32\63\33\65\34\67\359\36;\37= ?!A\"C"+
		"#E$G%I&K\'M(O)Q*S+U,W-Y.[/]\60\3\2\33\4\2DDdd\4\2CCcc\4\2UUuu\4\2GGgg"+
		"\4\2RRrr\4\2TTtt\4\2HHhh\4\2KKkk\4\2ZZzz\5\2\13\f\17\17\"\"\n\2\2\"$$"+
		">>@@^^``bb}\177\3\2\62;\4\2C\\c|\5\2\62;C\\c|\4\2--//\4\2))^^\4\2$$^^"+
		"\6\2\f\f\17\17$$^^\6\2\f\f\17\17))^^\n\2$$))^^ddhhppttvv\7\2//\62;\u00b9"+
		"\u00b9\u0302\u0371\u2041\u2042\4\2\60\60<<\5\2\62;CHch\t\2##%\61==??A"+
		"Baa\u0080\u0080\4\2\f\f\17\17\3\20\2C\2\\\2c\2|\2\u00c2\2\u00d8\2\u00da"+
		"\2\u00f8\2\u00fa\2\u0301\2\u0372\2\u037f\2\u0381\2\u2001\2\u200e\2\u200f"+
		"\2\u2072\2\u2191\2\u2c02\2\u2ff1\2\u3003\2\ud801\2\uf902\2\ufdd1\2\ufdf2"+
		"\2\uffff\2\2\3\1\20\u020b\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2"+
		"\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2"+
		"\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3"+
		"\2\2\2\2!\3\2\2\2\2#\3\2\2\2\2%\3\2\2\2\2\'\3\2\2\2\2)\3\2\2\2\2+\3\2"+
		"\2\2\2-\3\2\2\2\2/\3\2\2\2\2\61\3\2\2\2\2\63\3\2\2\2\2\65\3\2\2\2\2\67"+
		"\3\2\2\2\29\3\2\2\2\2;\3\2\2\2\2=\3\2\2\2\2?\3\2\2\2\2A\3\2\2\2\2C\3\2"+
		"\2\2\2E\3\2\2\2\2G\3\2\2\2\2I\3\2\2\2\2K\3\2\2\2\2M\3\2\2\2\2O\3\2\2\2"+
		"\2Q\3\2\2\2\2S\3\2\2\2\2U\3\2\2\2\2W\3\2\2\2\2Y\3\2\2\2\2[\3\2\2\2\2]"+
		"\3\2\2\2\3_\3\2\2\2\5a\3\2\2\2\7i\3\2\2\2\to\3\2\2\2\13q\3\2\2\2\rs\3"+
		"\2\2\2\17u\3\2\2\2\21w\3\2\2\2\23y\3\2\2\2\25{\3\2\2\2\27}\3\2\2\2\31"+
		"\u0080\3\2\2\2\33\u0085\3\2\2\2\35\u008e\3\2\2\2\37\u0099\3\2\2\2!\u009f"+
		"\3\2\2\2#\u00a3\3\2\2\2%\u00a6\3\2\2\2\'\u00ac\3\2\2\2)\u00b7\3\2\2\2"+
		"+\u00c2\3\2\2\2-\u00c8\3\2\2\2/\u00ca\3\2\2\2\61\u00cd\3\2\2\2\63\u00de"+
		"\3\2\2\2\65\u00f0\3\2\2\2\67\u00f8\3\2\2\29\u0107\3\2\2\2;\u0125\3\2\2"+
		"\2=\u012e\3\2\2\2?\u0145\3\2\2\2A\u015c\3\2\2\2C\u0167\3\2\2\2E\u0186"+
		"\3\2\2\2G\u0188\3\2\2\2I\u018b\3\2\2\2K\u018d\3\2\2\2M\u0196\3\2\2\2O"+
		"\u019a\3\2\2\2Q\u019e\3\2\2\2S\u01a3\3\2\2\2U\u01b6\3\2\2\2W\u01b8\3\2"+
		"\2\2Y\u01bd\3\2\2\2[\u01bf\3\2\2\2]\u01c2\3\2\2\2_`\7\60\2\2`\4\3\2\2"+
		"\2ab\7B\2\2bc\7r\2\2cd\7t\2\2de\7g\2\2ef\7h\2\2fg\7k\2\2gh\7z\2\2h\6\3"+
		"\2\2\2ij\7B\2\2jk\7d\2\2kl\7c\2\2lm\7u\2\2mn\7g\2\2n\b\3\2\2\2op\7=\2"+
		"\2p\n\3\2\2\2qr\7.\2\2r\f\3\2\2\2st\7c\2\2t\16\3\2\2\2uv\7]\2\2v\20\3"+
		"\2\2\2wx\7_\2\2x\22\3\2\2\2yz\7*\2\2z\24\3\2\2\2{|\7+\2\2|\26\3\2\2\2"+
		"}~\7`\2\2~\177\7`\2\2\177\30\3\2\2\2\u0080\u0081\t\2\2\2\u0081\u0082\t"+
		"\3\2\2\u0082\u0083\t\4\2\2\u0083\u0084\t\5\2\2\u0084\32\3\2\2\2\u0085"+
		"\u0086\t\6\2\2\u0086\u0087\t\7\2\2\u0087\u0088\t\b\2\2\u0088\u0089\t\t"+
		"\2\2\u0089\u008a\t\n\2\2\u008a\34\3\2\2\2\u008b\u008f\5\65\33\2\u008c"+
		"\u008f\5\67\34\2\u008d\u008f\59\35\2\u008e\u008b\3\2\2\2\u008e\u008c\3"+
		"\2\2\2\u008e\u008d\3\2\2\2\u008f\36\3\2\2\2\u0090\u0091\7v\2\2\u0091\u0092"+
		"\7t\2\2\u0092\u0093\7w\2\2\u0093\u009a\7g\2\2\u0094\u0095\7h\2\2\u0095"+
		"\u0096\7c\2\2\u0096\u0097\7n\2\2\u0097\u0098\7u\2\2\u0098\u009a\7g\2\2"+
		"\u0099\u0090\3\2\2\2\u0099\u0094\3\2\2\2\u009a \3\2\2\2\u009b\u00a0\5"+
		"A!\2\u009c\u00a0\5C\"\2\u009d\u00a0\5=\37\2\u009e\u00a0\5? \2\u009f\u009b"+
		"\3\2\2\2\u009f\u009c\3\2\2\2\u009f\u009d\3\2\2\2\u009f\u009e\3\2\2\2\u00a0"+
		"\"\3\2\2\2\u00a1\u00a4\5\61\31\2\u00a2\u00a4\5K&\2\u00a3\u00a1\3\2\2\2"+
		"\u00a3\u00a2\3\2\2\2\u00a4$\3\2\2\2\u00a5\u00a7\t\13\2\2\u00a6\u00a5\3"+
		"\2\2\2\u00a7\u00a8\3\2\2\2\u00a8\u00a6\3\2\2\2\u00a8\u00a9\3\2\2\2\u00a9"+
		"\u00aa\3\2\2\2\u00aa\u00ab\b\23\2\2\u00ab&\3\2\2\2\u00ac\u00b5\5M\'\2"+
		"\u00ad\u00b0\5Q)\2\u00ae\u00b0\7\60\2\2\u00af\u00ad\3\2\2\2\u00af\u00ae"+
		"\3\2\2\2\u00b0\u00b3\3\2\2\2\u00b1\u00af\3\2\2\2\u00b1\u00b2\3\2\2\2\u00b2"+
		"\u00b4\3\2\2\2\u00b3\u00b1\3\2\2\2\u00b4\u00b6\5Q)\2\u00b5\u00b1\3\2\2"+
		"\2\u00b5\u00b6\3\2\2\2\u00b6(\3\2\2\2\u00b7\u00bc\7>\2\2\u00b8\u00bb\n"+
		"\f\2\2\u00b9\u00bb\5E#\2\u00ba\u00b8\3\2\2\2\u00ba\u00b9\3\2\2\2\u00bb"+
		"\u00be\3\2\2\2\u00bc\u00ba\3\2\2\2\u00bc\u00bd\3\2\2\2\u00bd\u00bf\3\2"+
		"\2\2\u00be\u00bc\3\2\2\2\u00bf\u00c0\7@\2\2\u00c0*\3\2\2\2\u00c1\u00c3"+
		"\5\'\24\2\u00c2\u00c1\3\2\2\2\u00c2\u00c3\3\2\2\2\u00c3\u00c4\3\2\2\2"+
		"\u00c4\u00c5\7<\2\2\u00c5,\3\2\2\2\u00c6\u00c9\5/\30\2\u00c7\u00c9\5+"+
		"\26\2\u00c8\u00c6\3\2\2\2\u00c8\u00c7\3\2\2\2\u00c9.\3\2\2\2\u00ca\u00cb"+
		"\5+\26\2\u00cb\u00cc\5S*\2\u00cc\60\3\2\2\2\u00cd\u00ce\7a\2\2\u00ce\u00cf"+
		"\7<\2\2\u00cf\u00d2\3\2\2\2\u00d0\u00d3\5O(\2\u00d1\u00d3\t\r\2\2\u00d2"+
		"\u00d0\3\2\2\2\u00d2\u00d1\3\2\2\2\u00d3\u00dc\3\2\2\2\u00d4\u00d7\5Q"+
		")\2\u00d5\u00d7\7\60\2\2\u00d6\u00d4\3\2\2\2\u00d6\u00d5\3\2\2\2\u00d7"+
		"\u00da\3\2\2\2\u00d8\u00d6\3\2\2\2\u00d8\u00d9\3\2\2\2\u00d9\u00db\3\2"+
		"\2\2\u00da\u00d8\3\2\2\2\u00db\u00dd\5Q)\2\u00dc\u00d8\3\2\2\2\u00dc\u00dd"+
		"\3\2\2\2\u00dd\62\3\2\2\2\u00de\u00e0\7B\2\2\u00df\u00e1\t\16\2\2\u00e0"+
		"\u00df\3\2\2\2\u00e1\u00e2\3\2\2\2\u00e2\u00e0\3\2\2\2\u00e2\u00e3\3\2"+
		"\2\2\u00e3\u00ec\3\2\2\2\u00e4\u00e6\7/\2\2\u00e5\u00e7\t\17\2\2\u00e6"+
		"\u00e5\3\2\2\2\u00e7\u00e8\3\2\2\2\u00e8\u00e6\3\2\2\2\u00e8\u00e9\3\2"+
		"\2\2\u00e9\u00eb\3\2\2\2\u00ea\u00e4\3\2\2\2\u00eb\u00ee\3\2\2\2\u00ec"+
		"\u00ea\3\2\2\2\u00ec\u00ed\3\2\2\2\u00ed\64\3\2\2\2\u00ee\u00ec\3\2\2"+
		"\2\u00ef\u00f1\t\20\2\2\u00f0\u00ef\3\2\2\2\u00f0\u00f1\3\2\2\2\u00f1"+
		"\u00f3\3\2\2\2\u00f2\u00f4\t\r\2\2\u00f3\u00f2\3\2\2\2\u00f4\u00f5\3\2"+
		"\2\2\u00f5\u00f3\3\2\2\2\u00f5\u00f6\3\2\2\2\u00f6\66\3\2\2\2\u00f7\u00f9"+
		"\t\20\2\2\u00f8\u00f7\3\2\2\2\u00f8\u00f9\3\2\2\2\u00f9\u00fd\3\2\2\2"+
		"\u00fa\u00fc\t\r\2\2\u00fb\u00fa\3\2\2\2\u00fc\u00ff\3\2\2\2\u00fd\u00fb"+
		"\3\2\2\2\u00fd\u00fe\3\2\2\2\u00fe\u0100\3\2\2\2\u00ff\u00fd\3\2\2\2\u0100"+
		"\u0102\7\60\2\2\u0101\u0103\t\r\2\2\u0102\u0101\3\2\2\2\u0103\u0104\3"+
		"\2\2\2\u0104\u0102\3\2\2\2\u0104\u0105\3\2\2\2\u01058\3\2\2\2\u0106\u0108"+
		"\t\20\2\2\u0107\u0106\3\2\2\2\u0107\u0108\3\2\2\2\u0108\u0123\3\2\2\2"+
		"\u0109\u010b\t\r\2\2\u010a\u0109\3\2\2\2\u010b\u010c\3\2\2\2\u010c\u010a"+
		"\3\2\2\2\u010c\u010d\3\2\2\2\u010d\u010e\3\2\2\2\u010e\u0112\7\60\2\2"+
		"\u010f\u0111\t\r\2\2\u0110\u010f\3\2\2\2\u0111\u0114\3\2\2\2\u0112\u0110"+
		"\3\2\2\2\u0112\u0113\3\2\2\2\u0113\u0115\3\2\2\2\u0114\u0112\3\2\2\2\u0115"+
		"\u0124\5;\36\2\u0116\u0118\7\60\2\2\u0117\u0119\t\r\2\2\u0118\u0117\3"+
		"\2\2\2\u0119\u011a\3\2\2\2\u011a\u0118\3\2\2\2\u011a\u011b\3\2\2\2\u011b"+
		"\u011c\3\2\2\2\u011c\u0124\5;\36\2\u011d\u011f\t\r\2\2\u011e\u011d\3\2"+
		"\2\2\u011f\u0120\3\2\2\2\u0120\u011e\3\2\2\2\u0120\u0121\3\2\2\2\u0121"+
		"\u0122\3\2\2\2\u0122\u0124\5;\36\2\u0123\u010a\3\2\2\2\u0123\u0116\3\2"+
		"\2\2\u0123\u011e\3\2\2\2\u0124:\3\2\2\2\u0125\u0127\t\5\2\2\u0126\u0128"+
		"\t\20\2\2\u0127\u0126\3\2\2\2\u0127\u0128\3\2\2\2\u0128\u012a\3\2\2\2"+
		"\u0129\u012b\t\r\2\2\u012a\u0129\3\2\2\2\u012b\u012c\3\2\2\2\u012c\u012a"+
		"\3\2\2\2\u012c\u012d\3\2\2\2\u012d<\3\2\2\2\u012e\u012f\7)\2\2\u012f\u0130"+
		"\7)\2\2\u0130\u0131\7)\2\2\u0131\u013e\3\2\2\2\u0132\u0136\7)\2\2\u0133"+
		"\u0134\7)\2\2\u0134\u0136\7)\2\2\u0135\u0132\3\2\2\2\u0135\u0133\3\2\2"+
		"\2\u0135\u0136\3\2\2\2\u0136\u013a\3\2\2\2\u0137\u013b\n\21\2\2\u0138"+
		"\u013b\5G$\2\u0139\u013b\5E#\2\u013a\u0137\3\2\2\2\u013a\u0138\3\2\2\2"+
		"\u013a\u0139\3\2\2\2\u013b\u013d\3\2\2\2\u013c\u0135\3\2\2\2\u013d\u0140"+
		"\3\2\2\2\u013e\u013c\3\2\2\2\u013e\u013f\3\2\2\2\u013f\u0141\3\2\2\2\u0140"+
		"\u013e\3\2\2\2\u0141\u0142\7)\2\2\u0142\u0143\7)\2\2\u0143\u0144\7)\2"+
		"\2\u0144>\3\2\2\2\u0145\u0146\7$\2\2\u0146\u0147\7$\2\2\u0147\u0148\7"+
		"$\2\2\u0148\u0155\3\2\2\2\u0149\u014d\7$\2\2\u014a\u014b\7$\2\2\u014b"+
		"\u014d\7$\2\2\u014c\u0149\3\2\2\2\u014c\u014a\3\2\2\2\u014c\u014d\3\2"+
		"\2\2\u014d\u0151\3\2\2\2\u014e\u0152\n\22\2\2\u014f\u0152\5G$\2\u0150"+
		"\u0152\5E#\2\u0151\u014e\3\2\2\2\u0151\u014f\3\2\2\2\u0151\u0150\3\2\2"+
		"\2\u0152\u0154\3\2\2\2\u0153\u014c\3\2\2\2\u0154\u0157\3\2\2\2\u0155\u0153"+
		"\3\2\2\2\u0155\u0156\3\2\2\2\u0156\u0158\3\2\2\2\u0157\u0155\3\2\2\2\u0158"+
		"\u0159\7$\2\2\u0159\u015a\7$\2\2\u015a\u015b\7$\2\2\u015b@\3\2\2\2\u015c"+
		"\u0162\7$\2\2\u015d\u0161\n\23\2\2\u015e\u0161\5G$\2\u015f\u0161\5E#\2"+
		"\u0160\u015d\3\2\2\2\u0160\u015e\3\2\2\2\u0160\u015f\3\2\2\2\u0161\u0164"+
		"\3\2\2\2\u0162\u0160\3\2\2\2\u0162\u0163\3\2\2\2\u0163\u0165\3\2\2\2\u0164"+
		"\u0162\3\2\2\2\u0165\u0166\7$\2\2\u0166B\3\2\2\2\u0167\u016d\7)\2\2\u0168"+
		"\u016c\n\24\2\2\u0169\u016c\5G$\2\u016a\u016c\5E#\2\u016b\u0168\3\2\2"+
		"\2\u016b\u0169\3\2\2\2\u016b\u016a\3\2\2\2\u016c\u016f\3\2\2\2\u016d\u016b"+
		"\3\2\2\2\u016d\u016e\3\2\2\2\u016e\u0170\3\2\2\2\u016f\u016d\3\2\2\2\u0170"+
		"\u0171\7)\2\2\u0171D\3\2\2\2\u0172\u0173\7^\2\2\u0173\u0174\7w\2\2\u0174"+
		"\u0175\3\2\2\2\u0175\u0176\5Y-\2\u0176\u0177\5Y-\2\u0177\u0178\5Y-\2\u0178"+
		"\u0179\5Y-\2\u0179\u0187\3\2\2\2\u017a\u017b\7^\2\2\u017b\u017c\7W\2\2"+
		"\u017c\u017d\3\2\2\2\u017d\u017e\5Y-\2\u017e\u017f\5Y-\2\u017f\u0180\5"+
		"Y-\2\u0180\u0181\5Y-\2\u0181\u0182\5Y-\2\u0182\u0183\5Y-\2\u0183\u0184"+
		"\5Y-\2\u0184\u0185\5Y-\2\u0185\u0187\3\2\2\2\u0186\u0172\3\2\2\2\u0186"+
		"\u017a\3\2\2\2\u0187F\3\2\2\2\u0188\u0189\7^\2\2\u0189\u018a\t\25\2\2"+
		"\u018aH\3\2\2\2\u018b\u018c\t\13\2\2\u018cJ\3\2\2\2\u018d\u0191\7]\2\2"+
		"\u018e\u0190\5I%\2\u018f\u018e\3\2\2\2\u0190\u0193\3\2\2\2\u0191\u018f"+
		"\3\2\2\2\u0191\u0192\3\2\2\2\u0192\u0194\3\2\2\2\u0193\u0191\3\2\2\2\u0194"+
		"\u0195\7_\2\2\u0195L\3\2\2\2\u0196\u0197\t\33\2\2\u0197N\3\2\2\2\u0198"+
		"\u019b\5M\'\2\u0199\u019b\7a\2\2\u019a\u0198\3\2\2\2\u019a\u0199\3\2\2"+
		"\2\u019bP\3\2\2\2\u019c\u019f\5O(\2\u019d\u019f\t\26\2\2\u019e\u019c\3"+
		"\2\2\2\u019e\u019d\3\2\2\2\u019fR\3\2\2\2\u01a0\u01a4\5O(\2\u01a1\u01a4"+
		"\4\62<\2\u01a2\u01a4\5U+\2\u01a3\u01a0\3\2\2\2\u01a3\u01a1\3\2\2\2\u01a3"+
		"\u01a2\3\2\2\2\u01a4\u01b2\3\2\2\2\u01a5\u01a9\5Q)\2\u01a6\u01a9\t\27"+
		"\2\2\u01a7\u01a9\5U+\2\u01a8\u01a5\3\2\2\2\u01a8\u01a6\3\2\2\2\u01a8\u01a7"+
		"\3\2\2\2\u01a9\u01ac\3\2\2\2\u01aa\u01a8\3\2\2\2\u01aa\u01ab\3\2\2\2\u01ab"+
		"\u01b0\3\2\2\2\u01ac\u01aa\3\2\2\2\u01ad\u01b1\5Q)\2\u01ae\u01b1\7<\2"+
		"\2\u01af\u01b1\5U+\2\u01b0\u01ad\3\2\2\2\u01b0\u01ae\3\2\2\2\u01b0\u01af"+
		"\3\2\2\2\u01b1\u01b3\3\2\2\2\u01b2\u01aa\3\2\2\2\u01b2\u01b3\3\2\2\2\u01b3"+
		"T\3\2\2\2\u01b4\u01b7\5W,\2\u01b5\u01b7\5[.\2\u01b6\u01b4\3\2\2\2\u01b6"+
		"\u01b5\3\2\2\2\u01b7V\3\2\2\2\u01b8\u01b9\7\'\2\2\u01b9\u01ba\5Y-\2\u01ba"+
		"\u01bb\5Y-\2\u01bbX\3\2\2\2\u01bc\u01be\t\30\2\2\u01bd\u01bc\3\2\2\2\u01be"+
		"Z\3\2\2\2\u01bf\u01c0\7^\2\2\u01c0\u01c1\t\31\2\2\u01c1\\\3\2\2\2\u01c2"+
		"\u01c4\7%\2\2\u01c3\u01c5\n\32\2\2\u01c4\u01c3\3\2\2\2\u01c5\u01c6\3\2"+
		"\2\2\u01c6\u01c4\3\2\2\2\u01c6\u01c7\3\2\2\2\u01c7\u01c8\3\2\2\2\u01c8"+
		"\u01c9\b/\3\2\u01c9^\3\2\2\29\2\u008e\u0099\u009f\u00a3\u00a8\u00af\u00b1"+
		"\u00b5\u00ba\u00bc\u00c2\u00c8\u00d2\u00d6\u00d8\u00dc\u00e2\u00e8\u00ec"+
		"\u00f0\u00f5\u00f8\u00fd\u0104\u0107\u010c\u0112\u011a\u0120\u0123\u0127"+
		"\u012c\u0135\u013a\u013e\u014c\u0151\u0155\u0160\u0162\u016b\u016d\u0186"+
		"\u0191\u019a\u019e\u01a3\u01a8\u01aa\u01b0\u01b2\u01b6\u01bd\u01c6\4\b"+
		"\2\2\2\3\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}