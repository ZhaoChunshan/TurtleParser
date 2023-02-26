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

int main(){
    while(true){

        string fileName;
        cout << "Input test file name in the testCase Folders: " << endl;
        cin >>fileName;
        ifstream fin("../TurtleTests/" + fileName);
        TurtleParser tt(fin);
        string s, p, o;
        Type::Type_ID objType;
        string subType;
        cout << "----------------------------Triples----------------------------"<<endl;
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
            cout << s << " " << p << " " << o << endl;
        }
        cout << endl;


    }
    
    return 0;
}