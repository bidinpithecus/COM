%{

#include "helpers.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);

%}

%union {
	int ival;
	float fval;
	char cval;
	char* sval;
}

/* Declaração dos tokens... */

%token<ival> T_INT T_BOOL T_TRUE T_FALSE
%token<sval> T_INT_TYPE T_BOOL_TYPE T_FLOAT_TYPE T_VOID_TYPE
%token<fval> T_FLOAT
%token<fval> T_VOID
%token<sval> T_SMALLER_EQUALS T_SMALLER T_GREATER T_GREATER_EQUALS T_EQUALS T_DIFFERENT
%token<sval> T_SUM T_SUB T_MULT T_DIV

%token T_ID
%token T_OPEN_BRACKETS T_CLOSE_BRACKETS
%token T_OPEN_CURLY_BRACKETS T_CLOSE_CURLY_BRACKETS
%token T_OPEN_PARENTHESIS T_CLOSE_PARENTHESIS
%token T_SEMICOLON T_COLON
%token T_IF T_ELSE
%token T_WHILE
%token T_RETURN
%token T_COMMA
%token T_ATR
%token T_FUNCTION T_PROCEDURE

%left T_SUM T_SUB
%left T_MULT T_DIV

%type<sval> tipo_especificador relacional soma mult

%start programa

%%
programa:	{ initiateProgram(); }	declaracao_lista { finishProgram(); printf("Programa lido com sucesso\n"); }
	;

declaracao_lista:	declaracao_lista declaracao
	|		declaracao
	;

declaracao:		var_declaracao
	|		fun_declaracao
	;

var_declaracao:		tipo_especificador T_ID T_SEMICOLON 
	|		tipo_especificador T_ID T_OPEN_BRACKETS T_INT T_CLOSE_BRACKETS T_SEMICOLON
	;

tipo_especificador:	T_INT_TYPE { $$ = strdup($1); }
	|				T_FLOAT_TYPE { $$ = strdup($1); }
	|				T_VOID_TYPE { $$ = strdup($1); }
	|				T_BOOL_TYPE { $$ = strdup($1); }
	;

fun_declaracao:		fun
	|		procedure
	;

fun: T_FUNCTION T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS T_COLON tipo_especificador composto_decl 
	;

procedure: T_PROCEDURE T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS composto_decl

params:		param_lista
	|		T_VOID
	;

param_lista:	param_lista T_COMMA param
	|			param
	;

param:		T_ID T_COLON tipo_especificador
	|		T_ID T_COLON tipo_especificador T_OPEN_BRACKETS T_CLOSE_BRACKETS
	;

composto_decl:		T_OPEN_CURLY_BRACKETS local_declaracoes statement_lista T_CLOSE_CURLY_BRACKETS
	;

local_declaracoes:	local_declaracoes var_declaracao
	|
	;

statement_lista:	statement_lista statement
	|
	;

statement:	expressao_decl
	|		composto_decl
	|		selecao_decl
	|		iteracao_decl
	|		retorno_decl // { $$ = strdup($1); }
	;

expressao_decl:		expressao T_SEMICOLON
	|				T_SEMICOLON
	;

selecao_decl:	T_IF T_OPEN_PARENTHESIS expressao T_CLOSE_PARENTHESIS statement
	|			T_IF T_OPEN_PARENTHESIS expressao T_CLOSE_PARENTHESIS statement T_ELSE statement
	;

iteracao_decl:	T_WHILE T_OPEN_PARENTHESIS expressao T_CLOSE_PARENTHESIS statement
	;

retorno_decl:	T_RETURN T_SEMICOLON
	|			T_RETURN expressao T_SEMICOLON
	;

expressao:	var T_ATR expressao
	|		simples_expressao
	;

var:	T_ID
	|	T_ID T_OPEN_BRACKETS expressao T_CLOSE_BRACKETS
	;

simples_expressao:	soma_expressao relacional soma_expressao
	|				soma_expressao
	;

relacional:		T_SMALLER_EQUALS { $$ = strdup($1); }
	|			T_SMALLER { $$ = strdup($1); }
	|			T_GREATER { $$ = strdup($1); }
	|			T_GREATER_EQUALS { $$ = strdup($1); }
	|			T_EQUALS { $$ = strdup($1); }
	|			T_DIFFERENT { $$ = strdup($1); }
	;

soma_expressao:		soma_expressao soma termo
	|				termo
	;

soma:		T_SUM {$$ = strdup($1); }
	|		T_SUB { $$ = strdup($1); }
	;

termo:		termo mult fator
	|		fator
	;
	
mult:		T_MULT { $$ = strdup($1); }
	|		T_DIV { $$ = strdup($1); }
	;

fator:		T_OPEN_PARENTHESIS expressao T_CLOSE_PARENTHESIS
	|		var
	|		ativacao
	|		T_INT
	;

ativacao:	T_ID T_OPEN_PARENTHESIS args T_CLOSE_PARENTHESIS
	;

args:		arg_lista
	|
	;

arg_lista:	arg_lista T_COMMA expressao
	|		expressao
	;

%%

int main(int argc, char **argv) {
    ++argv, --argc;
	if (argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		yyin = stdin;
	}

	do {
		yyparse();

	} while(!feof(yyin));
	
	return 0;
}

void yyerror (char const *s) {
   fprintf (stderr, "Erro sintatico: (%s)\n", s);
}
