%{

/* Typedefs simplificados para evitar hacer un lexer hack, usa letra 't' */

#include <stdio.h>
#include <stringso.h>
#include <list.h>
int yylex(void);
int yyerror(const char *s);
extern FILE* yyin;
extern int yylineno;
int analisisCorrecto = 1;

%}

%debug
%error-verbose

%code requires
{
    #include <list.h>
    typedef enum types { t_char, t_uchar, t_sint, t_usint, t_int, t_uint, t_long, t_ulong, t_llong, t_ullong, t_float, t_double, t_ldouble, t_ptr } types;
}

%union
{
    char* strval;
    types tval;
    int intval;
    t_list* list;
}

%token AUTO
%token BREAK
%token CASE
%token CHAR
%token CONST
%token CONTINUE
%token DEFAULT
%token DO
%token DOUBLE
%token ELSE
%token ENUM
%token EXTERN
%token FLOAT
%token FOR
%token GOTO
%token IF
%token INLINE
%token INT
%token LONG
%token REGISTER
%token RESTRICT
%token RETURN
%token SHORT
%token SIGNED
%token SIZEOF
%token STATIC
%token STRUCT
%token SWITCH
%token TYPEDEF
%token UNION
%token UNSIGNED
%token VOID
%token VOLATILE
%token WHILE
%token BOOL
%token COMPLEX
%token FLECHA "->"
%token MASMAS "++"
%token MENOSMENOS "--"
%token SHIFT_LEFT "<<"
%token SHIFT_RIGHT ">>"
%token MENOR_IGUAL "<="
%token MAYOR_IGUAL ">="
%token IGUALIGUAL "=="
%token DIFERENTE "!="
%token AND "&&"
%token OR "||"
%token VARIARG "..."
%token ASIGN_MULT "*="
%token ASIGN_DIV "/="
%token ASIGN_MOD "%="
%token ASIGN_SUM "+="
%token ASIGN_RESTA "-="
%token ASIGN_SHIFT_LEFT "<<="
%token ASIGN_SHIFT_RIGHT ">>="
%token ASIGN_BITWISE_AND "&="
%token ASIGN_BITWISE_XOR "^="
%token ASIGN_BITWISE_OR "|="

%token <strval> IDENTIFIER
%token <tval> CHAR_CONST
%token <tval> INT_CONST
%token <tval> REAL_CONST
%token <tval> STRING_LITERAL

%nterm <strval> identifier
%nterm <tval> constant
%nterm <tval> string_literal

%nonassoc IFX
%nonassoc ELSE

%start translation_unit

%%

identifier: IDENTIFIER {$$ = $1;} ;

constant:     CHAR_CONST
            | INT_CONST
            | REAL_CONST
            ;

string_literal: STRING_LITERAL ;

enumeration_constant: identifier ;

primary_expression:   identifier
                    | constant
                    | string_literal
                    | '(' expression ')'
                    ;

postfix_expression:   primary_expression
                    | postfix_expression '[' expression ']'
                    | postfix_expression '(' argument_expression_list ')'
                    | postfix_expression '.' identifier
                    | postfix_expression "->" identifier
                    | postfix_expression "++"
                    | postfix_expression "--"
                    | '(' type_name ')' '{' initializer_list '}'
                    | '(' type_name ')' '{' initializer_list',' '}'
                    ;

argument_expression_list:     assignment_expression
                            | argument_expression_list',' assignment_expression
                            ;

unary_expression:     postfix_expression
                    | "++" unary_expression
                    | "--" unary_expression
                    | unary_operator cast_expression
                    | SIZEOF unary_expression
                    | SIZEOF '('  type_name ')'
                    ;

unary_operator: '&' | '*' | '+' | '-' | '~' | '!' ;

cast_expression:      unary_expression
                    | '(' type_name ')' cast_expression
                    ;

multiplicative_expression:    cast_expression
                            | multiplicative_expression '*' cast_expression
                            | multiplicative_expression '/' cast_expression
                            | multiplicative_expression '%' cast_expression
                            ;

additive_expression:      multiplicative_expression
                        | additive_expression '+' multiplicative_expression
                        | additive_expression '-' multiplicative_expression
                        ;

shift_expression:     additive_expression
                    | shift_expression "<<" additive_expression
                    | shift_expression ">>" additive_expression
                    ;

