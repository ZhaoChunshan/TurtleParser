# TurtleParser
A parser for Turtle, the terse RDF triple language.
## 难点分析
+ Turtle文件默认是UTF-8编码，且会用到转义字符，需要正确处理
+ 怎样边扫描边生成三元组，而不必构造语法分析树（on the fly）
+ 怎样将relative IRI转换为absolute IRI
## 完成过程
### 编写正确的文法
[语法文件](https://github.com/antlr/grammars-v4/blob/master/turtle/TURTLE.g4)g4的获取。这个文件根据[W3C规范](http://www.w3.org/TR/turtle/#sec-grammar-grammar)编写，但有几处不符合规范的错误，需要修改。
+ W3C规范指出，"BASE", "PREFIX" are case-insensitive. 这两个关键字大小写不敏感，原来的g4文件默认大写，需要修改。
+ 原来的文件中，对IRIREF的产生式，改为：
  ```
    IRIREF
   : '<' ( ~ ( [\u0000-\u0020] | '<' | '>' | '"' | '{' | '}' | '|' | '^' | '`' | '\\')  | UCHAR )* '>' ; 
  ```
+ 原来文件中**STRING_LITERAL_QUOTE**的产生式体写错了要改，**STRING_LITERAL_SINGLE_QUOTE**、**STRING_LITERAL_LONG_QUOTE**、**STRING_LITERAL_LONG_SINGLE_QUOTE**也要修改。
+ **WS**要修改
+ **PN_CHARS_BASE**有误，漏了`'\u{10000}' .. '\u{EFFFF}' `。

### TurtleParser类设计
