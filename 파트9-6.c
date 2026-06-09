#include <stdio.h>

int main() 
{
	char* cp = "C is a computer grogramming language.";
	printf("%s\n", cp);
	printf("%c\n", *(cp+7));
	printf("%c\n", cp[10]);
	/*
	* C is a computer grogramming language.
	* c
	* p
	*/
	return 0;
}
