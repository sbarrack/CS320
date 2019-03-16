# CS320
This project is built to practice several languages from the Fall 2017 semester. Each program solves a given problem.

## Prog1

### prog1_1.c
This program asks the user for their name and reponds with a greeting.
1. Compile `gcc prog1_1.c -o prog1_1.out`
2. Run `./prog1_1.out`

## Prog2
1. Compile `gcc program.c -o program.out`
2. Run `./program.out`

### prog2_1.c
This program takes up to 65 chars from stdin that are space delimited and terminated by a newline. It then outputs each token from the input on seperate lines, enclosed by equals signs. Multiple delimiters are ignored.

### prog2_2.c
This program prompts the user for an input with >. It then takes each token from the input and prints if the token is a STR or an INT for each token.

### prog2_3.c
This program runs similarly to prog2_2, however, includes an error condition in the event that more than two tokens are entered.

### prog2_4.c
This program runs similarly to prog2_3, however, includes another error condition in the event that too many chars are entered. It also continues to take input until the user enters "quit"; case insensitive. It takes a maximum of 20 chars.

## Prog3
You need the [lua-5.3.5 source files](https://www.lua.org/download.html) to execute prog3.

### prog3_1.cpp
This program takes the name of a Lua file as a command line argument and executes it within a Lua environment in the program.
1. Download & extract lua, then do `make linux`; if it complains about readline missing, `apt-get install libreadline-dev`
2. Compile `g++ prog3_1.cpp –o prog3_1.out –Ilua-5.3.5/src –Llua-5.3.5/src –llua –lm –ldl`
3. Run `./prog3_1.out prog3_2.lua`

### prog3_2.lua
This program has the InfixToPostfix() function which inputs a single string, tokenizes it (space delimeted), and returns a postfix string.

### prog3_3.cpp
This program operates the same as prog3_1 but recieves an additional command line input and executes the InfixToPostfix() function to return the resulting postfix string from the Lua stack.
1. Compile `g++ prog3_3.cpp –o prog3_3.out –Ilua-5.3.5/src –Llua-5.3.5/src –llua –lm –ldl`
2. Run `./prog3_3.out prog3_2.lua`

## Prog 4

### prog4_1.py
This program takes the name of a text file as a command line argument and tokenize it, space delimited, and print it to stdout seperated by commas.
1. Run `python3 prog4_1.py filename.txt`

### StackMachine.py
This program has 8 functions (push, pop, add, sub, mul, div, mod, and constructor) to implement the funtionality of a stack machine.

### prog4_2.py
This program receives the same input as prog4_1.py, tokenizes it, and uses the first token to perform any of the 8 functions from the stack.
1. Run `python3 prog4_2.py filename.txt`
