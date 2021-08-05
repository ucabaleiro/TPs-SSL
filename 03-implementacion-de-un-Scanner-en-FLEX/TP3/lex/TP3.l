%option noyywrap
%option yylineno
%option warn

%{

#include <stdio.h>
#include <string.h>
#include "freqtable.h"
#include "lexemelist.h"
#include "writers.h"

t_freqtable*    identificadores     = NULL;
t_lexeme_list*  literales_cadena    = NULL;
t_lexeme_list*  keywords            = NULL;
t_lexeme_list*  constantes_oct      = NULL;
t_lexeme_list*  constantes_hex      = NULL;
t_lexeme_list*  constantes_dec      = NULL;
t_lexeme_list*  constantes_real     = NULL;
t_lexeme_list*  constantes_char     = NULL;
t_freqtable*    puntuadores         = NULL;
t_lexeme_list*  comentarios_sl      = NULL;
t_lexeme_list*  comentarios_ml      = NULL;
t_lexeme_list*  directivas          = NULL;
t_freqtable*    errores             = NULL;

void instanciar_listas() {
    identificadores     = freqtable_create();
    literales_cadena    = lexeme_list_create();
    keywords            = lexeme_list_create();
    constantes_oct      = lexeme_list_create();
    constantes_hex      = lexeme_list_create();
    constantes_dec      = lexeme_list_create();
    constantes_real     = lexeme_list_create();
    constantes_char     = lexeme_list_create();
    puntuadores         = freqtable_create();
    comentarios_sl      = lexeme_list_create();
    comentarios_ml      = lexeme_list_create();
    directivas          = lexeme_list_create();
    errores             = freqtable_create();
}

void mostrar_listas_en(FILE* output) {
    freqtable_write_to(identificadores, output, "Identificadores", as_freqtable_entry);
    lexeme_list_write_to(literales_cadena, output, "Literales Cadena", as_string_literal);
    lexeme_list_write_to(keywords, output, "Palabras Reservadas", as_is);
    lexeme_list_write_to(constantes_oct, output, "Constantes Octales", as_oct_hex);
    lexeme_list_write_to(constantes_hex, output, "Constantes Hexadecimales", as_oct_hex);
    lexeme_list_write_to(constantes_dec, output, "Constantes Decimales", as_is);
    lexeme_list_write_sum(constantes_dec, output);
    lexeme_list_write_to(constantes_real, output, "Constantes Reales", as_real);
    lexeme_list_write_to(constantes_char, output, "Constantes Caracter", as_is);
    freqtable_write_to(puntuadores, output, "Caracteres De Puntuacion / Operadores", as_freqtable_entry);
    lexeme_list_write_to(comentarios_sl, output, "Comentarios De Una Linea", as_is);
    lexeme_list_write_to(comentarios_ml, output, "Comentarios Multilinea", as_is);
    lexeme_list_write_to(directivas, output, "Directivas Define e Include", as_is);
    freqtable_write_to(errores, output, "Cadenas No Reconocidas", as_errortable_entry);
}

void destruir_listas() {
    freqtable_destroy_and_destroy_elements(identificadores);
    lexeme_list_destroy_and_destroy_elements(literales_cadena);
    lexeme_list_destroy_and_destroy_elements(keywords);
    lexeme_list_destroy_and_destroy_elements(constantes_oct);
    lexeme_list_destroy_and_destroy_elements(constantes_hex);
    lexeme_list_destroy_and_destroy_elements(constantes_dec);
    lexeme_list_destroy_and_destroy_elements(constantes_real);
    lexeme_list_destroy_and_destroy_elements(constantes_char);
    freqtable_destroy_and_destroy_elements(puntuadores);
    lexeme_list_destroy_and_destroy_elements(comentarios_sl);
    lexeme_list_destroy_and_destroy_elements(comentarios_ml);
    lexeme_list_destroy_and_destroy_elements(directivas);
    freqtable_destroy_and_destroy_elements(errores);
}

char unrecognized[1024];
int  unrecognized_chars = 0;
void good_match() {
    if(unrecognized_chars) {
        freqtable_add_as_error(errores, unrecognized, yylineno);
        memset(unrecognized, 0, sizeof unrecognized);
        unrecognized_chars = 0;
    }
}

%}

alpha                       [a-zA-Z]
nondigit                    {alpha}|_

digit		                [0-9]
nonzero                     [1-9]
hexdigit                    [0-9a-fA-F]
octdigit                    [0-7]

token                       {palabra_reservada}|{identificador}|{constante}|{literal_cadena}|{puntuador}

palabra_reservada           {keyword_type}|{keyword_control}|{keyword_otro}
keyword_otro                extern|inline|sizeof
keyword_control             break|case|continue|default|do|else|for|goto|if|return|switch|while
keyword_type                auto|char|const|double|enum|float|int|long|register|restrict|short|signed|static|struct|typedef|union|unsigned|void|volatile|_Bool|_Complex|_Imaginary

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

comentario                  {comentario_sl}|{comentario_ml}
comentario_sl               "//".*
comentario_ml               "/*"([^*]|(\*+[^*/]))*"*"+"/"

directiva                   {directiva_define}|{directiva_include}
directiva_include           {directiva_prefijo}include([ \t]+{pre_token})+[ \t]*\n
directiva_define            {directiva_prefijo}define[ \t]+{identificador}([ \t]*"("[ \t]*({lista_id}|...|{lista_id}[ \t]*,[ \t]*...)?[ \t]*")")?([ \t]+{pre_token})*[ \t]*\n
lista_id                    {identificador}(,{identificador})*
pre_token                   {header}|{identificador}|{pre_number}|{const_char}|{literal_cadena}|{puntuador}
header                      \<[^\>\n]+\>|\"[^\"\n]+\"
pre_number                  "."?{digit}("."|{digit}|{identificador_nondigit}|[eEpP][\+\-])*
directiva_prefijo           [ \t]*#

%%

{puntuador}                 { good_match(); freqtable_add(puntuadores, yytext)                ; }
{palabra_reservada}         { good_match(); lexeme_list_add(keywords, yytext)                 ; }
{identificador}             { good_match(); freqtable_add_alpha(identificadores, yytext)      ; }
{literal_cadena}            { good_match(); lexeme_list_add_length(literales_cadena, yytext)  ; }
{entero_oct}                { good_match(); lexeme_list_add(constantes_oct, yytext)           ; }
{entero_hex}                { good_match(); lexeme_list_add(constantes_hex, yytext)           ; }
{entero_dec}                { good_match(); lexeme_list_add(constantes_dec, yytext)           ; }
{const_float}               { good_match(); lexeme_list_add(constantes_real, yytext)          ; }
{const_char}                { good_match(); lexeme_list_add(constantes_char, yytext)          ; }
{comentario_sl}             { good_match(); lexeme_list_add(comentarios_sl, yytext)           ; }
{comentario_ml}             { good_match(); lexeme_list_add(comentarios_ml, yytext)           ; }
^{directiva}                { good_match(); lexeme_list_add(directivas, yytext)               ; }
[ \t\n]                     { good_match();                                                     }
.                           { unrecognized[unrecognized_chars++] = yytext[0]                  ; }

%%

int main(int argc, char **argv) {
    yyin = fopen(argv[1], "r");
    yyout = fopen("yyout.txt", "w");
    FILE* salida = stdout;
    instanciar_listas();
    yylex();
    mostrar_listas_en(salida);
    destruir_listas();

    return 0;
}