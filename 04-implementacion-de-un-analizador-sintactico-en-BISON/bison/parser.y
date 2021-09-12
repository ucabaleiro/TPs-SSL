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

postfix_expression:   primary_expression
                    | postfix_expression[expression]
                    | postfix_expression(argument_expression_list)
                    | postfix_expression.IDENTIFIER
                    | postfix_expression->IDENTIFIER
                    | postfix_expression++
                    | postfix_expression--
                    | (type_name){initializer_list}
                    | (type_name){initializer_list,}

argument_expression_list:     assignment_expression
                            | assignment_expression_list, assignment_expression

unary_expression:     postfix_expression
                    | ++unary_expression
                    | --unary_expression
                    | UNARY_OPERATOR cast_expression
                    | SIZEOF unary_expression
                    | SIZEOF (type_name)

multiplicative_expression:    cast_expression
                            | multiplicative_expression * numero
                            | multiplicative_expression / cast_expression
                            | multiplicative_expression % cast_expression

additive_expression:      multiplicative_expression
                        | additive_expression + multiplicative_expression
                        | additive_expression - multiplicative_expression

shift_expression:     additive_expression
                    | shift_expression << additive_expression
                    | shift_expression >> additive_expression
    