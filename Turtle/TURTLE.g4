// From: https://github.com/antlr/grammars-v4/blob/master/turtle/TURTLE.g4
// Modify it according to W3C specification

/*
 [The "BSD licence"]
 Copyright (c) 2014, Alejandro Medrano (@ Universidad Politecnica de Madrid, http://www.upm.es/)
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:
 1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
 3. The name of the author may not be used to endorse or promote products
    derived from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
*/
/* Derived from http://www.w3.org/TR/turtle/#sec-grammar-grammar */

grammar TURTLE;

turtleDoc
   : statement* EOF
   ;

statement
   : directive
   | triples '.'
   ;

directive
   : prefixID
   | base
   | sparqlPrefix
   | sparqlBase
   ;

prefixID
   : '@prefix' PNAME_NS IRIREF '.'
   ;

base
   : '@base' IRIREF '.'
   ;

sparqlBase
   : BASE IRIREF
   ;

sparqlPrefix
   : PREFIX PNAME_NS IRIREF
   ;

triples
   : subject predicateObjectList
   | blankNodePropertyList predicateObjectList?
   ;

predicateObjectList
   : verb objectList (';' (verb objectList)?)*
   ;

objectList
   : object_ (',' object_)*
   ;

verb
   : predicate
   | 'a'
   ;

subject
   : iri
   | blankNode
   | collection
   ;

predicate
   : iri
   ;

object_
   : iri
   | blankNode
   | collection
   | blankNodePropertyList
   | literal
   ;

literal
   : rdfLiteral
   | numericLiteral
   | booleanLiteral
   ;

blankNodePropertyList
   : '[' predicateObjectList ']'
   ;

collection
   : '(' object_* ')'
   ;


numericLiteral
   : INTEGER | DECIMAL | DOUBLE
   ;

rdfLiteral
   : string_ (LANGTAG | '^^' iri)?
   ;


booleanLiteral
   : 'true' | 'false'
   ;


string_
   : STRING_LITERAL_QUOTE | STRING_LITERAL_SINGLE_QUOTE | STRING_LITERAL_LONG_SINGLE_QUOTE | STRING_LITERAL_LONG_QUOTE
   ;

iri
   : IRIREF
   | prefixedName
   ;


prefixedName
   : PNAME_LN | PNAME_NS
   ;


blankNode
   : BLANK_NODE_LABEL | ANON
   ;


// LEXER

WS
   : ( ' ' | '\t' | '\r' | '\n' ) + -> skip
   ;

BASE
   : ( 'B' | 'b' ) ( 'A' | 'a' ) ( 'S' | 's' ) ( 'E' | 'e' )
   ;

PREFIX
   : ( 'P' | 'p' ) ( 'R' | 'r' ) ( 'F' | 'f' ) ( 'I' | 'i' ) ( 'X' | 'x' )
   ;

IRIREF
   : '<' ( ~ ( [\u0000-\u0020] | '<' | '>' | '"' | '{' | '}' | '|' | '^' | '`' | '\\')  | UCHAR )* '>' ; 


PNAME_NS
   : PN_PREFIX? ':'
   ;

PNAME_LN
   : PNAME_NS PN_LOCAL
   ;

BLANK_NODE_LABEL
   : '_:' (PN_CHARS_U | [0-9]) ((PN_CHARS | '.')* PN_CHARS)?
   ;


LANGTAG
   : '@' [a-zA-Z] + ('-' [a-zA-Z0-9] +)*
   ;


INTEGER
   : [+-]? [0-9] +
   ;


DECIMAL
   : [+-]? [0-9]* '.' [0-9] +
   ;


DOUBLE
   : [+-]? ([0-9] + '.' [0-9]* EXPONENT | '.' [0-9] + EXPONENT | [0-9] + EXPONENT)
   ;


EXPONENT
   : [eE] [+-]? [0-9] +
   ;

STRING_LITERAL_QUOTE
   : '"' (~ ["\\\r\n] | ECHAR | UCHAR )* '"'
   ;


STRING_LITERAL_SINGLE_QUOTE
   : '\'' (~ [\u0027\u005C\u000A\u000D] | ECHAR | UCHAR )* '\''
   ;

STRING_LITERAL_LONG_SINGLE_QUOTE
   : '\'\'\'' (('\'' | '\'\'')? ( ~ ['\\] | ECHAR | UCHAR ))* '\'\'\''
   ;


STRING_LITERAL_LONG_QUOTE
   : '"""' (('"' | '""')? (~ ["\\] | ECHAR | UCHAR ))* '"""'
   ;


UCHAR
   : '\\u' HEX HEX HEX HEX | '\\U' HEX HEX HEX HEX HEX HEX HEX HEX
   ;


ECHAR
   : '\\' [tbnrf"'\\]
   ;


ANON_WS
   : ' ' | '\t' | '\r' | '\n'
   ;


ANON
   : '[' ANON_WS* ']'
   ;


PN_CHARS_BASE
   : 'A' .. 'Z' | 'a' .. 'z' | '\u00C0' .. '\u00D6' | '\u00D8' .. '\u00F6' | '\u00F8' .. '\u02FF' | '\u0370' .. '\u037D' | '\u037F' .. '\u1FFF' | '\u200C' .. '\u200D' | '\u2070' .. '\u218F' | '\u2C00' .. '\u2FEF' | '\u3001' .. '\uD7FF' | '\uF900' .. '\uFDCF' | '\uFDF0' .. '\uFFFD' | '\u{10000}' .. '\u{EFFFF}' 
   ;


PN_CHARS_U
   : PN_CHARS_BASE | '_'
   ;


PN_CHARS
   : PN_CHARS_U | '-' | [0-9] | '\u00B7' | [\u0300-\u036F] | [\u203F-\u2040]
   ;


PN_PREFIX
   : PN_CHARS_BASE ((PN_CHARS | '.')* PN_CHARS)?
   ;


PN_LOCAL
   : (PN_CHARS_U | ':' | [0-9] | PLX) ((PN_CHARS | '.' | ':' | PLX)* (PN_CHARS | ':' | PLX))?
   ;


PLX
   : PERCENT | PN_LOCAL_ESC
   ;


PERCENT
   : '%' HEX HEX
   ;


HEX
   : [0-9] | [A-F] | [a-f]
   ;


PN_LOCAL_ESC
   : '\\' ('_' | '~' | '.' | '-' | '!' | '$' | '&' | '\'' | '(' | ')' | '*' | '+' | ',' | ';' | '=' | '/' | '?' | '#' | '@' | '%')
   ;


LC
   : '#' ~[\r\n]+  -> channel(HIDDEN)
   ;