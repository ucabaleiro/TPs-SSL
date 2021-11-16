%{

/* Typedefs simplificados para evitar hacer un lexer hack, usa letra 't' */

#include <stdio.h>
#include <stringso.h>
#include <list.h>
#include "symtable.h"
#include "operationCheck.h"

int yylex(void);
int yyerror(const char *s);
extern FILE* yyin;
extern int yylineno;
symtable* st;

%}

%debug
%error-verbose

%union
{
    char* strval;
    typeInfo* type;
    typeName typeName;
    symbol* sym;
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

%token INT_CONST
%token CHAR_CONST
%token REAL_CONST
%token STRING_LITERAL

%token <strval> IDENTIFIER
%nterm <strval> identifier

%nonassoc IFX
%nonassoc ELSE

%start translation_unit

%%

identifier: IDENTIFIER { $$ = $1; } ;

constant:     CHAR_CONST { $<type>$ = typeChar;}
            | INT_CONST { $<type>$ = typeInt; }
            | REAL_CONST { $<type>$ = typeDouble; }
            ;

string_literal: STRING_LITERAL {$<type>$ = typeString};

enumeration_constant: identifier ;

primary_expression:   identifier
                    {   
                        if(symtable_isPresent(st, $<strval>1)){
                            $<type>$ = symtable_lookup(st, $1)->type;
                        }
                        else {
                            $<type>$ = typeError;
                            printError("El simbolo %s no fue declarado", $<strval>1);
                        }
                    }
                    | constant { $<type>$ = $<type>1; }
                    | string_literal { $<type>$ = $<type>1; }
                    | '(' expression ')' { $<type>$ = $<type>2; }
                    ;

postfix_expression:   primary_expression { $<type>$ = $<type>1; }
                    | postfix_expression '[' expression ']' {$<type>$ = reduceArray($<type>1, $<type>3);}
                    | postfix_expression '(' argument_expression_list.opt ')' {$<type>$ = reduceFunction($<type>1, $<list>3);}
                    | postfix_expression '.' identifier     { /* No consideramos structs */ }
                    | postfix_expression "->" identifier    { /* No consideramos structs */ }
                    | postfix_expression "++" {$<type>$ = reduceIncrement($<type>1);}
                    | postfix_expression "--" {$<type>$ = reduceIncrement($<type>1);}
                    | '(' type_name ')' '{' initializer_list '}'    { /* No consideramos los literales compuestos */ }
                    | '(' type_name ')' '{' initializer_list',' '}' { /* No consideramos los literales compuestos */ }
                    ;

argument_expression_list.opt: argument_expression_list { $<list>$ = $<list>1; }
                            | /* empty */ { $<list>$ = list_create(); }
                            ;

argument_expression_list:     assignment_expression { $<list>$ = list_create(); list_add($<list>$, $<type>1); }
                            | argument_expression_list',' assignment_expression { $<list>$ = $<list>1; list_add($<list>$, $<type>3); }
                            ;

unary_expression:     postfix_expression {$<type>$ = $<type>1;}
                    | "++" unary_expression {$<type>$ = reduceIncrement($<type>2);}
                    | "--" unary_expression {$<type>$ = reduceIncrement($<type>2);}
                    | '&' cast_expression { /* No consideramos el operador de referencia */ }
                    | '*' cast_expression {$<type>$ = reduceDereference($<type>2);}
                    | '+' cast_expression {$<type>$ = reduceUnaryPlus($<type>2);}
                    | '-' cast_expression {$<type>$ = reduceUnaryPlus($<type>2);}
                    | '~' cast_expression {$<type>$ = reduceBitwiseNot($<type>2);}
                    | '!' cast_expression {$<type>$ = reduceLogicalNot($<type>2);}
                    | SIZEOF unary_expression {$<type>$ = reduceSizeOf($<type>2);}
                    | SIZEOF '('  type_name ')' {$<type>$ = reduceSizeOf($<type>2);}
                    ;

cast_expression:      unary_expression {$<type>$ = $<type>1;}
                    | '(' type_name ')' cast_expression {$<type>$ = reduceCast($<type>2, $<type>4);}
                    ;

multiplicative_expression:    cast_expression {$<type>$ = $<type>1;}
                            | multiplicative_expression '*' cast_expression { $<type>$ = reduceProduct($<type>1, $<type>3); }
                            | multiplicative_expression '/' cast_expression { $<type>$ = reduceProduct($<type>1, $<type>3); }
                            | multiplicative_expression '%' cast_expression { $<type>$ = reduceRemainder($<type>1, $<type>3); }
                            ;

additive_expression:      multiplicative_expression {$<type>$ = $<type>1;}
                        | additive_expression '+' multiplicative_expression { $<type>$ = reduceSum($<type>1, $<type>3); }
                        | additive_expression '-' multiplicative_expression { $<type>$ = reduceSubtract($<type>1, $<type>3); }
                        ;

shift_expression:     additive_expression {$<type>$ = $<type>1;}
                    | shift_expression "<<" additive_expression {$<type>$ = reduceBitwise($<type>1, $<type>3);}
                    | shift_expression ">>" additive_expression {$<type>$ = reduceBitwise($<type>1, $<type>3);}
                    ;

relational_expression:    shift_expression {$<type>$ = $<type>1;}
                        | relational_expression '<' shift_expression { $<type>$ = reduceRelational($<type>1, $<type>3); }
                        | relational_expression '>' shift_expression { $<type>$ = reduceRelational($<type>1, $<type>3); }
                        | relational_expression "<=" shift_expression { $<type>$ = reduceRelational($<type>1, $<type>3); }
                        | relational_expression ">=" shift_expression { $<type>$ = reduceRelational($<type>1, $<type>3); }
                        ;
                        

equality_expression:      relational_expression {$<type>$ = $<type>1;}
                        | equality_expression "==" relational_expression { $<type>$ = reduceEquality($<type>1, $<type>3); }
                        | equality_expression "!=" relational_expression { $<type>$ = reduceEquality($<type>1, $<type>3); }
                        ;

AND_expression:   equality_expression {$<type>$ = $<type>1;}
                | AND_expression '&' equality_expression { $<type>$ = reduceBitwise($<type>1, $<type>3); }
                ;

exclusive_OR_expression:      AND_expression {$<type>$ = $<type>1;}
                            | exclusive_OR_expression '^' AND_expression { $<type>$ = reduceBitwise($<type>1, $<type>3); }
                            ;

inclusive_OR_expression:      exclusive_OR_expression {$<type>$ = $<type>1;}
                            | inclusive_OR_expression '|' exclusive_OR_expression { $<type>$ = reduceBitwise($<type>1, $<type>3); }
                            ;

logical_AND_expression:   inclusive_OR_expression {$<type>$ = $<type>1;}
                        | logical_AND_expression "&&" inclusive_OR_expression { $<type>$ = reduceLogical($<type>1, $<type>3); }
                        ;

logical_OR_expression:    logical_AND_expression {$<type>$ = $<type>1;}
                        | logical_OR_expression "||" logical_AND_expression { $<type>$ = reduceLogical($<type>1, $<type>3); }
                        ;

conditional_expression:   logical_OR_expression {$<type>$ = $<type>1;}
                        | logical_OR_expression '?' expression ':' conditional_expression { $<type>$ = reduceConditional($<type>1, $<type>3, $<type>5); }
                        ;

assignment_expression:    conditional_expression {$<type>$ = $<type>1;} 
                        | unary_expression '=' assignment_expression    {$<type>$ = reduceAssignment($<type>1, $<type>3);}
                        | unary_expression "*=" assignment_expression   {$<type>$ = reduceProduct($<type>1, $<type>3);}
                        | unary_expression "/=" assignment_expression   {$<type>$ = reduceProduct($<type>1, $<type>3);}
                        | unary_expression "%=" assignment_expression   {$<type>$ = reduceRemainder($<type>1, $<type>3);}
                        | unary_expression "+=" assignment_expression   {$<type>$ = reduceSum($<type>1, $<type>3);}
                        | unary_expression "-=" assignment_expression   {$<type>$ = reduceSubtract($<type>1, $<type>3);}
                        | unary_expression "<<=" assignment_expression  {$<type>$ = reduceBitwise($<type>1, $<type>3);}
                        | unary_expression ">>=" assignment_expression  {$<type>$ = reduceBitwise($<type>1, $<type>3);}
                        | unary_expression "&=" assignment_expression   {$<type>$ = reduceBitwise($<type>1, $<type>3);}
                        | unary_expression "^=" assignment_expression   {$<type>$ = reduceBitwise($<type>1, $<type>3);}
                        | unary_expression "|=" assignment_expression   {$<type>$ = reduceBitwise($<type>1, $<type>3);}
                        ;

expression:   assignment_expression {$<type>$ = $<type>1;} 
            | expression',' assignment_expression {$<type>$ = $<type>1;} 
            ;

constant_expression: conditional_expression ;
                  char                   *name, type[], hola, unaFunc(int, int);
declaration:      declaration_specifiers init_declarator_list.opt ';' 
                {
                    void agregarEspecificador(void* elem){
                        typeInfo_append(&((symbol*)elem)->type, $<type>1);
                    }
                    list_iterate($<list>2, agregarEspecificador);
                    symtable_addSymbols(st, $<list>2);
                } 
                | error ';'             { yyerrok; }
                ;

declaration_specifiers:   storage_class_specifier declaration_specifiers.opt {$<type>$ = $<type>2;}
                        | type_specifier declaration_specifiers.opt {$<type>2->type = $<typeName>1; $<type>$ = $<type>2;}
                        | type_qualifier declaration_specifiers.opt {$<type>$ = $<type>2;}
                        | function_specifier declaration_specifiers.opt {$<type>$ = $<type>2;}
                        ;

declaration_specifiers.opt:   /* empty */ {$<type>$ = typeInfo_create(t_ERROR);}
                            | declaration_specifiers {$<type>$ = $<type>1;}
                            ;

init_declarator_list.opt:     /* empty */ {$<list>$ = list_create();}
                            | init_declarator_list {$<list>$ = $<list>1;}
                            ; 

init_declarator_list:     init_declarator {$<list>$ = list_create(); list_add($<list>$, $<sym>1);}
                        | init_declarator_list',' init_declarator {$<list>$ = $<list>1; list_add($<list>$, $<sym>3);}
                        ;

init_declarator:      declarator 
                    {
                        $<sym>$ = $<sym>1;
                        if($<sym>$->type != NULL){
                            if($<sym>$->type->type == t_FUNC){
                                bool isNamedParam(void* elem){
                                    return ((symbol*)elem)->identifier != NULL;
                                }
                                t_list* namedParams = list_filter($<sym>$->type->params, isNamedParam);
                                symtable_addSymbols(st, namedParams);
                            }
                        }
                    }
                    | declarator '=' initializer {$<sym>$ = $<sym>1;}
                    ;

storage_class_specifier:      TYPEDEF  
                            | EXTERN   
                            | STATIC   
                            | AUTO     
                            | REGISTER 
                            ;

type_specifier:   VOID {$<typeName>$ = t_VOID;}
                | CHAR {$<typeName>$ = t_CHAR;}
                | SHORT {$<typeName>$ = t_ERROR;}
                | INT {$<typeName>$ = t_INT;}
                | LONG {$<typeName>$ = t_ERROR;}
                | FLOAT {$<typeName>$ = t_FLOAT;}
                | DOUBLE {$<typeName>$ = t_DOUBLE;}
                | SIGNED {$<typeName>$ = t_ERROR;}
                | UNSIGNED {$<typeName>$ = t_ERROR;}
                | BOOL {$<typeName>$ = t_ERROR;}
                | COMPLEX {$<typeName>$ = t_ERROR;}
                | struct_or_union_specifier {$<typeName>$ = t_ERROR;}
                | enum_specifier {$<typeName>$ = t_ERROR;}
                | typedef_name {$<typeName>$ = t_ERROR;}
                ;

struct_or_union_specifier:    struct_or_union identifier '{' struct_declaration_list '}'
                            | struct_or_union '{' struct_declaration_list '}'
                            | struct_or_union identifier
                            ;

struct_or_union: STRUCT | UNION ;

struct_declaration_list:      struct_declaration
                            | struct_declaration_list struct_declaration
                            ;

struct_declaration:   specifier_qualifier_list struct_declarator_list ';' ;

specifier_qualifier_list:     type_specifier specifier_qualifier_list.opt {$<type>$ = $<type>2; $<type>$->type = $<typeName>1;}
                            | type_qualifier specifier_qualifier_list.opt {$<type>$ = $<type>2;}
                            ;

specifier_qualifier_list.opt:     /* empty */ {$<type>$ = typeInfo_create(t_ERROR);}
                                | specifier_qualifier_list {$<type>$ = $<type>1;}
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

enum_specifier:   ENUM identifier.opt '{' enumerator_list '}' 
                | ENUM identifier.opt '{' enumerator_list',' '}'
                | ENUM identifier
                ;

identifier.opt:   /* empty */ {$<strval>$ = NULL;}
                | identifier  {$<strval>$ = $1;}
                ;

enumerator_list:      enumerator
                    | enumerator_list',' enumerator
                    ;

enumerator:   enumeration_constant
            | enumerator '=' constant_expression
            ;

type_qualifier:   CONST
                | RESTRICT
                | VOLATILE
                ;

function_specifier: INLINE;

declarator:   pointer direct_declarator {typeInfo_append(&$<sym>2->type, $<type>1); $<sym>$ = $<sym>2;}
            | direct_declarator {$<sym>$ = $<sym>1;}
            ;

direct_declarator:    identifier {$<sym>$ = symbol_create($1); $<sym>$->identifier = string_duplicate($1);}
                    | '(' declarator ')' { $<sym>$ = $<sym>2; }
                    | direct_declarator '[' type_qualifier_list.opt assignment_expression.opt ']'       {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&$<sym>1->type, t); $<sym>$ = $<sym>1;}
                    | direct_declarator '[' STATIC type_qualifier_list.opt assignment_expression ']'    {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&$<sym>1->type, t); $<sym>$ = $<sym>1;}
                    | direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'        {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&$<sym>1->type, t); $<sym>$ = $<sym>1;}
                    | direct_declarator '[' type_qualifier_list.opt '*' ']'                             {typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&$<sym>1->type, t); $<sym>$ = $<sym>1;}
                    | direct_declarator '(' parameter_type_list ')' {typeInfo* t = typeInfo_create(t_FUNC); t->params = $<list>3; typeInfo_append(&$<sym>1->type, t); $<sym>$ = $<sym>1;}
                    | direct_declarator '(' identifier_list.opt ')' {typeInfo* t = typeInfo_create(t_FUNC); t->params = $<list>3; typeInfo_append(&$<sym>1->type, t); $<sym>$ = $<sym>1;}
                    ;
                    
