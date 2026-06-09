#include <stdio.h>

int main()
{
	int i, sum = 0;
	int n[8] = { 100, 200, 300, 400, 500, 600, 700, 800 };
	double mean;
	int* ptr;
	ptr = n;
	for (i = 0; i < 8; i++)
		sum += *(ptr + i);
	mean = (float)sum / 8.0;
	printf("%d, %f", sum, mean); // 360, 450.000000
	return 0;
}
