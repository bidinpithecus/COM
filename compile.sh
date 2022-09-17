#!/bin/sh
flex --noyywrap tr-parte1.lex;
gcc lex.yy.c;
./a.out $1;