assignment_expression.opt:    /* empty */
                            | assignment_expression
                            ;

type_qualifier_list.opt:      /* empty */
                            | type_qualifier_list
                            ;

identifier_list.opt:      /* empty */ {$<list>$ = list_create();}
                        | identifier_list {$<list>$ = list_create();}
                        ;

pointer:      '*' type_qualifier_list.opt { $<type>$ = typeInfo_create(t_PTR); }
            | '*' type_qualifier_list.opt pointer {typeInfo* t = typeInfo_create(t_PTR); typeInfo_append(&$<type>3, t); $<type>$ = $<type>3;}
            ;

type_qualifier_list:      type_qualifier
                        | type_qualifier_list type_qualifier
                        ;

parameter_type_list:      parameter_list {$<list>$ = $<list>1;}
                        | parameter_list ',' "..." {$<list>$ = $<list>1; /* TODO: Por ahora ignoramos los argumentos variadicos */ }
                        ;

parameter_list:   parameter_declaration {$<list>$ = list_create(); list_add($<list>$, $<sym>1);}
                | parameter_list ',' parameter_declaration {$<list>$ = $<list>1; list_add($<list>$, $<sym>3);}
                ;

parameter_declaration:    declaration_specifiers declarator { $<sym>$ = $<sym>2; typeInfo_append(&$<sym>$->type, $<type>1); }
                        | declaration_specifiers abstract_declarator.opt { $<sym>$ = $<sym>2; typeInfo_append(&$<sym>$->type, $<type>1); }
                        ;