relational_expression:    shift_expression
                        | relational_expression '<' shift_expression
                        | relational_expression '>' shift_expression
                        | relational_expression "<=" shift_expression
                        | relational_expression ">=" shift_expression
                        ;
                        

equality_expression:      relational_expression
                        | equality_expression "==" relational_expression
                        | equality_expression "!=" relational_expression
                        ;

AND_expression:   equality_expression
                | AND_expression '&' equality_expression
                ;

exclusive_OR_expression:      AND_expression
                            | exclusive_OR_expression '^' AND_expression
                            ;

inclusive_OR_expression:      exclusive_OR_expression
                            | inclusive_OR_expression '|' exclusive_OR_expression
                            ;

logical_AND_expression:   inclusive_OR_expression
                        | logical_AND_expression "&&" inclusive_OR_expression
                        ;

logical_OR_expression:    logical_AND_expression
                        | logical_OR_expression "||" logical_AND_expression
                        ;

conditional_expression:   logical_OR_expression
                        | logical_OR_expression '?' expression ':' conditional_expression
                        ;

assignment_expression:    conditional_expression
                        | unary_expression assignment_operator assignment_expression
                        ;

assignment_operator:      '=' | "*=" | "/=" | "%=" | "+="| "-=" 
                        | "<<=" | ">>=" | "&=" | "^=" | "|="
                        ;

expression:   assignment_expression
            | expression',' assignment_expression
            ;

constant_expression: conditional_expression ;

declaration:      declaration_specifiers init_declarator_list.opt ';' 
                {
                    void printearDeclaracion(void* elem){
                        printf("Linea %i: Declaracion - %s%s\n", yylineno, $<strval>1, (char*)elem);
                    }
                    list_iterate($<list>2, printearDeclaracion);
                    list_destroy_and_destroy_elements($<list>2, free);
                    free($<strval>1);
                }
                | error ';'             { yyerrok; }
                ;

declaration_specifiers:   storage_class_specifier declaration_specifiers.opt {$<strval>$ = string_from_format("%s%s", $<strval>1, $<strval>2);}
                        | type_specifier declaration_specifiers.opt {$<strval>$ = string_from_format("%s%s", $<strval>1, $<strval>2);}
                        | type_qualifier declaration_specifiers.opt {$<strval>$ = string_from_format("%s%s", $<strval>1, $<strval>2);}
                        | function_specifier declaration_specifiers.opt {$<strval>$ = string_from_format("%s%s", $<strval>1, $<strval>2);}
                        ;

declaration_specifiers.opt:   /* empty */ {$<strval>$ = "";}
                            | declaration_specifiers {$<strval>$ = $<strval>1;}
                            ;

init_declarator_list.opt:     /* empty */ {$<list>$ = list_create();}
                            | init_declarator_list {$<list>$ = $<list>1;}
                            ; 

init_declarator_list:     init_declarator {$<list>$ = list_create(); list_add($<list>$, $<strval>1);}
                        | init_declarator_list',' init_declarator {$<list>$ = $<list>1; list_add($<list>$, $<strval>3);}
                        ;

init_declarator:      declarator {$<strval>$ = $<strval>1;}
                    | declarator '=' initializer {$<strval>$ = $<strval>1;}
                    ;

storage_class_specifier:      TYPEDEF  {$<strval>$ = "typedef ";}
                            | EXTERN   {$<strval>$ = "extern ";}
                            | STATIC   {$<strval>$ = "static ";}
                            | AUTO     {$<strval>$ = "auto ";}
                            | REGISTER {$<strval>$ = "register ";}
                            ;

type_specifier:   VOID {$<strval>$ = "void ";} 
                | CHAR {$<strval>$ = "char ";}
                | SHORT {$<strval>$ = "short ";} 
                | INT {$<strval>$ = "int ";}
                | LONG {$<strval>$ = "long ";}
                | FLOAT {$<strval>$ = "float ";}
                | DOUBLE {$<strval>$ = "double ";}
                | SIGNED {$<strval>$ = "signed ";}
                | UNSIGNED {$<strval>$ = "unsigned ";}
                | BOOL {$<strval>$ = "bool ";}
                | COMPLEX {$<strval>$ = "complex ";}
                | struct_or_union_specifier {$<strval>$ = $<strval>1;}
                | enum_specifier {$<strval>$ = $<strval>1;}
                | typedef_name {$<strval>$ = "t ";}
                ;

