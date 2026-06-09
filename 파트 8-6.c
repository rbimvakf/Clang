#include <stdio.h>
#define N 10

int main() {
	char a[N] = "C-LANGUAGE";
	for (int i = 0; i < N; i++)
		printf("%c", a[N - 1 - i]);
}
