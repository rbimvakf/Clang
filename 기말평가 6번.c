#include <stdio.h>
#define SIZE 10

int main() {
	int i, j, temp;
	int iteration;
	int x[SIZE] = { 89, 95, 47, 33, 58, 73, 44, 86, 29, 52 };
	printf("원래의 데이터 : ");
	for (j = 0; j < SIZE; j++) 
		printf("%d, ", x[j]);
	printf("\n");
	for (iteration = 1; iteration < SIZE; iteration++) {
		for (i = 0; i < SIZE - 1; i++) {
			if (x[i] < x[i + 1]) {
				temp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = temp;
			}
		}
	}
	printf("결과값 : ");
	for (j = 0; j < SIZE; j++)
		printf("%d, ", x[j]);
	return 0;
}
