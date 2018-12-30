#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main( ) {
	char in[256], done[10];
	int b, p;
	int c = 3, size = 21;

	printf("Assignment #2-4, Stephen Barrack\n> ");
start:	while (c > 2 || c < 1 || size > 20) {
		c = p = size = 0;
		fgets(in, 256, stdin);
		for (int i = 0; i <= 21; i++) {
			if (in[i] == ' ') {
				size++;
			}
		}
		for (char *out = strtok(in, " \n"); out != NULL; out = strtok(NULL, " \n")) {
			c++;
			b = 1;
			for (int i = 0; i < strlen(out); i++) {
				size++;
				if (!isdigit(out[i])) {
					b = 0;
				}
			}
			if (b == 1) {
				done[p] = 'I';
				done[p + 1] = 'N';
				done[p + 2] = 'T';
			}
			else {
				done[p] = 'S';
				done[p + 1] = 'T';
				done[p + 2] = 'R';
			}
			done[p + 3] = ' ';
			p += 4;
			if (strcasecmp(out, "quit") == 0) {
				goto end;
			}
		}
		if (size > 20) {
			printf("ERROR! Input string too long.\n> ");
		}
		else if (c > 2 || c < 1) {
			printf("ERROR! Incorrect number of tokens found.\n> ");
		}
	}
	done[8] = '\n';
	done[9] = '\0';
	printf("%s> ", done);
	c = 3, size = 21;
	goto start;

end:	return 0;
}
