/**
 * 非常简易的测试代码，选取了94 + 82个测试例子
 * 测试代码不是严谨的，会导致假阳性或假阴性
 * 但测试出现问题的地方，可以人工核对
 * 事实上这些样例都是通过的
*/

#include "TurtleParser.h"

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>

using namespace std;

const string type_string = "<http://www.w3.org/2001/XMLSchema#string>";
const string type_integer = "<http://www.w3.org/2001/XMLSchema#integer>";
const string type_decimal = "<http://www.w3.org/2001/XMLSchema#decimal>";
const string type_double = "<http://www.w3.org/2001/XMLSchema#double>";
const string type_boolean = "<http://www.w3.org/2001/XMLSchema#boolean>";

// 94 TestCase name.{ttl|nt}
const char *testCaseName[] = {
    "blankNodePropertyList_with_multiple_triples",
    "turtle-subm-22",
    "langtagged_non_LONG",
    "turtle-subm-27",
    "localName_with_non_leading_extras",
    "labeled_blank_node_object",
    "localname_with_COLON",
    "turtle-subm-12",
    "negative_numeric",
    "turtle-subm-14",
    "reserved_escaped_localName",
    "blankNodePropertyList_as_object",
    "objectList_with_two_objects",
    "bareword_decimal",
    "blankNodePropertyList_as_subject",
    "turtle-subm-20",
    "blankNodePropertyList_containing_collection",
    "LITERAL_LONG2_with_1_squote",
    "labeled_blank_node_subject",
    "LITERAL1_all_controls",
    "percent_escaped_localName",
    "underscore_in_localName",
    "IRI_with_all_punctuation",
    "repeated_semis_not_at_end",
    "turtle-subm-15",
    "turtle-subm-06",
    "bareword_double",
    "predicateObjectList_with_two_objectLists",
    "turtle-subm-17",
    "nested_collection",
    "turtle-subm-16",
    "HYPHEN_MINUS_in_localName",
    "turtle-subm-01",
    "turtle-subm-19",
    "localName_with_leading_digit",
    "turtle-subm-10",
    "localName_with_leading_underscore",
    "literal_with_LINE_FEED",
    "turtle-subm-24",
    "localName_with_nfc_PN_CHARS_BASE_character_boundaries",
    "turtle-subm-11",
    "turtle-subm-03",
    "turtle-eval-struct-02",
    "LITERAL1_ascii_boundaries",
    "turtle-subm-25",
    "langtagged_LONG_with_subtag",
    "literal_with_REVERSE_SOLIDUS",
    "literal_with_numeric_escape4",
    "turtle-subm-26",
    "lantag_with_subtag",
    "bareword_a_predicate",
    "last",
    "LITERAL1",
    "turtle-subm-18",
    "turtle-subm-13",
    "numeric_with_leading_0",
    "two_LITERAL_LONG2s",
    "literal_true",
    "turtle-subm-02",
    "turtle-subm-23",
    "prefix_reassigned_and_used",
    "turtle-subm-08",
    "first",
    "LITERAL_LONG2_with_2_squotes",
    "LITERAL_LONG1_ascii_boundaries",
    "literal_with_FORM_FEED",
    "LITERAL1_all_punctuation",
    "literal_false",
    "collection_subject",
    "literal_with_CARRIAGE_RETURN",
    "LITERAL_LONG1_with_1_squote",
    "collection_object",
    "IRIREF_datatype",
    "turtle-subm-07",
    "comment_following_PNAME_NS",
    "turtle-subm-09",
    "LITERAL_LONG1_with_2_squotes",
    "LITERAL_LONG2_with_REVERSE_SOLIDUS",
    "turtle-eval-struct-01",
    "double_lower_case_e",
    "LITERAL2_ascii_boundaries",
    "LITERAL_LONG2_ascii_boundaries",
    "nested_blankNodePropertyLists",
    "number_sign_following_localName",
    "positive_numeric",
    "turtle-subm-05",
    "literal_with_CHARACTER_TABULATION",
    "turtle-subm-21",
    "literal_with_BACKSPACE",
    "number_sign_following_PNAME_NS",
    "empty_collection",
    "turtle-subm-04",
    "localName_with_assigned_nfc_PN_CHARS_BASE_character_boundaries",
    "localName_with_assigned_nfc_bmp_PN_CHARS_BASE_character_boundaries"
};
// 82 bad input
const char *testBadCase[] = {
    "turtle-syntax-bad-missing-ns-dot-end",
    "turtle-syntax-bad-pname-01",
    "turtle-syntax-bad-prefix-02",
    "turtle-syntax-bad-num-05",
    "turtle-syntax-bad-LITERAL2_with_langtag_and_datatype",
    "turtle-syntax-bad-struct-17",
    "turtle-syntax-bad-num-02",
    "turtle-syntax-bad-uri-04",
    "turtle-syntax-bad-n3-extras-03",
    "turtle-syntax-bad-uri-03",
    "turtle-syntax-bad-blank-label-dot-end",
    "turtle-syntax-bad-n3-extras-08",
    "turtle-eval-bad-01",
    "turtle-syntax-bad-n3-extras-10",
    "turtle-syntax-bad-prefix-03",
    "turtle-syntax-bad-kw-03",
    "turtle-syntax-bad-kw-04",
    "turtle-syntax-bad-string-01",
    "turtle-syntax-bad-struct-15",
    "turtle-syntax-bad-n3-extras-01",
    "turtle-syntax-bad-base-02",
    "turtle-syntax-bad-prefix-05",
    "turtle-syntax-bad-n3-extras-12",
    "turtle-syntax-bad-struct-07",
    "turtle-syntax-bad-pname-03",
    "turtle-syntax-bad-string-07",
    "turtle-syntax-bad-n3-extras-06",
    "turtle-syntax-bad-num-01",
    "turtle-syntax-bad-esc-02",
    "turtle-syntax-bad-struct-13",
    "turtle-syntax-bad-kw-05",
    "turtle-syntax-bad-number-dot-in-anon",
    "turtle-syntax-bad-base-03",
    "turtle-syntax-bad-struct-11",
    "turtle-syntax-bad-ns-dot-end",
    "turtle-syntax-bad-esc-03",
    "turtle-syntax-bad-ln-escape",
    "turtle-syntax-bad-struct-04",
    "turtle-syntax-bad-struct-12",
    "turtle-syntax-bad-ln-escape-start",
    "turtle-syntax-bad-struct-10",
    "turtle-eval-bad-03",
    "turtle-syntax-bad-n3-extras-07",
    "turtle-syntax-bad-prefix-01",
    "turtle-syntax-bad-prefix-04",
    "turtle-syntax-bad-struct-08",
    "turtle-syntax-bad-n3-extras-04",
    "turtle-syntax-bad-string-05",
    "turtle-syntax-bad-base-01",
    "turtle-syntax-bad-kw-02",
    "turtle-eval-bad-02",
    "turtle-syntax-bad-struct-05",
    "turtle-syntax-bad-uri-01",
    "turtle-syntax-bad-string-02",
    "turtle-syntax-bad-struct-14",
    "turtle-syntax-bad-n3-extras-13",
    "turtle-syntax-bad-uri-05",
    "turtle-syntax-bad-struct-06",
    "turtle-syntax-bad-n3-extras-02",
    "turtle-syntax-bad-missing-ns-dot-start",
    "turtle-syntax-bad-lang-01",
    "turtle-syntax-bad-struct-16",
    "turtle-syntax-bad-n3-extras-05",
    "turtle-syntax-bad-num-04",
    "turtle-syntax-bad-esc-01",
    "turtle-syntax-bad-struct-03",
    "turtle-eval-bad-04",
    "turtle-syntax-bad-struct-02",
    "turtle-syntax-bad-pname-02",
    "turtle-syntax-bad-num-03",
    "turtle-syntax-bad-struct-01",
    "turtle-syntax-bad-kw-01",
    "turtle-syntax-bad-ns-dot-start",
    "turtle-syntax-bad-string-04",
    "turtle-syntax-bad-uri-02",
    "turtle-syntax-bad-n3-extras-11",
    "turtle-syntax-bad-string-03",
    "turtle-syntax-bad-esc-04",
    "turtle-syntax-bad-struct-09",
    "turtle-syntax-bad-n3-extras-09",
    "turtle-syntax-bad-string-06",
    "turtle-syntax-bad-ln-dash-start"
};

