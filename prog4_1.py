print("Assignment #4-1, Stephen Barrack")
import sys

file = open(sys.argv[1])
lines = file.readlines()
for line in lines:
  line = line.split()
  line = ','.join(line)
  print(line)
file.close()
  