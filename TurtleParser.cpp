#include "TurtleParser.h"
#include <boost/url/src.hpp>

using namespace std;

const string predicate_a = "<http://www.w3.org/1999/02/22-rdf-syntax-ns#type>";
const string predicate_first = "<http://www.w3.org/1999/02/22-rdf-syntax-ns#first>";
const string predicate_rest = "<http://www.w3.org/1999/02/22-rdf-syntax-ns#rest>";
const string type_nil = "<http://www.w3.org/1999/02/22-rdf-syntax-ns#nil>";
const string type_string = "<http://www.w3.org/2001/XMLSchema#string>";
const string type_integer = "<http://www.w3.org/2001/XMLSchema#integer>";
const string type_decimal = "<http://www.w3.org/2001/XMLSchema#decimal>";
const string type_double = "<http://www.w3.org/2001/XMLSchema#double>";
const string type_boolean = "<http://www.w3.org/2001/XMLSchema#boolean>";
/**
	Construct funtion, get parse tree

	@param istream the Turtle file/string.
*/
TurtleParser::TurtleParser(std::istream& in): in(in), triplesReader(0), nextBlank(0) { }

TurtleParser::~TurtleParser(){ 

}

bool TurtleParser::parse(std::string& subject,std::string& predicate,std::string& object,Type::Type_ID& objectType,std::string& objectSubType) {
    if(!triples.size()){
        prepareTripes();
    }
    if(triplesReader < triples.size()){
        subject = triples[triplesReader].subject;
        predicate = triples[triplesReader].predicate;
        object = triples[triplesReader].object;
        objectType = triples[triplesReader].objectType;
        objectSubType = triples[triplesReader].objectSubType;
        ++triplesReader;
        return true;
    }

    return false;
}


/**
	Overall driver function for Turtle parsing.
*/
void TurtleParser::prepareTripes() {
    try{
        TURTLEErrorListener lstnr;
        antlr4::ANTLRInputStream input(in);
        TURTLELexer lexer(&input);
        lexer.removeErrorListeners();
	    lexer.addErrorListener(&lstnr);

        antlr4::CommonTokenStream tokens(&lexer);
        TURTLEParser parser(&tokens);
        parser.removeErrorListeners(); 
        parser.addErrorListener(&lstnr);

        TURTLEParser::TurtleDocContext *ctx = parser.turtleDoc();
        visitTurtleDoc(ctx);

    } catch (const runtime_error& e1) {
        throw runtime_error(e1.what());
    }
}

// Convert a relative IRI into an absolute one
// ShortComming: only handle URI, not IRI (i.e. cant work for some unicode char)
// Implement Reference: RFC3986[https://www.ietf.org/rfc/rfc3986.txt], section 5.2
std::string TurtleParser::constructAbsoluteIRI(const std::string &iri){
    // rfc3986: A non-strict parser may ignore a scheme in the reference 
    // if it is identical to the base URI's scheme.
    const bool STRICT = false;  

    if(base.size() == 0) return iri;

    boost::urls::result<boost::urls::url> resBase = boost::urls::parse_uri(
            base.substr(1, base.size() - 2)
        );
    if(resBase.has_error()) {
        throw runtime_error("[ERROR]  Fail to parse base URL: " + base + " .");
    }
    
    boost::urls::url b = resBase.value();

    if(!b.has_scheme()) {
        throw runtime_error("[ERROR]  Base IRI has no scheme.");
    }

    boost::urls::result<boost::urls::url> resRef = boost::urls::parse_uri_reference(
            iri.substr(1, iri.length() - 2) 
        );

    if(resRef.has_error()){
        throw runtime_error("[ERROR]  Fail to parse relative IRI " + iri + " .");
    }
    
    boost::urls::url r = resRef.value();
    boost::urls::url t; // target url

    if(!STRICT && r.has_scheme() && b.scheme() == r.scheme()){
        r.remove_scheme();
    }
    if(r.has_scheme()){
        t.set_scheme(r.scheme());
        if(r.has_authority()){
            t.set_encoded_authority(r.encoded_authority());
        }
        t.set_path(r.path());
        if(r.has_query()) {
            t.set_query(r.query());
        }
    } else {
        if(r.has_authority()){
            t.set_encoded_authority(r.encoded_authority());
            t.set_path(r.path());
            if(r.has_query()) {
                t.set_query(r.query());
            }
        }else{

            if(r.path().size() == 0){
                t.set_path(b.path());
                if(r.has_query()){
                    t.set_query(r.query());
                }else if(b.has_query()){
                    t.set_query(b.query());
                }
            }else{;
                if(r.path().at(0) == '/'){
                    t.set_path(r.path());
                }else{
                    /* merge paths*/
                    t.set_path(b.path());
                    if(t.segments( ).empty()){
                        t.set_path(r.path());
                    }else{
                        boost::urls::segments_ref segs = t.segments();
                        segs.pop_back();
                        boost::urls::segments_encoded_ref rsegs= r.encoded_segments();
                        for(auto s : rsegs){
                            segs.push_back(s.decode());
                        }
                    }
                    
                }
                if(r.has_query()) {
                    t.set_query(r.query());
                }
            }
            if(b.has_authority()) {
                t.set_encoded_authority(b.encoded_authority());
            }
        }
        t.set_scheme(b.scheme());
    }
    if(r.has_fragment()){
        t.set_fragment(r.fragment());
    }
    t.normalize_path();
    
    stringstream buffer;
    buffer << '<' << t.buffer() << '>';
    return buffer.str();
}

