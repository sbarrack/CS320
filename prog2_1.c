#include <stdio.h>
#include <string.h>

int main() {
	char in[256];

	printf("Assignment #2-1, Stephen Barrack\n");
	fgets(in, 64, stdin);
	for (char *out = strtok(in, " \n"); out != NULL; out = strtok(NULL, " \n")) {
		printf("=%s=\n", out);
	}

	return 0;
}
