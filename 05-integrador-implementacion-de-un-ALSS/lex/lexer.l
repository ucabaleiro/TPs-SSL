%option yylineno
%option warn

%{
#include "parser.h"
#include <string.h>
#include <stdlib.h>

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

const_entero                {entero_dec}|{entero_hex}|{entero_oct}
entero_dec		            {nonzero}{digit}*
entero_hex                  {prefijo_hex}{hexdigit}+
entero_oct                  0{octdigit}*

const_float                 {float_dec}|{float_hex}
float_dec                   ({significando_dec}{exponente_dec}?|{digit}+{exponente_dec})[fFlL]?
float_hex                   {prefijo_hex}({significando_hex}|{hexdigit}+){exponente_hex}[fFlL]?
significando_dec            {digit}*"."{digit}+|{digit}+"."
significando_hex            {hexdigit}*"."{hexdigit}+|{hexdigit}+"."
exponente_dec               [eE]{exponente}
exponente_hex               [pP]{exponente}
exponente                   [\+\-]?{digit}+

%%

"char"                      {return CHAR;}
"do"                        {return DO;}
"double"                    {return DOUBLE;}
"else"                      {return ELSE;}
"float"                     {return FLOAT;}
"for"                       {return FOR;}
"if"                        {return IF;}
"int"                       {return INT;}
"long"                      {return LONG;}
"return"                    {return RETURN;}
"sizeof"                    {return SIZOF;}
"struct"                    {return STRUCT;}
"typedef"                   {return TYPEDEF;}
"while"                     {return WHILE;}

"["                         {return '[';}
"]"                         {return ']';}

"("                         {return '(';}
")"                         {return ')';}
"{"                         {return '{';}
"}"                         {return '}';}
","                         {return ',';}
";"                         {return ';';}

"++"                        {return MASMAS;}
"*"                         {return '*';}
"+"                         {return '+';}
"&"                         {return '&';}
"!"                         {return '!';}
"/"                         {return '/';}
"%"                         {return '%';}
"<"                         {return '<';}
"<="                        {return MENOR_IGUAL;}
"=="                        {return IGUALIGUAL;}
"!="                        {return DIFERENTE;}
"&&"                        {return AND;}
"||"                        {return OR;}
"?"                         {return '?';}
":"                         {return ':';}
"="                         {return '=';}
"+="                        {return ASIGN_SUM;}

{identificador}             {yylval.strval = strdup(yytext); return IDENTIFIER;}
{const_entero}              {yylval.numval.type = t_int; yylval.numval.value = strtol(yytext, NULL, 0); return INT_CONST; }
{const_float}               {yylval.numval.type = t_double; yylval.numval.value = atof(yytext); return REAL_CONST; }


%%
