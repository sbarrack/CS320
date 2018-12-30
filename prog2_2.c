#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char in[256];
	int b;

	printf("Assignment #2-2, Stephen Barrack\n> ");
	fgets(in, sizeof in, stdin);
	for (char *out = strtok(in, " \n"); out != NULL; out = strtok(NULL, " \n")) {
		b = 1;
		for (int i = 0; i < strlen(out); i++) {
			if (!isdigit(out[i])) {
				b = 0;
			}
		}
		if (b == 1) {
			printf("INT ");
		}
		else {
			printf("STR ");
		}
	}
	printf("\n");
	
	return 0;
}