bool isEqual(const string &s1, const string &s2){
    if(s1.size() > 2 && s1[0] == '_' && s1[1] ==':' ){
        return s2.size() > 2 && s2[0] == '_' && s2[1] == ':';
    }
    if( s1 == s2 )return true;
    if(s1.size() < s2.size()){
        if(s2[s1.size()] == '^')return true;
    }else if(s1.size() > s2.size()){
        if(s1[s2.size()] == '^')return true;
    }
    return false;
}

bool check(const string &CaseDir, const string &groudTruthDir, string base){

    try{
        ifstream fin(CaseDir);
        ifstream res(groudTruthDir);
        TurtleParser tt(fin);

        tt.setDefaultBaseIri(base);
        string s, p, o;
        Type::Type_ID objType;
        string subType;
        while(tt.parse(s, p, o, objType, subType)){
        
            if(objType ==Type::Type_CustomLanguage){
                o = "\"" + o + "\"" + "@" + subType;
            } else if(objType == Type::Type_CustomType){
                o = "\"" +  o +"\""+  "^^" + subType;
            } else if(objType == Type::Type_String){
                o =  "\"" + o + "\""  + "^^" + type_string;
            } else if(objType == Type::Type_Decimal){
                o =  "\"" + o + "\""  + "^^" + type_decimal;
            } else if(objType == Type::Type_Double){
                o =  "\"" + o + "\""  + "^^" + type_double;
            } else if(objType == Type::Type_Integer){
                o =  "\"" + o + "\""  + "^^" + type_integer;
            } else if(objType == Type::Type_Boolean){
                o =  "\"" + o + "\""  + "^^" + type_boolean;
            }
            
            
            string gs, gp, go, ending;
            res >> gs >> gp >> go>> ending;
            gs = tt.unescapeString(gs, true, true, true);
            gp = tt.unescapeString(gp, true, true, true);
            go = tt.unescapeString(go, true, true, true);
            bool isLiteral = (objType == Type::Type_Decimal) || (objType == Type::Type_Double)||(objType == Type::Type_Integer)||(objType == Type::Type_Boolean);//(objType == Type::Type_String) || 
            if(isEqual(gs,s) && isEqual(gp,p) &&(isLiteral || isEqual(go,o))) continue;
            else {

                cout << "\nOutput: " << s << " " << p << " " << o << endl;
                cout << "Truth: "<< gs << " " << gp << " " <<go << endl;
                return false;
            }
            
        }
    } catch (exception e){
        return false;
    }
    return true;
}

