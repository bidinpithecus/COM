#ifndef __HELPERS_H
#define __HELPERS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int yylex();
int yyparse();

extern char outputFileName[];
extern char writeContent[];
extern char appendContent[];

extern int numberOfTokensAdded;

typedef struct Coord {
	int line;
	int col;
	struct Coord *next;
} Coord;

typedef struct Row {
	char *lexema;
	char *token;
	int varNumber;
	struct Coord *coords;
	struct Row *next;
} Row;

typedef struct Table {
	struct Row *first;
	struct Row *last;
} Table;

typedef enum Type {
    INTEGER,
    FLOAT,
    BOOLEANA,
} Type;

typedef struct SymbolType {
	enum Type type;
} SymbolType;

#include "helpers.h"

Table* newTable();
Table* newTable();

Row* getToken(Table*, char[]);

int getTokenVarNumber(Table*, char[]);
int getLineToken(Table*, char[]);
int numOfDigits(int);
int getVarType(Table*, char[]);

char* intToString(int);

void addToken(Table**, char*, char*, int*, int*, int*);
void pointError(char*, char*, int, int);
void printTable(Table*, int);
void manipulateOutputFile(char*, char*, char*);
void writeInitialMethod();
void writeStartMainMethod();
void initiateProgram();
void writeFinalMainMethod();
void finishProgram();
void writePrintOnCode(char);
void initializeVariableOnCode(Table*, char[], char*);
void pushIntToVariableOnCode(Table*, char[], int);
void pushFloatToVariableOnCode(Table*, char[], float);
void writeRelationalOpOnCode(char*, char);
void writeLabelOnCode(int);
void writeFullLabelOnCode(int);
void writeGoToOnCode(int);
void labelAndGoToOnCode(int);
void writeOpOnCode(char, char);
void writeIntOnCode(int);
void writeFloatOnCode(float);
void addToken(Table**, char*, char*, int*, int*, int*);
void pointError(char*, char*, int, int);
void printTable(Table*, int);
void createOutputFile(char[], char[], char[]);
void manipulateOutputFile(char*, char*, char*);
void generateInitialMethod();
void changeTokenOnRow(Table*, char[], char[]);

#endif