%{
    #include <stdio.h>
    int yylex(void);
    int yyerror(const char *s);
    extern FILE* yyin;
    extern int yylineno;
%}

%union
{
    char* strval;
    int ival;
}

%token AUTO

%start primary_expression

%%

primary_expression:   IDENTIFIER
                    | CONSTANT
                    | STRING_LITERAL
                    | (expression)
                    ;

postfix_expression:   primary_expression
                    | postfix_expression[expression]
                    | postfix_expression(argument_expression_list)
                    | postfix_expression.IDENTIFIER
                    | postfix_expression->IDENTIFIER
                    | postfix_expression++
                    | postfix_expression--
                    | (type_name){initializer_list}
                    | (type_name){initializer_list,}
                    ;

argument_expression_list:     assignment_expression
                            | assignment_expression_list, assignment_expression
                            ;

unary_expression:     postfix_expression
                    | ++unary_expression
                    | --unary_expression
                    | UNARY_OPERATOR cast_expression
                    | SIZEOF unary_expression
                    | SIZEOF (type_name)
                    ;

multiplicative_expression:    cast_expression
                            | multiplicative_expression * numero
                            | multiplicative_expression / cast_expression
                            | multiplicative_expression % cast_expression
                            ;

additive_expression:      multiplicative_expression
                        | additive_expression + multiplicative_expression
                        | additive_expression - multiplicative_expression
                        ;

shift_expression:     additive_expression
                    | shift_expression << additive_expression
                    | shift_expression >> additive_expression
                    ;

relational_expression:    shift_espression
                        | relational_expression < shift_espression
                        | relational_expression > shift_espression
                        | relational_expression <= shift_espression
                        | relational_expression >= shift_espression
                        ;
                        

equality_expression:      relational_expression
                        | equality_expression == relational_expression
                        | equality_expression != relational_expression
                        ;

AND_expression:   equality_expression
                | AND_expression & equality_expression
                ;

exclusive_OR_expression:      AND_expression
                            | exclusive_OR_expression ^ AND_expression
                            ;

inclusive_OR_expression:      exclusive_OR_expression
                            | inclusive_OR_expression | exclusive_OR_expression
                            ;

logical_AND_expression:   inclusive_OR_expression
                        | logical_AND_expression && inclusive_OR_expression
                        ;

logical_OR_expression:    logical_AND_expression
                        | logical_OR_expression || logical_AND_expression
                        ;

conditional_expression:   logical_OR_expression
                        | logical_OR_expression ? expression : conditional_expression
                        ;

assignment_expression:    conditional_expression
                        | unary_expression ASSIGNMENT_OPERATOR assignment_expression
                        ;

expression:   assignment_expression
            | expression, assignment_expression
            ;

constant_expression: conditional_expression ';'

declaration:      declaration_specifiers ;
                | declaration_specifiers initi_declarator_list ;
                ;

declaration_specifiers:   STORAGE_CLASS_SPECIFIER declaration_specifiers.opt
                        | type_specifier declaration_specifiers.opt
                        | TYPE_QUALIFIER declaration_specifiers.opt
                        | FUNCTION_SPECIFIER declaration_specifiers.opt
                        ;

declaration_specifiers.opt:   /* empty */
                            | declaration_specifiers
                            ;

init_declarator_list:    init_declarator
                        | init_declarator_list, init_declarator
                        ;

init_declarator:      declarator
                    | declarator = initializer

type_specifier:   SIMPLE_TYPE_SPECIFIER
                | struct_or_union_specifier
                | KEYWORD_ENUM
                | typedef_name
                ;

struct_or_union_specifier:    STRUCT_OR_UNION IDENTIFIER { struct_declaration_list }
                            | STRUCT_OR_UNION { struct_declaration_list }
                            | STRUCT_OR_UNION IDENTIFIER
                            ;

struct_declaration_list:      struct_declaration
                            | struct_declaration_list struct_declaration
                            ;

struct_declaration:   speficier_qualifier_list struct_declarator_list ';';

speficier_qualifier_list:     type_specifier speficier_qualifier_list.opt
                            | TYPE_QUALIFIER speficier_qualifier_list.opt
                            ;

speficier_qualifier_list.opt:     /* empty */
                                | speficier_qualifier_list
                                ;

struct_declarator_list:   struct_declarator
                        | struct_declarator_list , struct_declarator
                        ;

struct_declarator:    declarator
                    | declarator.opt : constant_expression
                    ;

declarator.opt:   /* empty */
                | declarator
                ;

enum_specifier:   ENUM identifier.opt { enumerator_list }
                | ENUM identifier.opt { enumerator_list , }
                | ENUM identifier
                ;

identifier.opt:   /* empty */
                | IDENTIFIER
                ;

enumerator_list:      enumerator
                    | enumerator_list, enumerator
                    ;

enumerator:   enumeration_constant
            | enumerator = constant_expression
            ;

enumeration_constant: IDENTIFIER;

declarator:   pointer direct_declarator
            | direct_declarator
            ;

direct_declarator:    IDENTIFIER
                    | ( declarator )
                    | direct_declarator [ type_qualifier_list.opt assignment_expression.opt]       // HACER OPTS
                    | direct_declarator [ STATIC type_qualifier_list.opt assignment_expression]