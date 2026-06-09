#include <stdio.h>

int main() {
	int a, b;
	printf("출력할 단수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("출력할 열를 입력하세요 : ");
	scanf_s("%d", &b);
	for (int i = 2; i <= b; i++) {
		for (int j = 1; j <= a; j++)
			printf("%d*%d=%d  ", i, j, i*j);
		printf("\n");
	}
	return 0;
}
