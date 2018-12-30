#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char in[256], done[10];
	int b, p, c = 3;

	printf("Assignment #2-3, Stephen Barrack\n> ");
	while (c > 2 || c < 1) {
		fgets(in, 65, stdin);
		c = p = 0;
		for (char *out = strtok(in, " \n"); out != NULL; out = strtok(NULL, " \n")) {
			c++;
			b = 1;
			for (int i = 0; i < strlen(out); i++) {
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
		}
		if (c > 2 || c < 1) {
			printf("ERROR! Incorrect number of tokens found.\n> ");
		}
	}
	if (c == 1) {
		for (int i = 4; i < 8; i++) {
			done[i] = ' ';
		}
	}
	done[8] = '\n';
	done[9] = '\0';
	printf("%s", done);
	
	return 0;
}
