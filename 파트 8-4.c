#include <stdio.h>
#define N 10

int main() {
	int b;
	int a[N] = { 34, -30, 26, 85, 70, -5, 125, 65, 32, 90 };
	for (int i = 1; i < N; i++) 
		for (int j = 0; j < N - 1; j++) 
			if (a[j] > a[j + 1]) {
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
	for (int i = 0; i < N - 1; i++) 
		printf("%d, ", a[i]);
	printf("%d", a[N - 1]);
}
