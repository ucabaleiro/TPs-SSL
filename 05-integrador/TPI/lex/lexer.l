%option yylineno
%option warn

%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtable.h"
#include "parser.h"

extern FILE* yyin;

%}

alpha                       [a-zA-Z]
nondigit                    {alpha}|_

digit		                [0-9]
nonzero                     [1-9]
hexdigit                    [0-9a-fA-F]
prefijo_hex                 0[xX]
octdigit                    [0-7]

identificador               {identificador_nondigit}({identificador_nondigit}|{digit})*
identificador_nondigit      {nondigit}|{caracter_universal}
caracter_universal          \\[uU]{hex_quad}{1,2}
hex_quad                    {hexdigit}{4}

const_entero                ({entero_dec}|{entero_hex}|{entero_oct}){sufijo_entero}?
entero_dec		            {nonzero}{digit}*{sufijo_entero}?
entero_hex                  {prefijo_hex}{hexdigit}+{sufijo_entero}?
entero_oct                  0{octdigit}*{sufijo_entero}?
sufijo_entero               [uU]([lL]|ll|LL)?|([lL]|ll|LL)[uU]?

const_float                 {float_dec}|{float_hex}
float_dec                   ({significando_dec}{exponente_dec}?|{digit}+{exponente_dec})[fFlL]?
float_hex                   {prefijo_hex}({significando_hex}|{hexdigit}+){exponente_hex}[fFlL]?
significando_dec            {digit}*"."{digit}+|{digit}+"."
significando_hex            {hexdigit}*"."{hexdigit}+|{hexdigit}+"."
exponente_dec               [eE]{exponente}
exponente_hex               [pP]{exponente}
exponente                   [\+\-]?{digit}+

const_char                  L?[']{c_char}[']
c_char                      [^\'\\\n]|{escape}

literal_cadena              L?\"{s_char}*\"
s_char                      [^\"\\\n]|{escape}

escape                      {escape_simple}|{escape_oct}|{escape_hex}|{caracter_universal}
escape_simple               \\[abfnrtv\'\"\?\\]
escape_oct                  \\{octdigit}{1,3}
escape_hex                  \\x{hexdigit}+

comentario_sl               "//".*
comentario_ml               "/*"([^*]|(\*+[^*/]))*"*"+"/"

%%

"auto"                      {return AUTO;}
"break"                     {return BREAK;}
"case"                      {return CASE;}
"char"                      {return CHAR;}
"const"                     {return CONST;}
"continue"                  {return CONTINUE;}
"default"                   {return DEFAULT;}
"do"                        {return DO;}
"double"                    {return DOUBLE;}
"else"                      {return ELSE;}
"enum"                      {return ENUM;}
"extern"                    {return EXTERN;}
"float"                     {return FLOAT;}
"for"                       {return FOR;}
"goto"                      {return GOTO;}
"if"                        {return IF;}
"inline"                    {return INLINE;}
"int"                       {return INT;}
"long"                      {return LONG;}
"register"                  {return REGISTER;}
"restrict"                  {return RESTRICT;}
"return"                    {return RETURN;}
"short"                     {return SHORT;}
"signed"                    {return SIGNED;}
"sizeof"                    {return SIZEOF;}
"static"                    {return STATIC;}
"struct"                    {return STRUCT;}
"switch"                    {return SWITCH;}
"typedef"                   {return TYPEDEF;}
"union"                     {return UNION;}
"unsigned"                  {return UNSIGNED;}
"void"                      {return VOID;}
"volatile"                  {return VOLATILE;}
"while"                     {return WHILE;}
"_Bool"                     {return BOOL;}
"_Complex"                  {return COMPLEX;}

"["                         {return '[';}
"]"                         {return ']';}
"("                         {return '(';}
")"                         {return ')';}
"{"                         {return '{';}
"}"                         {return '}';}
"."                         {return '.';}
"->"                        {return FLECHA;}
"++"                        {return MASMAS;}
"--"                        {return MENOSMENOS;}
"&"                         {return '&';}
"*"                         {return '*';}
"+"                         {return '+';}
"-"                         {return '-';}
"~"                         {return '~';}
"!"                         {return '!';}
"/"                         {return '/';}
"%"                         {return '%';}
"<<"                        {return SHIFT_LEFT;}
">>"                        {return SHIFT_RIGHT;}
"<"                         {return '<';}
">"                         {return '>';}
"<="                        {return MENOR_IGUAL;}
">="                        {return MAYOR_IGUAL;}
"=="                        {return IGUALIGUAL;}
"!="                        {return DIFERENTE;}
"^"                         {return '^';}
"|"                         {return '|';}
"&&"                        {return AND;}
"||"                        {return OR;}
"?"                         {return '?';}
":"                         {return ':';}
";"                         {return ';';}
"..."                       {return VARIARG;}
"="                         {return '=';}
"*="                        {return ASIGN_MULT;}
"/="                        {return ASIGN_DIV;}
"%="                        {return ASIGN_MOD;}
"+="                        {return ASIGN_SUM;}
"-="                        {return ASIGN_RESTA;}
"<<="                       {return ASIGN_SHIFT_LEFT;}
">>="                       {return ASIGN_SHIFT_RIGHT;}
"&="                        {return ASIGN_BITWISE_AND;}
"^="                        {return ASIGN_BITWISE_XOR;}
"|="                        {return ASIGN_BITWISE_OR;}
","                         {return ',';}
"#"                         {return '#';}

"t"                         {return 't';}

{identificador}             {yylval.strval = strdup(yytext); return IDENTIFIER;}
{const_char}                {yylval.tval = t_char; return CHAR_CONST;}
{const_entero}              {yylval.tval = t_llong; return INT_CONST;}
{const_float}               {yylval.tval = t_ldouble; return REAL_CONST;}
{literal_cadena}            {yylval.tval = t_ptr; return STRING_LITERAL;}
[\t \n]                     {}
{comentario_sl}             {}
{comentario_ml}             {}

.                           {printf("Linea %i: Error Lexico \"%s\"\n", yylineno, yytext);}

%%

int yywrap(void)
{
    return 1;
}