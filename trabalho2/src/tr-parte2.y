%{

#include "helpers.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);

enum types {INT_T = 1, FLOAT_T = 2, BOOL_T = 3};

Table* table;

%}

%union {
	int ival;
	float fval;
	char cval;
	char* sval;
	struct {
		int type;
		char* id;
	} typeAndId;
	Type symboltypeval;
}

/* Declaração dos tokens... */

%token<ival> T_INT T_BOOL T_TRUE T_FALSE
%token<sval> T_INT_TYPE T_BOOL_TYPE T_FLOAT_TYPE
%token<fval> T_FLOAT
%token<sval> T_SMALLER_EQUALS T_SMALLER T_GREATER T_GREATER_EQUALS T_EQUALS T_DIFFERENT
%token<cval> T_SUM T_SUB T_MULT T_DIV
%token<sval> T_ID
%token<cval> T_SEMICOLON

%token T_OPEN_BRACKETS T_CLOSE_BRACKETS
%token T_OPEN_CURLY_BRACKETS T_CLOSE_CURLY_BRACKETS
%token T_OPEN_PARENTHESIS T_CLOSE_PARENTHESIS
%token T_COLON
%token T_IF T_ELSE
%token T_WHILE
%token T_RETURN
%token T_COMMA
%token T_ATR
%token <sval> T_FUNCTION T_PROCEDURE

%left T_SUM T_SUB
%left T_MULT T_DIV

%type<sval> relacional var_declaracao var ativacao arg_lista args
%type<cval> soma mult
%type<ival> tipo_especificador
%type<typeAndId> tipo_especificador_novo
%type<symboltypeval> expressao termo simples_expressao soma_expressao fator

%start programa

%%
programa:	{ initiateProgram(); } declaracao_lista { finishProgram(); }
	;

declaracao_lista:	declaracao_lista declaracao
	|		declaracao
	;

declaracao:		var_declaracao
	|		fun_declaracao
	;

var_declaracao:		tipo_especificador_novo T_SEMICOLON {
		$1.id[strlen($1.id)] = '\0';
		if ($1.type == INT_T || $1.type == BOOL_T) {
			initializeVariableOnCode(table, $1.id, "i");
		} else if ($1.type == FLOAT_T) {
			initializeVariableOnCode(table, $1.id, "f");
		}
	}
	|		tipo_especificador_novo T_OPEN_BRACKETS T_INT T_CLOSE_BRACKETS T_SEMICOLON 
	;

tipo_especificador_novo: tipo_especificador T_ID {
		$$.type = $1;
		$$.id = strdup($2);
	}
	;

tipo_especificador:	T_INT_TYPE { $$ = INT_T; }
	|				T_FLOAT_TYPE { $$ = FLOAT_T; }
	|				T_BOOL_TYPE { $$ = BOOL_T; }
	;

fun_declaracao:		fun
	|		procedure
	;

fun: T_FUNCTION T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS T_COLON tipo_especificador composto_decl
	;

procedure: T_PROCEDURE T_ID T_OPEN_PARENTHESIS params T_CLOSE_PARENTHESIS composto_decl
	;

params:
		| param_lista	
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
	|		retorno_decl
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

expressao:	var T_ATR expressao {
		int type = getVarType(table, $1);
		if (type == INT_T) {
			pushIntToVariableOnCode(table, $1, $3);
		} else if (type == FLOAT_T) {
			pushFloatToVariableOnCode(table, $1, $3);
		}
		$$ = $3;
	}
	|		simples_expressao { $$ = $1; }
	;

var:	T_ID { $$ = strdup($1); }
	|	T_ID T_OPEN_BRACKETS expressao T_CLOSE_BRACKETS
	;

simples_expressao:	soma_expressao relacional soma_expressao { $$ = $1; }
	|				soma_expressao{ $$ = $1; }
	;

relacional:		T_SMALLER_EQUALS { $$ = strdup($1); }
	|			T_SMALLER { $$ = strdup($1); }
	|			T_GREATER { $$ = strdup($1); }
	|			T_GREATER_EQUALS { $$ = strdup($1); }
	|			T_EQUALS { $$ = strdup($1); }
	|			T_DIFFERENT { $$ = strdup($1); }
	;

soma_expressao:		soma_expressao soma termo {
		if (ceil($3) == $3) {
			writeOpOnCode($2, 'i');
		} else {
			writeOpOnCode($2, 'f');
		}
		$$ = $3; 
	}
	|	termo {
 			if (ceil($1) == $1) {
				writeIntOnCode($1);
			} else {
				writeFloatOnCode($1);
			}
		}
	;

soma:	T_SUM { $$ = $1; }
	|	T_SUB { $$ = $1; }
	;

termo:		termo mult fator {
		if (ceil($3) == $3) {
			writeOpOnCode($2, 'i');
		} else {
			writeOpOnCode($2, 'f');
		}
		$$ = $1;
	}
	|		fator { $$ = $1; }
	;
	
mult:		T_MULT { $$ = $1; }
	|		T_DIV { $$ = $1; }
	;

fator:		T_OPEN_PARENTHESIS expressao T_CLOSE_PARENTHESIS { $$ = $2; }
	|		var 
	|		ativacao
	|		T_INT  { $$ = $1; }
	|		T_FLOAT  { $$ = $1; }
	;

ativacao:	T_ID T_OPEN_PARENTHESIS args T_CLOSE_PARENTHESIS { $$ = $3; }
	;

args:		arg_lista { $$ = $1; }
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
