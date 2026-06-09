#include <stdio.h>

func(int a[6], int b[2][3]) {
	for (int i = 0; i < 6; i++) 
		printf("%d ", a[i]);
	printf("\n");

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			printf("%d ", b[i][j]);
}

int main() {
	int arr1[6] = { 10, 20, 30, 40, 50, 60 };
	int arr2[2][3] = { {100, 200, 300}, {400, 500, 600} };
	func(arr1, arr2);
	return 0;
}
