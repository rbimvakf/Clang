#include <stdio.h>

int main() {
	char str[20];
	printf("소문자로 입력 : ");
	scanf_s("%s", str, (int)sizeof(str));
	for (int j = 0; j < strlen(str); j++)
		str[j] = str[j] - 32; //str[j] -= 32;
	printf("%s\n", str);
	return 0;
}
