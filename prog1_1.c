#include <stdio.h>

int main() {
    char string[100];

    printf("Assignment #1-1, Stephen Barrack\n");
    printf("What is your name?\n");
    fgets(string, 100, stdin);
    printf("Hello, %s", string);

    return 0;
}
