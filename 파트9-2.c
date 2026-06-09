#include <stdio.h>

int main() {
	int n = 11;
	double f = 3.14;
	int* pn = &n;
	double* pf = &f;
	printf("%d, %f\n", n, f);
	printf("%d, %f\n", *pn, *pf);
	printf("%f", (float)n+f);
	/*
	* 11, 3.140000
	* 11, 3.140000
	* 14.140000
	*/
	return 0;
}
