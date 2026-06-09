#include <stdio.h>
#define N 11

int main() {
	char a[N] = "C-LANGUAGE";
	for (int i = 0; i < N + 1; i++)
		printf("%c", a[N - i]);
}
