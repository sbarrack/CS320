# CS320
This project is built to practice C in a way where each program in the repository builds on the previous program. Each program solves a given problem.
1. Compile `gcc program.c -o program.out`
2. Execute `./program.out`

## prog1_1.c
This program asks the user for their name and reponds with a greeting.

## prog2_1.c
This program takes up to 65 chars from stdin that are space delimited and terminated by a newline. It then outputs each token from the input on seperate lines, enclosed by equals signs. Multiple delimiters are ignored.

## prog2_2.c
This program prompts the user for an input with >. It then takes each token from the input and prints if the token is a STR or an INT for each token.

## prog2_3.c
This program runs similarly to prog2_2, however, includes an error condition in the event that more than two tokens are entered.

## prog2_4.c
This program runs similarly to prog2_3, however, includes another error condition in the event that too many chars are entered. It also continues to take input until the user enters "quit"; case insensitive. It takes a maximum of 20 chars.
