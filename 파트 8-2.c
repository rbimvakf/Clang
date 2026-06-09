#include <stdio.h>

int main() {
	int a[3] = { 1, 3, 5 };
	float b[4] = { 0.5, 1.5, 2.5, 3.5 };
	char c[20] = "C programming";
	double d[4] = { 1.25, 2.25, 3.25, 4.25 };
	
	printf("%d, %d, %d, %d", (int)sizeof(a), (int)sizeof(b), (int)sizeof(c), (int)sizeof(d)); // 12, 16, 20, 32
	
	return 0;
}