abstract_declarator.opt:      /* empty */ { $<sym>$ = symbol_create(); }
                            | abstract_declarator { $<sym>$ = symbol_create(); $<sym>$->type = $<type>1; }
                            ;

identifier_list:      identifier
                    | identifier_list ',' identifier
                    ;

type_name:    specifier_qualifier_list {$<type>$ = $<type>1;}
            | specifier_qualifier_list abstract_declarator {typeInfo_append(&$<type>2, $<type>1); $<type>$ = $<type>2;}
            ;

abstract_declarator:      pointer { $<type>$ = $<type>1; }
                        | pointer direct_abstract_declarator { $<type>$ = $<type>2; typeInfo_append(&$<type>$, $<type>1); }
                        | direct_abstract_declarator { $<type>$ = $<type>1; }
                        ;

direct_abstract_declarator:   '(' abstract_declarator ')' { $<type>$ = $<type>2; }
                            | '['  assignment_expression.opt ']'    { $<type>$ = typeInfo_create(t_ARRAY); }
                            | '[' '*' ']'                           { $<type>$ = typeInfo_create(t_ARRAY); }
                            | '(' parameter_type_list ')'           { $<type>$ = typeInfo_create(t_FUNC); $<type>$->params = $<list>2; }
                            | '(' ')'                               { $<type>$ = typeInfo_create(t_FUNC); $<type>$->params = list_create(); }
                            | direct_abstract_declarator '['  assignment_expression.opt ']' { $<type>$ = $<type>1; typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&$<type>$, t); }
                            | direct_abstract_declarator '[' '*' ']'                        { $<type>$ = $<type>1; typeInfo* t = typeInfo_create(t_ARRAY); typeInfo_append(&$<type>$, t); }
                            | direct_abstract_declarator '(' parameter_type_list ')'        { $<type>$ = $<type>1; typeInfo* t = typeInfo_create(t_FUNC); t->params = $<list>3; typeInfo_append(&$<type>$, t); }
                            | direct_abstract_declarator '(' ')'                            { $<type>$ = $<type>1; typeInfo* t = typeInfo_create(t_FUNC); t->params = list_create(); typeInfo_append(&$<type>$, t); }
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
            | expression_statement  
            | selection_statement   
            | iteration_statement   
            | jump_statement        
            | error ';'             { yyerrok; }
            ;

