#include <stdio.h>

int main() {
	int a, b, c;
	printf("정수(3개) : ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (a > c) 
			printf("가장 큰 수 : %d\n", a);
		else
			printf("가장 큰 수 : %d\n", c);
	}
	else {
		if (b>c)
			printf("가장 큰 수 : %d\n", b);
		else
			printf("가장 큰 수 : %d\n", c);
	}
}
