%option yylineno
%option warn

%{
#include "parser.h"

extern FILE* yyin;

typedef enum token {
    IDENTIFICADOR, 
    LITERAL_CADENA, 
    KEYWORD, 
    CTE_OCT, 
    CTE_HEX, 
    CTE_DEC,
    CTE_REAL, 
    CTE_CHAR, 
    PUNTUADOR, 
    COMENTARIO, 
    DIRECTIVA, 
    NO_RECONOCIDO, 
    MAX_TOKENS
} t_token; 

%}

alpha                       [a-zA-Z]
nondigit                    {alpha}|_

digit		                [0-9]
nonzero                     [1-9]
hexdigit                    [0-9a-fA-F]
prefijo_hex                 0[xX]
octdigit                    [0-7]

keyword_otro                extern|inline|sizeof
keyword_control             break|case|continue|default|do|else|for|goto|if|return|switch|while
keyword_type                auto|char|const|double|enum|float|int|long|register|restrict|short|signed|static|struct|typedef|union|unsigned|void|volatile|_Bool|_Complex|_Imaginary

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

const_char                  L?[']{c_char}+[']
c_char                      [^\'\\\n]|{escape}

literal_cadena              L?\"{s_char}*\"
s_char                      [^\"\\\n]|{escape}

escape                      {escape_simple}|{escape_oct}|{escape_hex}|{caracter_universal}
escape_simple               \\[abfnrtv\'\"\?\\]
escape_oct                  \\{octdigit}{1,3}
escape_hex                  \\x{hexdigit}+

puntuador                   {unary_operator}|"["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"|"##"|"<:"|":>"|"<%"|"%>"|"%:"|"%:%:"
unary_operator              "&"|"*"|"+"|"-"|"~"|"!"

comentario_sl               "//".*
comentario_ml               "/*"([^*]|(\*+[^*/]))*"*"+"/"

directiva                   {directiva_include}|{directiva_define}
directiva_include           [ \t]*#include([ \t]+{pre_token})+[ \t]*\n
directiva_define            [ \t]*#define[ \t]+{identificador}([ \t]*"("[ \t]*({lista_id}|...|{lista_id}[ \t]*,[ \t]*...)?[ \t]*")")?([ \t]+{pre_token})*[ \t]*\n
lista_id                    {identificador}(,{identificador})*
pre_token                   {header}|{identificador}|{pre_number}|{const_char}|{literal_cadena}|{puntuador}
header                      \<[^\>\n]+\>|\"[^\"\n]+\"
pre_number                  "."?{digit}("."|{digit}|{identificador_nondigit}|[eEpP][\+\-])*

%%



%%
