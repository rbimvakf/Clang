#include <stdio.h>

int main() 
{
	int* p;
	int n[] = { 100, 200, 300, 400, 500 };
	p = &n[0];
	printf("%d, %d\n", n[0], *p);
	printf("%d, %d", n[2], *(p+2));
	/*
	* 100, 100
	* 300, 300
	*/
	return 0;
}
