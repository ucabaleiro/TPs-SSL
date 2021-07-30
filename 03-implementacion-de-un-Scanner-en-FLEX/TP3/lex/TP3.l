%option noyywrap
%option yylineno
%option warn

%{

#include <stdio.h>
#include "freqtable.h"
#include "list.h"
#include "queue.h"

%}

alpha                       [:alpha:]
minuscula                   [:lower:]
mayuscula                   [:upper:]
nondigit                    [:alpha:]|_

digit		                [:digit:]
nonzero                     [:digit:]{-}[0]
hexdigit                    [:xdigit:]
octdigit                    [:digit:]{-}[89]

token                       {palabra_reservada}|{identificador}|{constante}|{literal_cadena}|{puntuador}

palabra_reservada           {keyword_type}|{keyword_control}|{keyword_otro}
keyword_otro                sizeof
keyword_control             break|case|continue|default|do|else|for|goto|if|return|switch|while
keyword_type                auto|char|const|double|enum|extern|float|inline|int|long|register|restrict|short|signed|static|struct|typedef|union|unsigned|void|volatile|_Bool|_Complex|_Imaginary

identificador               {identificador_nondigit}({identificador_nondigit}|{digit})*
identificador_nondigit      {nondigit}|{caracter_universal}
caracter_universal          \\[uU]{hex_quad}{1,2}
hex_quad                    {hexdigit}{4}

constante                   {const_entero}|{const_float}|{const}

const_entero                ({entero_dec}|{entero_hex}|{entero_oct}){sufijo_entero}?
entero_dec		            {nonzero}{digit}*
entero_hex                  {prefijo_hex}{hexdigit}+
prefijo_hex                 0[xX]
entero_oct                  0{octdigit}*
sufijo_entero               {sufijo_unsigned}({sufijo_long}|{sufijo_longLong})?|({sufijo_long}|{sufijo_longLong}){sufijo_unsigned}?
sufijo_unsigned             [uU]
sufijo_long                 [lL]
sufijo_longLong             ll|LL

const_float                 {float_dec}|{float_hex}
float_dec                   ({significando_dec}{exponente_dec}?|{digit}+{exponente_dec}){sufijo_float}?
significando_dec            {digit}*"."{digit}+|{digit}+"."
exponente_dec               [eE]{exponente}
float_hex                   {prefijo_hex}({significando_hex}|{hexdigit}+){exponente_hex}{sufijo_float}?
significando_hex            {hexdigit}*"."{hexdigit}+|{hexdigit}+"."
exponente_hex               [pP]{exponente}
exponente                   [\+\-]?{digit}+
sufijo_float                [fFlL]

const_char                  L?[']{c_char}+[']
c_char                      [^\'\\\n]|{escape}

literal_cadena              L?\"{s_char}*\"
s_char                      [^\"\\\n]|{escape}

escape                      {escape_simple}|{escape_oct}|{escape_hex}|{caracter_universal}
escape_simple               \\[abfnrtv\'\"\?\\]
escape_oct                  \\{octdigit}{1,3}
escape_hex                  \\x{hexdigit}+

puntuador                   "["|"]"|"("|")"|"{"|"}"|"."|"->"|"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"|"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="|"=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"|";"|"..."|"="|"*="|"/="|"%="|"+="|"-="|"<<="|">>="|"&="|"^="|"|="|","|"#"|"##"|"<:"|":>"|"<%"|"%>"|"%:"|"%:%:"

comentario_sl               "//".*
comentario_ml               "/*"([^*]|(\*+[^*/]))*"*"+"/"

pre_token                   {header}|{identificador}|{pre_numero}|{const_char}|{literal_cadena}|{puntuador}
header                      \<[^\>\n]+\>|\"[^\"\n]+\"
pre_number                  "."?{digit}("."|{digit}|{identificador_nondigit}|[eEpP][\+\-])*
directiva_prefijo           ^(([:space:]{-}[\n])*"#")

directiva_include           {directiva_prefijo}include([ \t]+{pre_token})+[ \t]*\n
directiva_define            {directiva_prefijo}define[ \t]+{identificador}([ \t]*"("[ \t]*({lista_id}|...|{lista_id}[ \t]*,[ \t]*...)?[ \t]*")")?([ \t]+{pre_token})*[ \t]*\n
lista_id                    {identificador}(,{identificador})*
define                      #define[ \t]+

%%



%%

int main() {
    yylex();
    return 0;
}