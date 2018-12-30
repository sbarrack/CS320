# CS320
This project is built to practice several languages from the Fall 2017 semester. Each program solves a given problem.

## Prog1
1. Compile `gcc program.c -o program.out`
2. Execute `./program.out`

### prog1_1.c
This program asks the user for their name and reponds with a greeting.

## Prog2
1. Compile `gcc program.c -o program.out`
2. Execute `./program.out`

### prog2_1.c
This program takes up to 65 chars from stdin that are space delimited and terminated by a newline. It then outputs each token from the input on seperate lines, enclosed by equals signs. Multiple delimiters are ignored.

### prog2_2.c
This program prompts the user for an input with >. It then takes each token from the input and prints if the token is a STR or an INT for each token.

### prog2_3.c
This program runs similarly to prog2_2, however, includes an error condition in the event that more than two tokens are entered.

### prog2_4.c
This program runs similarly to prog2_3, however, includes another error condition in the event that too many chars are entered. It also continues to take input until the user enters "quit"; case insensitive. It takes a maximum of 20 chars.

## Prog3
You need the lua-5.3.4 source files to execute prog3.

### prog3_1.cpp
This program takes the name of a Lua file as a command line argument and executes it within a Lua environment in the program.
1. Compile `g++ prog3_1.cpp –o prog3_1.out –I ../lua-5.3.4/src –L ../lua-5.3.4/src –l lua –l m –l dl`
2. Run `./prog3_1.out prog3_2.lua`

### prog3_2.lua
This program has the InfixToPostfix() function which inputs a single string, tokenizes it (space delimeted), and returns a postfix string.

### prog3_3.cpp
This program operates the same as prog3_1 but recieves an additional command line input and executes the InfixToPostfix() function to return the resulting postfix string from the Lua stack.
1. Compile `g++ prog3_3.cpp –o prog3_3.out –I ../lua-5.3.4/src –L ../lua-5.3.4/src –l lua –l m –l dl`
2. Run `./prog3_3.out prog3_2.lua`