struct_or_union_specifier:    struct_or_union identifier '{' struct_declaration_list '}' { $<strval>$ = string_from_format("%s%s ", $<strval>1, $2);}
                            | struct_or_union '{' struct_declaration_list '}' { $<strval>$ = string_from_format("%s anonimo ", $<strval>1);}
                            | struct_or_union identifier { $<strval>$ = string_from_format("%s%s ", $<strval>1, $2);}
                            ;

struct_or_union: STRUCT {$<strval>$ = "struct ";} | UNION {$<strval>$ = "union ";} ;

struct_declaration_list:      struct_declaration
                            | struct_declaration_list struct_declaration
                            ;

struct_declaration:   specifier_qualifier_list struct_declarator_list ';' ;

specifier_qualifier_list:     type_specifier specifier_qualifier_list.opt
                            | type_qualifier specifier_qualifier_list.opt
                            ;

specifier_qualifier_list.opt:     /* empty */
                                | specifier_qualifier_list
                                ;

struct_declarator_list:   struct_declarator
                        | struct_declarator_list',' struct_declarator
                        ;

struct_declarator:    declarator
                    | declarator.opt ':' constant_expression
                    ;

declarator.opt:   /* empty */
                | declarator
                ;

enum_specifier:   ENUM identifier.opt '{' enumerator_list '}' { $<strval>$ = string_from_format("enum %s ", $<strval>2);}
                | ENUM identifier.opt '{' enumerator_list',' '}' { $<strval>$ = string_from_format("enum %s ", $<strval>2);}
                | ENUM identifier { $<strval>$ = string_from_format("enum %s ", $2);}
                ;

identifier.opt:   /* empty */ {$<strval>$ = "anonimo";}
                | identifier  {$<strval>$ = $1;}
                ;

enumerator_list:      enumerator
                    | enumerator_list',' enumerator
                    ;

enumerator:   enumeration_constant
            | enumerator '=' constant_expression
            ;

type_qualifier:   CONST {$<strval>$ = "const ";}
                | RESTRICT {$<strval>$ = "restrict ";}
                | VOLATILE {$<strval>$ = "volatile ";}
                ;

function_specifier: INLINE {$<strval>$ = "inline ";} ;

declarator:   pointer direct_declarator {string_append(&$<strval>1, $<strval>2); $<strval>$ = $<strval>1;}
            | direct_declarator {$<strval>$ = string_duplicate($<strval>1);}
            ;

direct_declarator:    identifier {$<strval>$ = string_duplicate($1);}
                    | '(' declarator ')' {$<strval>$ = string_from_format("(%s)", $<strval>2);}
                    | direct_declarator '[' type_qualifier_list.opt assignment_expression.opt ']' {string_append(&$<strval>1, "[]"); $<strval>$ = $<strval>1;}
                    | direct_declarator '[' STATIC type_qualifier_list.opt assignment_expression ']' {string_append(&$<strval>1, "[]"); $<strval>$ = $<strval>1;}
                    | direct_declarator '[' type_qualifier_list STATIC assignment_expression ']' {string_append(&$<strval>1, "[]"); $<strval>$ = $<strval>1;}
                    | direct_declarator '[' type_qualifier_list.opt '*' ']' {string_append(&$<strval>1, "[]"); $<strval>$ = $<strval>1;}
                    | direct_declarator '(' parameter_type_list ')' {string_append(&$<strval>1, "()"); $<strval>$ = $<strval>1;}
                    | direct_declarator '(' identifier_list.opt ')' {string_append(&$<strval>1, "()"); $<strval>$ = $<strval>1;}
                    ;
                        
assignment_expression.opt:    /* empty */
                            | assignment_expression
                            ;

type_qualifier_list.opt:      /* empty */
                            | type_qualifier_list
                            ;

identifier_list.opt:      /* empty */
                        | identifier_list
                        ;

pointer:      '*' type_qualifier_list.opt {$<strval>$ = string_duplicate("*");}
            | '*' type_qualifier_list.opt pointer {$<strval>$ = string_from_format("*%s", $<strval>2);}
            ;

type_qualifier_list:      type_qualifier
                        | type_qualifier_list type_qualifier
                        ;

parameter_type_list:      parameter_list
                        | parameter_list ',' "..."
                        ;

parameter_list:   parameter_declaration
                | parameter_list ',' parameter_declaration
                ;

parameter_declaration:    declaration_specifiers declarator
                        | declaration_specifiers abstract_declarator.opt
                        ;

