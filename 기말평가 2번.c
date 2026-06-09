#include <stdio.h>

int main() {
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int dal;
	printf("달을 입력 : ");
	scanf_s("%d", &dal);
	printf("%d월 달은 %d일 까지입니다", dal, month[dal-1]);
	return 0;
}
