#include <stdio.h>

func(char a, int b, double c, char *d) {
	printf("%c %d %f %s", a, b, c, d);
}

int main() {
	char c = 'z';
	int n1 = 50;
	double d = 77.777;
	char* str = "C Programming";
	func(c, n1, d, str);
	return 0;
}
