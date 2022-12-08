#ifndef __HELPERS_H
#define __HELPERS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

Table* newTable();
void addToken(Table**, char*, char*, int*, int*, int*);
void pointError(char*, char*, int, int);
void printTable(Table*, int);
void createOutputFile(char[], char[], char[]);
void manipulateOutputFile(char*, char*, char*);
void generateInitialMethod();
char* intToString(int);
int numOfDigits(int);

#endif