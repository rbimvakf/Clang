#include <stdio.h>

int main() 
{
	char* cp = "C is a computer programming language.";
	printf("%s\n", cp);
	printf("%c\n", *(cp+7));
	printf("%c", cp[10]);
	/*
	* C is a computer programming language.
	* c
	* p
	*/
	return 0;
}
