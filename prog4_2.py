print("Assignment #4-2, Stephen Barrack")
import sys
from StackMachine import StackMachine

stack = StackMachine()
file = open(sys.argv[1])
lines = file.readlines()
for line in lines:
  line = line.split()
  if line[0] is "push":
    stack.push(line[1])
  elif line[0] is "pop":
    print(stack.pop())
  elif line[0] is "add":
    stack.add()
  elif line[0] is "sub":
    stack.sub()
  elif line[0] is "mul":
    stack.mul()
  elif line[0] is "div":
    stack.div()
  elif line[0] is "mod":
    stack.mod()
file.close()
