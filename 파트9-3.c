#include <stdio.h>

int main() 
{
	int a; float b; char c;
	int* ip = &a;
	float* fp = &b;
	char* cp = &c;
	printf("%p, %p, %p\n", ip, fp, cp);
	printf("%p, %p, %p\n", ip+2, fp+2, cp+2);
	/*
	* 1000, 1001, 1002
	* 1008, 1009, 1004
	*/
	return 0;
}
