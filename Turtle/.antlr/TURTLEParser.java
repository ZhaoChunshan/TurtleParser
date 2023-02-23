// Generated from /home/zhaochunshan/TurtleParser/Turtle/TURTLE.g4 by ANTLR 4.9.2
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class TURTLEParser extends Parser {
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
	public static final int
		RULE_turtleDoc = 0, RULE_statement = 1, RULE_directive = 2, RULE_prefixID = 3, 
		RULE_base = 4, RULE_sparqlBase = 5, RULE_sparqlPrefix = 6, RULE_triples = 7, 
		RULE_predicateObjectList = 8, RULE_objectList = 9, RULE_verb = 10, RULE_subject = 11, 
		RULE_predicate = 12, RULE_object_ = 13, RULE_literal = 14, RULE_blankNodePropertyList = 15, 
		RULE_collection = 16, RULE_rdfLiteral = 17, RULE_iri = 18;
	private static String[] makeRuleNames() {
		return new String[] {
			"turtleDoc", "statement", "directive", "prefixID", "base", "sparqlBase", 
			"sparqlPrefix", "triples", "predicateObjectList", "objectList", "verb", 
			"subject", "predicate", "object_", "literal", "blankNodePropertyList", 
			"collection", "rdfLiteral", "iri"
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

	@Override
	public String getGrammarFileName() { return "TURTLE.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public TURTLEParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	public static class TurtleDocContext extends ParserRuleContext {
		public TerminalNode EOF() { return getToken(TURTLEParser.EOF, 0); }
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public TurtleDocContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_turtleDoc; }
	}

	public final TurtleDocContext turtleDoc() throws RecognitionException {
		TurtleDocContext _localctx = new TurtleDocContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_turtleDoc);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(41);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__1) | (1L << T__2) | (1L << T__6) | (1L << T__8) | (1L << BASE) | (1L << PREFIX) | (1L << BlankNode) | (1L << IRIREF) | (1L << PrefixedName))) != 0)) {
				{
				{
				setState(38);
				statement();
				}
				}
				setState(43);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(44);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public DirectiveContext directive() {
			return getRuleContext(DirectiveContext.class,0);
		}
		public TriplesContext triples() {
			return getRuleContext(TriplesContext.class,0);
		}
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statement);
		try {
			setState(50);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
			case T__2:
			case BASE:
			case PREFIX:
				enterOuterAlt(_localctx, 1);
				{
				setState(46);
				directive();
				}
				break;
			case T__6:
			case T__8:
			case BlankNode:
			case IRIREF:
			case PrefixedName:
				enterOuterAlt(_localctx, 2);
				{
				setState(47);
				triples();
				setState(48);
				match(T__0);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class DirectiveContext extends ParserRuleContext {
		public PrefixIDContext prefixID() {
			return getRuleContext(PrefixIDContext.class,0);
		}
		public BaseContext base() {
			return getRuleContext(BaseContext.class,0);
		}
		public SparqlPrefixContext sparqlPrefix() {
			return getRuleContext(SparqlPrefixContext.class,0);
		}
		public SparqlBaseContext sparqlBase() {
			return getRuleContext(SparqlBaseContext.class,0);
		}
		public DirectiveContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_directive; }
	}

	public final DirectiveContext directive() throws RecognitionException {
		DirectiveContext _localctx = new DirectiveContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_directive);
		try {
			setState(56);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__1:
				enterOuterAlt(_localctx, 1);
				{
				setState(52);
				prefixID();
				}
				break;
			case T__2:
				enterOuterAlt(_localctx, 2);
				{
				setState(53);
				base();
				}
				break;
			case PREFIX:
				enterOuterAlt(_localctx, 3);
				{
				setState(54);
				sparqlPrefix();
				}
				break;
			case BASE:
				enterOuterAlt(_localctx, 4);
				{
				setState(55);
				sparqlBase();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PrefixIDContext extends ParserRuleContext {
		public TerminalNode PNAME_NS() { return getToken(TURTLEParser.PNAME_NS, 0); }
		public TerminalNode IRIREF() { return getToken(TURTLEParser.IRIREF, 0); }
		public PrefixIDContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_prefixID; }
	}

	public final PrefixIDContext prefixID() throws RecognitionException {
		PrefixIDContext _localctx = new PrefixIDContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_prefixID);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(58);
			match(T__1);
			setState(59);
			match(PNAME_NS);
			setState(60);
			match(IRIREF);
			setState(61);
			match(T__0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BaseContext extends ParserRuleContext {
		public TerminalNode IRIREF() { return getToken(TURTLEParser.IRIREF, 0); }
		public BaseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_base; }
	}

	public final BaseContext base() throws RecognitionException {
		BaseContext _localctx = new BaseContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_base);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(63);
			match(T__2);
			setState(64);
			match(IRIREF);
			setState(65);
			match(T__0);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SparqlBaseContext extends ParserRuleContext {
		public TerminalNode BASE() { return getToken(TURTLEParser.BASE, 0); }
		public TerminalNode IRIREF() { return getToken(TURTLEParser.IRIREF, 0); }
		public SparqlBaseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sparqlBase; }
	}

	public final SparqlBaseContext sparqlBase() throws RecognitionException {
		SparqlBaseContext _localctx = new SparqlBaseContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_sparqlBase);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(67);
			match(BASE);
			setState(68);
			match(IRIREF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SparqlPrefixContext extends ParserRuleContext {
		public TerminalNode PREFIX() { return getToken(TURTLEParser.PREFIX, 0); }
		public TerminalNode PNAME_NS() { return getToken(TURTLEParser.PNAME_NS, 0); }
		public TerminalNode IRIREF() { return getToken(TURTLEParser.IRIREF, 0); }
		public SparqlPrefixContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_sparqlPrefix; }
	}

	public final SparqlPrefixContext sparqlPrefix() throws RecognitionException {
		SparqlPrefixContext _localctx = new SparqlPrefixContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_sparqlPrefix);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(70);
			match(PREFIX);
			setState(71);
			match(PNAME_NS);
			setState(72);
			match(IRIREF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class TriplesContext extends ParserRuleContext {
		public SubjectContext subject() {
			return getRuleContext(SubjectContext.class,0);
		}
		public PredicateObjectListContext predicateObjectList() {
			return getRuleContext(PredicateObjectListContext.class,0);
		}
		public BlankNodePropertyListContext blankNodePropertyList() {
			return getRuleContext(BlankNodePropertyListContext.class,0);
		}
		public TriplesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_triples; }
	}

	public final TriplesContext triples() throws RecognitionException {
		TriplesContext _localctx = new TriplesContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_triples);
		int _la;
		try {
			setState(81);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case T__8:
			case BlankNode:
			case IRIREF:
			case PrefixedName:
				enterOuterAlt(_localctx, 1);
				{
				setState(74);
				subject();
				setState(75);
				predicateObjectList();
				}
				break;
			case T__6:
				enterOuterAlt(_localctx, 2);
				{
				setState(77);
				blankNodePropertyList();
				setState(79);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << IRIREF) | (1L << PrefixedName))) != 0)) {
					{
					setState(78);
					predicateObjectList();
					}
				}

				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PredicateObjectListContext extends ParserRuleContext {
		public List<VerbContext> verb() {
			return getRuleContexts(VerbContext.class);
		}
		public VerbContext verb(int i) {
			return getRuleContext(VerbContext.class,i);
		}
		public List<ObjectListContext> objectList() {
			return getRuleContexts(ObjectListContext.class);
		}
		public ObjectListContext objectList(int i) {
			return getRuleContext(ObjectListContext.class,i);
		}
		public PredicateObjectListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_predicateObjectList; }
	}

	public final PredicateObjectListContext predicateObjectList() throws RecognitionException {
		PredicateObjectListContext _localctx = new PredicateObjectListContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_predicateObjectList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(83);
			verb();
			setState(84);
			objectList();
			setState(93);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__3) {
				{
				{
				setState(85);
				match(T__3);
				setState(89);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__5) | (1L << IRIREF) | (1L << PrefixedName))) != 0)) {
					{
					setState(86);
					verb();
					setState(87);
					objectList();
					}
				}

				}
				}
				setState(95);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ObjectListContext extends ParserRuleContext {
		public List<Object_Context> object_() {
			return getRuleContexts(Object_Context.class);
		}
		public Object_Context object_(int i) {
			return getRuleContext(Object_Context.class,i);
		}
		public ObjectListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_objectList; }
	}

	public final ObjectListContext objectList() throws RecognitionException {
		ObjectListContext _localctx = new ObjectListContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_objectList);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(96);
			object_();
			setState(101);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==T__4) {
				{
				{
				setState(97);
				match(T__4);
				setState(98);
				object_();
				}
				}
				setState(103);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class VerbContext extends ParserRuleContext {
		public PredicateContext predicate() {
			return getRuleContext(PredicateContext.class,0);
		}
		public VerbContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_verb; }
	}

	public final VerbContext verb() throws RecognitionException {
		VerbContext _localctx = new VerbContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_verb);
		try {
			setState(106);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IRIREF:
			case PrefixedName:
				enterOuterAlt(_localctx, 1);
				{
				setState(104);
				predicate();
				}
				break;
			case T__5:
				enterOuterAlt(_localctx, 2);
				{
				setState(105);
				match(T__5);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SubjectContext extends ParserRuleContext {
		public IriContext iri() {
			return getRuleContext(IriContext.class,0);
		}
		public TerminalNode BlankNode() { return getToken(TURTLEParser.BlankNode, 0); }
		public CollectionContext collection() {
			return getRuleContext(CollectionContext.class,0);
		}
		public SubjectContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subject; }
	}

	public final SubjectContext subject() throws RecognitionException {
		SubjectContext _localctx = new SubjectContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_subject);
		try {
			setState(111);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IRIREF:
			case PrefixedName:
				enterOuterAlt(_localctx, 1);
				{
				setState(108);
				iri();
				}
				break;
			case BlankNode:
				enterOuterAlt(_localctx, 2);
				{
				setState(109);
				match(BlankNode);
				}
				break;
			case T__8:
				enterOuterAlt(_localctx, 3);
				{
				setState(110);
				collection();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class PredicateContext extends ParserRuleContext {
		public IriContext iri() {
			return getRuleContext(IriContext.class,0);
		}
		public PredicateContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_predicate; }
	}

	public final PredicateContext predicate() throws RecognitionException {
		PredicateContext _localctx = new PredicateContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_predicate);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(113);
			iri();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Object_Context extends ParserRuleContext {
		public IriContext iri() {
			return getRuleContext(IriContext.class,0);
		}
		public TerminalNode BlankNode() { return getToken(TURTLEParser.BlankNode, 0); }
		public CollectionContext collection() {
			return getRuleContext(CollectionContext.class,0);
		}
		public BlankNodePropertyListContext blankNodePropertyList() {
			return getRuleContext(BlankNodePropertyListContext.class,0);
		}
		public LiteralContext literal() {
			return getRuleContext(LiteralContext.class,0);
		}
		public Object_Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_object_; }
	}

	public final Object_Context object_() throws RecognitionException {
		Object_Context _localctx = new Object_Context(_ctx, getState());
		enterRule(_localctx, 26, RULE_object_);
		try {
			setState(120);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case IRIREF:
			case PrefixedName:
				enterOuterAlt(_localctx, 1);
				{
				setState(115);
				iri();
				}
				break;
			case BlankNode:
				enterOuterAlt(_localctx, 2);
				{
				setState(116);
				match(BlankNode);
				}
				break;
			case T__8:
				enterOuterAlt(_localctx, 3);
				{
				setState(117);
				collection();
				}
				break;
			case T__6:
				enterOuterAlt(_localctx, 4);
				{
				setState(118);
				blankNodePropertyList();
				}
				break;
			case NumericLiteral:
			case BooleanLiteral:
			case String:
				enterOuterAlt(_localctx, 5);
				{
				setState(119);
				literal();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class LiteralContext extends ParserRuleContext {
		public RdfLiteralContext rdfLiteral() {
			return getRuleContext(RdfLiteralContext.class,0);
		}
		public TerminalNode NumericLiteral() { return getToken(TURTLEParser.NumericLiteral, 0); }
		public TerminalNode BooleanLiteral() { return getToken(TURTLEParser.BooleanLiteral, 0); }
		public LiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_literal; }
	}

	public final LiteralContext literal() throws RecognitionException {
		LiteralContext _localctx = new LiteralContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_literal);
		try {
			setState(125);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case String:
				enterOuterAlt(_localctx, 1);
				{
				setState(122);
				rdfLiteral();
				}
				break;
			case NumericLiteral:
				enterOuterAlt(_localctx, 2);
				{
				setState(123);
				match(NumericLiteral);
				}
				break;
			case BooleanLiteral:
				enterOuterAlt(_localctx, 3);
				{
				setState(124);
				match(BooleanLiteral);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class BlankNodePropertyListContext extends ParserRuleContext {
		public PredicateObjectListContext predicateObjectList() {
			return getRuleContext(PredicateObjectListContext.class,0);
		}
		public BlankNodePropertyListContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_blankNodePropertyList; }
	}

	public final BlankNodePropertyListContext blankNodePropertyList() throws RecognitionException {
		BlankNodePropertyListContext _localctx = new BlankNodePropertyListContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_blankNodePropertyList);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(127);
			match(T__6);
			setState(128);
			predicateObjectList();
			setState(129);
			match(T__7);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class CollectionContext extends ParserRuleContext {
		public List<Object_Context> object_() {
			return getRuleContexts(Object_Context.class);
		}
		public Object_Context object_(int i) {
			return getRuleContext(Object_Context.class,i);
		}
		public CollectionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_collection; }
	}

	public final CollectionContext collection() throws RecognitionException {
		CollectionContext _localctx = new CollectionContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_collection);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(131);
			match(T__8);
			setState(135);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << T__6) | (1L << T__8) | (1L << NumericLiteral) | (1L << BooleanLiteral) | (1L << String) | (1L << BlankNode) | (1L << IRIREF) | (1L << PrefixedName))) != 0)) {
				{
				{
				setState(132);
				object_();
				}
				}
				setState(137);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(138);
			match(T__9);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class RdfLiteralContext extends ParserRuleContext {
		public TerminalNode String() { return getToken(TURTLEParser.String, 0); }
		public TerminalNode LANGTAG() { return getToken(TURTLEParser.LANGTAG, 0); }
		public IriContext iri() {
			return getRuleContext(IriContext.class,0);
		}
		public RdfLiteralContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_rdfLiteral; }
	}

	public final RdfLiteralContext rdfLiteral() throws RecognitionException {
		RdfLiteralContext _localctx = new RdfLiteralContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_rdfLiteral);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(140);
			match(String);
			setState(144);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case LANGTAG:
				{
				setState(141);
				match(LANGTAG);
				}
				break;
			case T__10:
				{
				setState(142);
				match(T__10);
				setState(143);
				iri();
				}
				break;
			case T__0:
			case T__3:
			case T__4:
			case T__6:
			case T__7:
			case T__8:
			case T__9:
			case NumericLiteral:
			case BooleanLiteral:
			case String:
			case BlankNode:
			case IRIREF:
			case PrefixedName:
				break;
			default:
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class IriContext extends ParserRuleContext {
		public TerminalNode IRIREF() { return getToken(TURTLEParser.IRIREF, 0); }
		public TerminalNode PrefixedName() { return getToken(TURTLEParser.PrefixedName, 0); }
		public IriContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_iri; }
	}

	public final IriContext iri() throws RecognitionException {
		IriContext _localctx = new IriContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_iri);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(146);
			_la = _input.LA(1);
			if ( !(_la==IRIREF || _la==PrefixedName) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\60\u0097\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13"+
		"\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\3\2\7\2*\n\2\f\2\16\2-\13\2\3\2\3\2\3\3\3\3\3\3\3"+
		"\3\5\3\65\n\3\3\4\3\4\3\4\3\4\5\4;\n\4\3\5\3\5\3\5\3\5\3\5\3\6\3\6\3\6"+
		"\3\6\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\5\tR\n\t\5\tT\n\t"+
		"\3\n\3\n\3\n\3\n\3\n\3\n\5\n\\\n\n\7\n^\n\n\f\n\16\na\13\n\3\13\3\13\3"+
		"\13\7\13f\n\13\f\13\16\13i\13\13\3\f\3\f\5\fm\n\f\3\r\3\r\3\r\5\rr\n\r"+
		"\3\16\3\16\3\17\3\17\3\17\3\17\3\17\5\17{\n\17\3\20\3\20\3\20\5\20\u0080"+
		"\n\20\3\21\3\21\3\21\3\21\3\22\3\22\7\22\u0088\n\22\f\22\16\22\u008b\13"+
		"\22\3\22\3\22\3\23\3\23\3\23\3\23\5\23\u0093\n\23\3\24\3\24\3\24\2\2\25"+
		"\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&\2\3\4\2\26\26\30\30\2\u0099"+
		"\2+\3\2\2\2\4\64\3\2\2\2\6:\3\2\2\2\b<\3\2\2\2\nA\3\2\2\2\fE\3\2\2\2\16"+
		"H\3\2\2\2\20S\3\2\2\2\22U\3\2\2\2\24b\3\2\2\2\26l\3\2\2\2\30q\3\2\2\2"+
		"\32s\3\2\2\2\34z\3\2\2\2\36\177\3\2\2\2 \u0081\3\2\2\2\"\u0085\3\2\2\2"+
		"$\u008e\3\2\2\2&\u0094\3\2\2\2(*\5\4\3\2)(\3\2\2\2*-\3\2\2\2+)\3\2\2\2"+
		"+,\3\2\2\2,.\3\2\2\2-+\3\2\2\2./\7\2\2\3/\3\3\2\2\2\60\65\5\6\4\2\61\62"+
		"\5\20\t\2\62\63\7\3\2\2\63\65\3\2\2\2\64\60\3\2\2\2\64\61\3\2\2\2\65\5"+
		"\3\2\2\2\66;\5\b\5\2\67;\5\n\6\28;\5\16\b\29;\5\f\7\2:\66\3\2\2\2:\67"+
		"\3\2\2\2:8\3\2\2\2:9\3\2\2\2;\7\3\2\2\2<=\7\4\2\2=>\7\27\2\2>?\7\26\2"+
		"\2?@\7\3\2\2@\t\3\2\2\2AB\7\5\2\2BC\7\26\2\2CD\7\3\2\2D\13\3\2\2\2EF\7"+
		"\16\2\2FG\7\26\2\2G\r\3\2\2\2HI\7\17\2\2IJ\7\27\2\2JK\7\26\2\2K\17\3\2"+
		"\2\2LM\5\30\r\2MN\5\22\n\2NT\3\2\2\2OQ\5 \21\2PR\5\22\n\2QP\3\2\2\2QR"+
		"\3\2\2\2RT\3\2\2\2SL\3\2\2\2SO\3\2\2\2T\21\3\2\2\2UV\5\26\f\2V_\5\24\13"+
		"\2W[\7\6\2\2XY\5\26\f\2YZ\5\24\13\2Z\\\3\2\2\2[X\3\2\2\2[\\\3\2\2\2\\"+
		"^\3\2\2\2]W\3\2\2\2^a\3\2\2\2_]\3\2\2\2_`\3\2\2\2`\23\3\2\2\2a_\3\2\2"+
		"\2bg\5\34\17\2cd\7\7\2\2df\5\34\17\2ec\3\2\2\2fi\3\2\2\2ge\3\2\2\2gh\3"+
		"\2\2\2h\25\3\2\2\2ig\3\2\2\2jm\5\32\16\2km\7\b\2\2lj\3\2\2\2lk\3\2\2\2"+
		"m\27\3\2\2\2nr\5&\24\2or\7\23\2\2pr\5\"\22\2qn\3\2\2\2qo\3\2\2\2qp\3\2"+
		"\2\2r\31\3\2\2\2st\5&\24\2t\33\3\2\2\2u{\5&\24\2v{\7\23\2\2w{\5\"\22\2"+
		"x{\5 \21\2y{\5\36\20\2zu\3\2\2\2zv\3\2\2\2zw\3\2\2\2zx\3\2\2\2zy\3\2\2"+
		"\2{\35\3\2\2\2|\u0080\5$\23\2}\u0080\7\20\2\2~\u0080\7\21\2\2\177|\3\2"+
		"\2\2\177}\3\2\2\2\177~\3\2\2\2\u0080\37\3\2\2\2\u0081\u0082\7\t\2\2\u0082"+
		"\u0083\5\22\n\2\u0083\u0084\7\n\2\2\u0084!\3\2\2\2\u0085\u0089\7\13\2"+
		"\2\u0086\u0088\5\34\17\2\u0087\u0086\3\2\2\2\u0088\u008b\3\2\2\2\u0089"+
		"\u0087\3\2\2\2\u0089\u008a\3\2\2\2\u008a\u008c\3\2\2\2\u008b\u0089\3\2"+
		"\2\2\u008c\u008d\7\f\2\2\u008d#\3\2\2\2\u008e\u0092\7\22\2\2\u008f\u0093"+
		"\7\33\2\2\u0090\u0091\7\r\2\2\u0091\u0093\5&\24\2\u0092\u008f\3\2\2\2"+
		"\u0092\u0090\3\2\2\2\u0092\u0093\3\2\2\2\u0093%\3\2\2\2\u0094\u0095\t"+
		"\2\2\2\u0095\'\3\2\2\2\20+\64:QS[_glqz\177\u0089\u0092";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}