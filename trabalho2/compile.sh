#!/bin/sh
clear;
bison -d tr-parte2.y;
flex tr-parte2.lex;
if [ $? -ne 0 ]
	then
		echo "Error with flex";
else
	gcc tr-parte2.tab.c lex.yy.c -lm;
	if [ $? -eq 0 ]
		then
			./a.out $1;
	else
		echo "Error with gcc";
	fi
fi
