#include <stdio.h>

int main() {
	int a[4][4] = { 5, 9, 4, 8, 2, 0, -5, 2, 7, -6, 3, 4, 3, 6, -4, 0 };
	
	for (int i = 0; i < 4; i++) {
		int sum = 0;

		for (int j = 0; j < 4; j++) 
			sum += a[i][j];

		printf("%d\n", sum);
		/*
		* 26
		* -1
		* 8
		* 5
		*/
	}

	for (int i = 0; i < 4; i++) {
		int sum = 0;

		for (int j = 0; j < 4; j++)
			sum += a[j][i];

		printf("%d\n", sum);
		/*
		* 17
		* 9
		* -2
		* 14
		*/
	}
	return 0;
}
