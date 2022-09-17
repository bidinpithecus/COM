%{
#include "helpers.h"

int numLines = 0;
int numCol = 0;
int numOfTokens = 0;

Table *table = NULL;
%}

/* ============ */
/*  DEFINIÇÕES  */
/* ============ */

NUM [0-9]
CHAR [a-zA-Z]
COMPARISONS "<="|"<"|">"|">="|"=="|"!="
SUM "+"|"-"
MULT "*"|"/"
BOOL "true"|"false"|"TRUE"|"FALSE"
TYPES "int"|"float"|"bool"|"void"
KEYWORDS "if"|"else"|"while"|"return"|";"|"["|"]"|"("|")"|"{"|"}"|","|"="

%%

[ \t]+ {
	numCol++;
}

\n {
	numLines++;
	numCol = 0;
}

{COMPARISONS} {
	addToken(&table, yytext, "Comparisons", &numOfTokens, &numLines, &numCol);
}

{MULT} {
	addToken(&table, yytext, "Mult", &numOfTokens, &numLines, &numCol);
}

{SUM} {
	addToken(&table, yytext, "Sum", &numOfTokens, &numLines, &numCol);
}

{BOOL} {
	addToken(&table, yytext, "Bool", &numOfTokens, &numLines, &numCol);
}

{TYPES} {
	addToken(&table, yytext, "Type", &numOfTokens, &numLines, &numCol);
}

{KEYWORDS} {
	addToken(&table, yytext, "Keyword", &numOfTokens, &numLines, &numCol);
}

{NUM}+ {
	addToken(&table, yytext, "Int", &numOfTokens, &numLines, &numCol);
}

{NUM}+"."{NUM}+ {
	addToken(&table, yytext, "Float", &numOfTokens, &numLines, &numCol);
}

{CHAR}+({NUM}|{CHAR})* {
	addToken(&table, yytext, "ID", &numOfTokens, &numLines, &numCol);
}

%%

int main (int argc, char **argv) {
	++argv, --argc;
	if (argc > 0) {
		yyin = fopen(argv[0], "r");
	} else {
		yyin = stdin;
	}

	yylex();
	printTable(table, numOfTokens);
	printf("Confira o arquivo 'output.txt' para ver o resultado\n\n");
	system("cat output.txt");

	return 0;
}