#include <stdio.h>

int main() {
	int a[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	char* c[3] = { "abc", "def", "ghi" };
	int (*b)[4] = a;
	printf("%d %d %d\n", *b[1], b[1][2], *(b[2]) + 3);
	printf("%c %c\n", *c[1], c[0][2]);
	/*
	* 5 7 12
	* d c
	*/
	return 0;
}
