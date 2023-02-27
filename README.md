# TurtleParser
A parser for Turtle, the terse RDF triple language.
## Requirement
+ C++11
+ antlr runtime, see `tools/libantlr4-runtime.a`, `tools/antlr4-cpp-runtime-4`
+ boost Version 1.81.0 (Released On December 14th, 2022 17:44 GMT). We have download it @`tools/boost_1_81_0`
## Usage
+ copy `tools`, `Turtle`, `Type.h`, `TurtleParser.[cpp|h]`, to your folder.
+ Include header file: TurtleParser.h, then
    ```c++
    string s, p, o;
    Type::Type_ID objectType;
    string objectSubType;
    TurtleParser tp(in_stream);
    while(tp.parse(s, p, o, objectType, objectSubTyp)){
        /* do something */
    }
    ```
+ Compile settings:
    + Include directory: `/tools/antlr4-cpp-runtime-4/runtime/src`, `tools/boost_1_81_0/include`, `Turtle`
    + Link library: `tools/libantlr4-runtime.a`

## Test
```
    mkdir build; cd build; cmake .. ;  make -j4; ./TurtleParser
    
``` 
## 编写正确的文法
[语法文件](https://github.com/antlr/grammars-v4/blob/master/turtle/TURTLE.g4)g4的获取。这个文件根据[W3C规范](http://www.w3.org/TR/turtle/#sec-grammar-grammar)编写，但有几处不符合规范的错误，需要修改。
+ 产生式首字母大小写有问题，parser rule 产生式头的命名，首字母要小写。Lexer rule则大写。
+ W3C规范指出，"BASE", "PREFIX" are case-insensitive. 这两个关键字大小写不敏感，原来的g4文件默认大写，需要修改。
+ 原来的文件中，对IRIREF的产生式，改为：
  ```
    IRIREF
   : '<' ( ~ ( [\u0000-\u0020] | '<' | '>' | '"' | '{' | '}' | '|' | '^' | '`' | '\\')  | UCHAR )* '>' ; 
  ```
+ 原来文件中**STRING_LITERAL_QUOTE**的产生式体写错了要改，**STRING_LITERAL_SINGLE_QUOTE**、**STRING_LITERAL_LONG_QUOTE**、**STRING_LITERAL_LONG_SINGLE_QUOTE**也要修改。
+ **WS**要修改
+ **PN_CHARS_BASE**有误，漏了`'\u{10000}' .. '\u{EFFFF}' `。