/// Construct a new blank node
std::string TurtleParser::newBlankNode(){
    stringstream buffer;
    buffer << "_:b" << (nextBlank++);
    return buffer.str();
}

/// Convert a blank node id to its name in triple.
std::string TurtleParser::bNodeID2Name(unsigned id){
    stringstream buffer;
    buffer << "_:b" << (id);
    return buffer.str();
}

// Convert two hex char to a unsigned char
// For example : 'A' '0' => 160, '2' 'b' => 43
unsigned char TurtleParser::twoHexCharToByte(char high, char low){
    unsigned char uc;
    if(high >= '0' && high <= '9'){
        uc = high - '0';
    } else if (high >= 'a' && high <='f'){
        uc = high - 'a' + 10;
    } else {
        uc = high - 'A' + 10;
    }
    uc <<= 4;
    if(high >= '0' && high <= '9'){
        uc += low - '0';
    } else if (high >= 'a' && high <='f'){
        uc += low - 'a' + 10;
    } else {
        uc += low - 'A' + 10;
    }
    return uc;
}

/// Get str unescaped, process numeric escapes, string escapes, reserved character escapes at the same 
/// time. Make sure that every '\\' is used for escape, never just as a char.
/// The grammar and the check of lexer && parser guarantee this property.
std::string TurtleParser::unescapeString(const std::string &str){
    size_t n = str.size();
    stringstream buffer;
    for(size_t i = 0; i < n; ++i){
        if(str[i] != '\\'){
            buffer.put(str[i]);
            continue;
        } 
        if(str[i + 1] == 'u'){
            char a = (char) twoHexCharToByte(str[i + 2], str[i + 3]);
            char b = (char) twoHexCharToByte(str[i + 4], str[i + 5]);
            if(a != 0){
                buffer.put(a);
            } 
            buffer.put(b);
            i += 5;
        } 
        else if(str[i + 1] == 'U'){
            char a[4];
            for(int j = 1; j <= 4; ++j){
                a[j - 1] = (char) twoHexCharToByte(str[i + (j << 1)], str[i + (j << 1) + 1]);
            }

            int j;
            for(j = 0; j < 4; ++j){
                if(a[j]) break;
            }
            if(j >= 4) j = 3;

            for(; j < 4; ++j){
                buffer.put(a[j]);
            }

            i += 9;
        } 
        else {
            /**
                 string escapes 
                '\t' '\b' '\n' '\r' '\f' '\"' '\'' '\\'	

                reserved character escapes
                ~.-!$&'()*+,;=/?#@%_
            */
            switch (str[i + 1]){
                case 't':
                    buffer.put('\t'); break;
                case 'b':
                    buffer.put('\b'); break;
                case 'n' :
                    buffer.put('\n'); break;
                case 'r' :
                    buffer.put('\r'); break;
                case 'f' :
                    buffer.put('\f'); break;
                case '"':
                    buffer.put('"');  break;
                case '\'':
                    buffer.put('\''); break;
                case '\\':
                    buffer.put('\\'); break;
                default:
                    buffer.put(str[i + 1]);
            }
            i += 1;
        }
    }
    return buffer.str();
}

