#include <stdio.h>

int main() {
	int a;
	printf("줄 갯수는? : ");
	scanf_s("%d", &a);
	for (int i = 1; i <= a; i++) {
		for (int j = 0; j < a - i; j++)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}
