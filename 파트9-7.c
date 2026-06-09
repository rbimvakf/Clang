#include <stdio.h>

int main() 
{
	int n;
	char* str[5] = { 
		"mouse",
		"keyboard",
		"monitor",
		"printer",
		"loudspeaker" 
	};
	for (n = 0; n < 5; n++)
		printf("%d %s\n", n, *(str + n));
	/*
	* 0, mouse
	* 1, keyboard
	* 2, monitor
	* 3, printer
	* 4, loudspeaker
	*/
	return 0;
}
