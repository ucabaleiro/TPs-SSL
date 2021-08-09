%option noyywrap
%option yylineno
%option warn

%{

#include <stdio.h>
#include <string.h>
#include "lexemelist.h"
#include "writers.h"

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

t_lexeme_list* listas[MAX_TOKENS];

void instanciar_listas() {
    for( t_token i = IDENTIFICADOR; i < MAX_TOKENS; i++){
        listas[i] = lexeme_list_create();
    }
}

void mostrar_listas_en(FILE* output) {
    lexeme_list_write (listas[IDENTIFICADOR] , output, "Identificadores"         , as_frequency_count);
    lexeme_list_write (listas[LITERAL_CADENA], output, "Literales Cadena"        , as_string_literal );
    lexeme_list_write (listas[KEYWORD]       , output, "Palabras Reservadas"     , as_keyword        );
    lexeme_list_write (listas[CTE_OCT]       , output, "Constantes Octales"      , as_oct_hex        );
    lexeme_list_write (listas[CTE_HEX]       , output, "Constantes Hexadecimales", as_is             );
    lexeme_list_write (listas[CTE_DEC]       , output, "Constantes Decimales"    , as_oct_hex        );
    
    lexeme_list_write_sum (listas[CTE_DEC], output);

    lexeme_list_write (listas[CTE_REAL]      , output, "Constantes Reales"                    , as_real           );
    lexeme_list_write (listas[CTE_CHAR]      , output, "Constantes Caracter"                  , as_is             );
    lexeme_list_write (listas[PUNTUADOR]     , output, "Caracteres De Puntuacion / Operadores", as_frequency_count);
    lexeme_list_write (listas[COMENTARIO]    , output, "Comentarios"                          , as_comment        );
    lexeme_list_write (listas[DIRECTIVA]     , output, "Directivas Define e Include"          , as_is             );
    lexeme_list_write (listas[NO_RECONOCIDO] , output, "Cadenas No Reconocidas"               , as_unrecognized   );
}

void destruir_listas() {
    for( t_token i = IDENTIFICADOR; i < MAX_TOKENS; i++){
        lexeme_list_destroy(listas[i]);
    }
}

char unrecognized[1024];
int  unrecognized_chars = 0;

void good_match() {
    if(unrecognized_chars) {
        lexeme_list_add_with_int(listas[NO_RECONOCIDO], unrecognized, yylineno);
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

{puntuador}                 { good_match(); lexeme_list_add_as_frequency_count(listas[PUNTUADOR], yytext);                      }
{keyword_otro}              { good_match(); lexeme_list_add_with_string(listas[KEYWORD], yytext, "Otros");                      }
{keyword_control}           { good_match(); lexeme_list_add_with_string(listas[KEYWORD], yytext, "Estructuras de control");     }
{keyword_type}              { good_match(); lexeme_list_add_with_string(listas[KEYWORD], yytext, "Tipo de dato");               }
{identificador}             { good_match(); lexeme_list_add_as_frequency_count(listas[IDENTIFICADOR], yytext);                  }
{literal_cadena}            { good_match(); lexeme_list_add_simple_length_sorted(listas[LITERAL_CADENA], yytext) ;              }
{entero_oct}                { good_match(); lexeme_list_add_simple(listas[CTE_OCT], yytext);                                    }
{entero_hex}                { good_match(); lexeme_list_add_simple(listas[CTE_HEX], yytext);                                    }
{entero_dec}                { good_match(); lexeme_list_add_simple(listas[CTE_DEC], yytext);                                    }
{const_float}               { good_match(); lexeme_list_add_simple(listas[CTE_REAL], yytext);                                   }
{const_char}                { good_match(); lexeme_list_add_simple(listas[CTE_CHAR], yytext);                                   }
{comentario_sl}             { good_match(); lexeme_list_add_with_string(listas[COMENTARIO], yytext, "Comentario de una linea"); }
{comentario_ml}             { good_match(); lexeme_list_add_with_string(listas[COMENTARIO], yytext, "Comentario multilinea");   }
^{directiva}                { good_match(); lexeme_list_add_simple(listas[DIRECTIVA], yytext);                                         }
[ \t\n]                     { good_match();                                                                                     }
.                           { unrecognized[unrecognized_chars++] = yytext[0];                                                   }

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