labeled_statement:    identifier ':' statement
                    | CASE constant_expression ':' statement
                    | DEFAULT ':' statement
                    ;

compound_statement: '{' block_item_list.opt '}' ;

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

selection_statement:      IF if_body
                        | SWITCH '(' expression ')' statement
                        ;

if_body:      '(' expression ')' statement %prec IFX
            | '(' expression ')' statement ELSE statement
            ;

iteration_statement:      WHILE '(' expression ')' statement
                        | DO statement WHILE '(' expression ')' ';'
                        | FOR for_body
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

function_definition:      declaration_specifiers declarator declaration_list.opt
                        {
                            typeInfo_append(&$<sym>2->type, $<type>1);
                            symtable_functionDefinition(st, $<sym>2);
                        } compound_statement
                        | error '{' { yyerrok; }
                        | error ';' { yyerrok; }            
                        | error '}' { yyerrok; }
                        ;

declaration_list.opt:     /* empty */
                        | declaration_list
                        ;

declaration_list:     declaration
                    | declaration_list declaration
                    ;

%%

int main(int argc, char *argv[]) {
    char* file = "tests.c";
    if (argc == 1) {
        printf("\nAl no especificar un archivo de lectura automaticamente sera leido el archivo tests.c\n");
    } else {
        file = argv[1];
    }
    
    if (argc > 2) {
        printf("\nUnicamente el primer archivo especificado sera analizado :)\n");
    }

    printf("\nArchivo %s\n", file);

    yydebug = 0;
	yyin=fopen(file,"r");

    initBaseTypes();
    st = symtable_create();

    printf("\n~~~~~ INICIO DETECCION DE ERRORES ~~~~~\n");
   	yyparse();
    printf("\n~~~~~ FIN DE DETECCION DE ERRORES ~~~~~\n");
	
    symtable_print(st);

    fclose(yyin);
    return 0; 
}

int yyerror(const char *msg) {
	printf("\nLinea %d: %s\n", yylineno, msg);
	return 0; 
}