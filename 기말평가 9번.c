#include <stdio.h>

int sum(int a, int b) {
	return a + b;
}

int main() {
	int n1, n2 = 0;
	printf("입력 : ");
	scanf_s("%d %d", &n1, &n2);
	printf("%d + %d = %d\n", n1, n2, sum(n1, n2));
	return 0;
}
