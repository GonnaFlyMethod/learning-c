#include <stdio.h>

int main() {
	char buff[100];

	char index = 0, c = 0;

	printf("Enter a string: ");

	while ((c = getchar()) != '\n' && index < sizeof(buff) - 1) {
		buff[index] = c;
		index++;
	}

	buff[index] = '\0';

	printf("You have printed: %s\n", buff);

	return 0;
}