# TurtleParser
A parser for Turtle, the terse RDF triple language.
## 难点分析
+ Turtle文件默认是UTF-8编码，且会用到转义字符，需要正确处理
+ 怎样边扫描边生成三元组，而不必构造语法分析树（on the fly）
+ 怎样将relative IRI转换为absolute IRI
## 完成过程
语法文件g4的获取：https://github.com/antlr/grammars-v4/blob/master/turtle/TURTLE.g4。这个文件根据[W3C规范](http://www.w3.org/TR/turtle/#sec-grammar-grammar)编写，但有几处不符合规范的错误，需要修改。
+ W3C规范指出，"BASE", "PREFIX" are case-insensitive. 这两个关键字大小写不敏感，原来的g4文件默认大写，需要修改。
+ 