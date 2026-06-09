#include <stdio.h>

int main() {
	float x[4] = { 1.5, 2.5, 3.5, 4.5 };
	
	printf("%f\n", x[0]);
	printf("%f\n", x[2]);
	printf("%f\n", x[0] + x[2]);
	printf("%f\n", x[0] * x[2]);
	/*
	* 1.500000
	* 3.500000
	* 5.000000
	* 5.250000
	*/
	
	return 0;
}
