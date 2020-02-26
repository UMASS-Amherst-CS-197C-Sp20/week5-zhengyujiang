#include<stdio.h>
#include"declarations.h"

/*
	1. Declaration of a variable or function simply declares that
	the variable or function exists somewhere in the program,
	but the memory is not allocated for them. The declaration
	of a variable or function serves an important role–it tells
	the program what its type is going to be. In case of function
	declarations, it also tells the program the arguments, their
	data types, the order of those arguments, and the return type
	of the function. So that’s all about the declaration.

	2. Coming to the definition, when we define a variable or function,
	in addition to everything that a declaration does, it also allocates
	memory for that variable or function. Therefore, we can think of
	definition as a superset of the declaration (or declaration as a
	subset of definition).

	3. A variable or function can be declared any number of times,
	but it can be defined only once. (Remember the basic principle
	that you can’t have two locations of the same variable or function).
*/


int i=5;
char letter = 'N';
enum example exNum = GOOD;
exampleStruct anExample = {5,6};

int main(int argc, char * argv[]){
	printf("i:\t\t%i\n",i);
	printf("letter:\t\t%c\n",letter);
	printf("exNum:\t\t%i\n",exNum);
	printf("anExample:\t%i,%i\n",anExample.a,anExample.b);
	return 0;
}