antlrcpp::Any TurtleParser::visitStatement(TURTLEParser::StatementContext *ctx){
    if(ctx->directive()){
        visitDirective(ctx->directive());
    } else {
        visitTriples(ctx->triples());
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitDirective(TURTLEParser::DirectiveContext *ctx){
    if(ctx->prefixID()){
        visitPrefixID(ctx->prefixID());
    } else if (ctx->base()){
        visitBase(ctx->base());
    } else if (ctx->sparqlPrefix()){
        visitSparqlPrefix(ctx->sparqlPrefix());
    } else {
        visitSparqlBase(ctx->sparqlBase());
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitPrefixID(TURTLEParser::PrefixIDContext *ctx){
    string iri = constructAbsoluteIRI(
        unescapeString( 
            ctx->IRIREF()->getText() 
        )
    );
    string prefix =  ctx->PNAME_NS()->getText();
    prefix.pop_back();  // pop the last ':'
    namespaces.insert(make_pair(prefix, iri));
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitBase(TURTLEParser::BaseContext *ctx){
    base = constructAbsoluteIRI(
        unescapeString( 
            ctx->IRIREF()->getText() 
        )
    );
    
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitSparqlBase(TURTLEParser::SparqlBaseContext *ctx){
    base = constructAbsoluteIRI(
        unescapeString( 
            ctx->IRIREF()->getText() 
        )
    );
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitSparqlPrefix(TURTLEParser::SparqlPrefixContext *ctx){
    string iri = constructAbsoluteIRI(
        unescapeString( 
            ctx->IRIREF()->getText() 
        )
    );
    string prefix =  ctx->PNAME_NS()->getText();
    prefix.pop_back();  // pop the last ':'
    namespaces.insert(make_pair(prefix, iri));
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitTriples(TURTLEParser::TriplesContext *ctx) {
    if(ctx->subject()){
        // subject predicateObjectList
        visitSubject(ctx->subject());   // should set curSubject
        visitPredicateObjectList(ctx->predicateObjectList());
    } else {
        // blankNodePropertyList predicateObjectList?
        string bnodeName = visitBlankNodePropertyList(ctx->blankNodePropertyList()).as<string>();
        if(ctx->predicateObjectList()){
            curSubject = bnodeName;
            visitPredicateObjectList(ctx->predicateObjectList());
        }
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitPredicateObjectList(TURTLEParser::PredicateObjectListContext *ctx){
    cout << "ION";
    int n = ctx->verb().size();
    cout << "SZ";
    for(int i = 0; i < n; ++i){
        cout << "Verb";
        visitVerb(ctx->verb(i));
        cout << "\nFINIS VERB";
        visitObjectList(ctx->objectList(i));
        cout << "OBJ";
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitObjectList(TURTLEParser::ObjectListContext *ctx) {
    for(auto *obj_ctx : ctx->object_()){
        cout << "beforeN OBJ";
        visitObject_(obj_ctx);
        cout << "outfo obj\n";
    }
    return antlrcpp::Any();
}


antlrcpp::Any TurtleParser::visitVerb(TURTLEParser::VerbContext *ctx){
    if(ctx->predicate()){
        visitPredicate(ctx->predicate());
    } else {
        curPredicate = predicate_a;
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitSubject(TURTLEParser::SubjectContext *ctx){
    if(ctx->iri()){
        curSubject = visitIri(ctx->iri()).as<string>();
    } else if(ctx->BlankNode()){
        curSubject = visitBlankNode(ctx->BlankNode()->getText()).as<string>();
    } else {
        curSubject = visitCollection(ctx->collection()).as<string>();
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitPredicate(TURTLEParser::PredicateContext *ctx){
    curPredicate = visitIri(ctx->iri()).as<string>();
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitObject_(TURTLEParser::Object_Context *ctx){
    string object, objectSubtype;
    Type::Type_ID objectType;
    if(ctx->literal()){
        visitLiteral(ctx->literal(), object, objectType, objectSubtype);
        triples.emplace_back(curSubject, curPredicate, object, objectType, objectSubtype);
        return antlrcpp::Any();
    }
    else{
        objectType = Type::Type_URI;
        if(ctx->iri()){
            object = visitIri(ctx->iri()).as<string>();
            triples.emplace_back(curSubject, curPredicate, object, objectType, objectSubtype);
        } else if (ctx->BlankNode()){
            object = visitBlankNode(ctx->BlankNode()->getText()).as<string>();
            triples.emplace_back(curSubject, curPredicate, object, objectType, objectSubtype);
        } else if (ctx->collection()){
            cout << "BEFORE collec";
            triples.emplace_back(curSubject, curPredicate, bNodeID2Name(nextBlank), objectType, objectSubtype);
            visitCollection(ctx->collection());
        } else if (ctx->blankNodePropertyList()){
            triples.emplace_back(curSubject, curPredicate, bNodeID2Name(nextBlank), objectType, objectSubtype);
            visitBlankNodePropertyList(ctx->blankNodePropertyList());
        } 
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitLiteral(TURTLEParser::LiteralContext *ctx, std::string &object, Type::Type_ID &objectType, std::string &objectSubType) {
    if(ctx->rdfLiteral()){
        visitRdfLiteral(ctx->rdfLiteral(), object, objectType, objectSubType);
    } else {
        string text = ctx->getText();
        if(text == "true" || text == "false"){
            object = text;
            objectType = Type::Type_Boolean;
        } else {
            // NumericLiteral, i.e. INTEGER | DECIMAL | DOUBLE
            object = text;
            if(text.find('e') != string::npos || text.find('E') != string::npos){
                // DOUBLE
                objectType = Type::Type_Double;
            } else if (text.find('.') != string::npos){
                objectType = Type::Type_Decimal;
            } else{
                objectType = Type::Type::Type_Integer;
            }
        }
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitBlankNodePropertyList(TURTLEParser::BlankNodePropertyListContext *ctx){
    string bnodeName = newBlankNode();
    string oldSubject = curSubject, oldPredicate = curPredicate;
    curSubject = bnodeName;
    cout << "Before po" << endl;
    visitPredicateObjectList(ctx->predicateObjectList());
    curSubject = oldSubject;
    curPredicate = oldPredicate;
    return bnodeName;
}

antlrcpp::Any TurtleParser::visitCollection(TURTLEParser::CollectionContext *ctx){
    int n = ctx->object_().size();
    if(n == 0){
        return type_nil;
    }

    string oldSubject = curSubject, oldPredicate = curPredicate;
    string bnodeName = newBlankNode();
    curSubject = bnodeName;
    for(int i = 0; i < n ; ++i){
        /* rdf:first */
        curPredicate = predicate_first;
        visitObject_(ctx->object_(i));  
        /* rdf:rest */
        if( i < n - 1){
            string nextBNode = newBlankNode();
            triples.emplace_back(curSubject, predicate_rest, nextBNode, Type::Type_URI,"");
            curSubject = nextBNode;
        } else {
            triples.emplace_back(curSubject, predicate_rest, type_nil, Type::Type_URI,"");
        }
        
    }

    curSubject = oldSubject;
    curPredicate = oldPredicate;
    return bnodeName;
}

antlrcpp::Any TurtleParser::visitRdfLiteral(TURTLEParser::RdfLiteralContext *ctx, std::string &object, Type::Type_ID &objectType, std::string &objectSubType) {
    string text = ctx->children[0]->getText();
    object = visitString(text).as<string>();
    
    if(ctx->children.size() == 1){
        objectType = Type::Type_String;
    } else {
        if(ctx->iri()){
            string iri = visitIri(ctx->iri()).as<string>();
            if(iri == type_boolean){
                objectType = Type::Type_Boolean;
            } else if(iri == type_string){
                objectType = Type::Type_String;
            } else if(iri == type_decimal){
                objectType = Type::Type_Decimal;
            } else if(iri == type_double){
                objectType = Type::Type_Double;
            } else if(iri == type_integer) {
                objectType = Type::Type_Integer;
            } else{
                objectType = Type::Type_CustomType;
                objectSubType = iri;
            }
        } else {
            objectType = Type::Type_CustomLanguage;
            objectSubType = ctx->children[1]->getText().substr(1);
        }
    }
    return antlrcpp::Any();
}

antlrcpp::Any TurtleParser::visitIri(TURTLEParser::IriContext *ctx){
    // ascii '<' 3C cant be first char of PrefixedName
    string text = ctx->getText();
    if(text[0] == '<'){
        return constructAbsoluteIRI(
            unescapeString(text)
        );
    } 
    return visitPrefixedName(text);
}

antlrcpp::Any TurtleParser::visitBlankNode(const std::string &text){
    string bnodeName;
    if(text.at(0) == '['){
        // anno blank node
        bnodeName = newBlankNode();
    } else {
        string bnodeLabel = text.substr(2, text.length() - 2);
        if(bnodeLabels.find(bnodeLabel) != bnodeLabels.end()){
            bnodeName = bNodeID2Name(bnodeLabels[bnodeLabel]);
        } else {
            bnodeLabels.insert(make_pair(bnodeLabel, nextBlank));
            bnodeName = newBlankNode();
        }
    }
    return bnodeName;
}

antlrcpp::Any TurtleParser::visitString(const std::string &text){
    string stringLiteral;
    if(text.size() >= 3 && text.at(0) == '\'' && text.at(0) == text.at(1) && 
        text.at(1) == text.at(2)){
        stringLiteral = visitStringLongSingleQuote(text).as<string>();
    } else if(text.size() >= 3 && text.at(0) == '"' && text.at(0) == text.at(1) && 
        text.at(1) == text.at(2)){
        stringLiteral = visitStringLongQuote(text).as<string>();
    } else if (text.size() != 0 && text.at(0) == '\''){
        stringLiteral = visitStringSingleQuote(text).as<string>();
    } else if (text.size() != 0 && text.at(0) == '"'){
        stringLiteral = visitStringQuote(text).as<string>();
    } else {
        throw runtime_error("[ERROR]  Fail to parse string literal: " + text + " .");
    }
    return stringLiteral;
}

antlrcpp::Any TurtleParser::visitStringQuote(const std::string &str){
    return unescapeString(str.substr(1, str.length() - 2));
}

antlrcpp::Any TurtleParser::visitStringSingleQuote(const std::string &str){
    return unescapeString(str.substr(1, str.length() - 2));
}

antlrcpp::Any TurtleParser::visitStringLongQuote(const std::string &str){
    return unescapeString(str.substr(1, str.length() - 6));
}

antlrcpp::Any TurtleParser::visitStringLongSingleQuote(const std::string &str){
    return unescapeString(str.substr(1, str.length() - 6));
}

antlrcpp::Any TurtleParser::visitPrefixedName(const std::string &text){
    size_t colon_pos = text.find(':'), len = text.length();
    string prefix = text.substr(0, colon_pos);
    string localName = unescapeString(text.substr(colon_pos + 1, len - colon_pos - 1));
    if(namespaces.find(prefix) == namespaces.end()){
        throw runtime_error("[ERROR]  Prefix " + prefix + " has not defined.");
    } 
    string prefixIri = namespaces[prefix];
    stringstream result;
    result <<"<" << prefixIri.substr(1, prefixIri.length() - 2) << localName <<">";
    return result.str();
}

/**
	Throw a runtime error when lexical and syntactic errors are detected in the query.
*/
void TURTLEErrorListener::syntaxError(antlr4::Recognizer *recognizer, antlr4::Token * offendingSymbol, \
	size_t line, size_t charPositionInLine, const std::string &msg, std::exception_ptr e)
{
	throw runtime_error("[Syntax Error]:line " + to_string(line) + ":" + to_string(charPositionInLine) + " " + msg);
}