abstract_declarator.opt:      /* empty */
                            | abstract_declarator
                            ;

identifier_list:      identifier
                    | identifier_list ',' identifier
                    ;

type_name:    specifier_qualifier_list
            | specifier_qualifier_list abstract_declarator
            ;

abstract_declarator:      pointer
                        | pointer direct_abstract_declarator
                        | direct_abstract_declarator
                        ;

direct_abstract_declarator:   '(' abstract_declarator ')'
                            | '['  assignment_expression.opt ']'
                            | '[' '*' ']'
                            | '(' parameter_type_list ')'
                            | '(' ')'
                            | direct_abstract_declarator '['  assignment_expression.opt ']'
                            | direct_abstract_declarator '[' '*' ']'
                            | direct_abstract_declarator '(' parameter_type_list ')'
                            | direct_abstract_declarator '(' ')'
                            ;

typedef_name: 't' /* Typedefs simplificados para evitar hacer un lexer hack */ ;

initializer:      assignment_expression
                | '{' initializer_list '}'
                | '{' initializer_list ',' '}'
                ;
                
initializer_list:     designation.opt initializer
                    | initializer_list ',' designation.opt initializer
                    ;

designation.opt:      /* empty */
                    | designation
                    ;

designation:    designator_list '=';

designator_list:      designator
                    | designator_list designator
                    ;

designator:   '[' constant_expression ']'
            | '.' identifier


statement:    labeled_statement     
            | compound_statement    
            | expression_statement  { printf("Linea %i: Sentencia de expresion\n", yylineno); }
            | selection_statement   
            | iteration_statement   
            | jump_statement        { printf("Linea %i: Sentencia de salto\n", yylineno); }
            | error ';'             { yyerrok; }
            ;

labeled_statement:    identifier ':' { printf("Linea %i: Sentencia etiquetada\n", yylineno); } statement
                    | CASE { printf("Linea %i: Sentencia etiquetada\n", yylineno); } constant_expression ':' statement
                    | DEFAULT { printf("Linea %i: Sentencia etiquetada\n", yylineno); } ':' statement
                    ;

compound_statement: '{' { printf("Linea %i: Sentencia Compuesta\n", yylineno); } block_item_list.opt '}' ;

block_item_list.opt:      /* empty */
                        | block_item_list
                        ;

block_item_list:      block_item
                    | block_item_list block_item
                    ;

block_item:   declaration
            | statement
            ;

expression_statement: expression.opt ';' ;

expression.opt:   /* empty */
                | expression
                ;

selection_statement:      IF { printf("Linea %i: Sentencia de seleccion\n", yylineno); } if_body
                        | SWITCH { printf("Linea %i: Sentencia de seleccion\n", yylineno); } '(' expression ')' statement
                        ;

if_body:      '(' expression ')' statement %prec IFX
            | '(' expression ')' statement ELSE statement
            ;

iteration_statement:      WHILE { printf("Linea %i: Sentencia de iteracion\n", yylineno); } '(' expression ')' statement
                        | DO { printf("Linea %i: Sentencia de iteracion\n", yylineno); } statement WHILE '(' expression ')' ';'
                        | FOR { printf("Linea %i: Sentencia de iteracion\n", yylineno); } for_body
                        ;

for_body:     '(' expression.opt ';' expression.opt ';' expression.opt ')' statement
            | '(' declaration expression.opt ';' expression.opt ')' statement
            ;

jump_statement:   GOTO identifier ';'
                | CONTINUE ';'
                | BREAK ';'
                | RETURN expression ';'
                ;

translation_unit:     external_declaration
                    | translation_unit external_declaration
                    ;

external_declaration:     function_definition
                        | declaration
                        ;

function_definition:      declaration_specifiers declarator declaration_list.opt compound_statement
                        | error '}'             { yyerrok; }
                        ;

declaration_list.opt:     /* empty */
                        | declaration_list
                        ;

declaration_list:     declaration
                    | declaration_list declaration
                    ;

%%

int main(int argc, char *argv[]) {
    yydebug = 0;
	yyin=fopen(argv[1],"r");

    printf("Reporte sintactico:\n");

   	yyparse();
	fclose(yyin);

	if(analisisCorrecto)
        printf("\nAnalisis finalizado correctamente\n\n\n");


    return 0; 
}

int yyerror(const char *msg) {
	printf("Linea %d: %s\n",yylineno,msg);
	analisisCorrecto = 0;
	return 0; 
}