bool check(const string &badCaseDir, string base){
    bool f = false;
    try{
        ifstream fin(badCaseDir);
        TurtleParser tt(fin);
        tt.setDefaultBaseIri(base);
        string s, p, o;
        Type::Type_ID objType;
        string subType;
        while(tt.parse(s, p, o, objType, subType)){
        
            if(objType ==Type::Type_CustomLanguage){
                o = "\"" + o + "\"" + "@" + subType;
            } else if(objType == Type::Type_CustomType){
                o = o + "^^" + subType;
            } else if(objType == Type::Type_String){
                o =  "\"" + o + "\""  + "^^" + type_string;
            } else if(objType == Type::Type_Decimal){
                o =  "\"" + o + "\""  + "^^" + type_decimal;
            } else if(objType == Type::Type_Double){
                o =  "\"" + o + "\""  + "^^" + type_double;
            } else if(objType == Type::Type_Integer){
                o =  "\"" + o + "\""  + "^^" + type_integer;
            } else if(objType == Type::Type_Boolean){
                o =  "\"" + o + "\""  + "^^" + type_boolean;
            }
            cout <<"\nYour output: "<< s <<" " <<  p  << " "<< o <<endl;
        }
    } catch (exception e){
        f = true;
    }
    return f;
}

bool runTest(){
    int n1 = 94, n2 = 82, n = n1 + n2;
    int tot = 0;
    for(int i = 0; i < n1; ++i){
        cout << "Run test case: " << testCaseName[i] << " ...  ";
        if(check(string("../TurtleTests/") + testCaseName[i] + ".ttl", 
            string("../TurtleTests/") + testCaseName[i] + ".nt",
            string("<http://www.w3.org/2013/TurtleTests/") + testCaseName[i] + ".ttl>")){
            cout << "Passed" << endl;
            ++tot;
        }else {
            cout << "Failed" << endl;
        }
    }
    for(int i = 0; i < n2; ++i){
        cout << "Run test case: " << testBadCase[i] << " ...  ";
        if(check(string("../TurtleTests/") + testBadCase[i] + ".ttl",
        string("<http://www.w3.org/2013/TurtleTests/") + testCaseName[i] + ".ttl>")){
            cout << "Passed" << endl;
            ++tot;
        }else {
            cout << "Failed" << endl;
        }
    }
    cout << "Score: " << tot << "/" << n << endl;
}

int main(){
        
    runTest();

    return 0;
}