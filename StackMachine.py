class StackMachine:
  def __init__(self):
    self.stack = []
  def push(self, num):
    self.stack.append(num)
  def pop(self):
    return self.stack.pop()
  def add(self):
    if len(self.stack) > 1:
      self.stack.append(self.stack.pop() + self.stack.pop())
  def sub(self):
    if len(self.stack) > 1:
      self.stack.append(self.stack.pop() - self.stack.pop())
  def mul(self):
    if len(self.stack) > 1:
      self.stack.append(self.stack.pop() * self.stack.pop())
  def div(self):
    if len(self.stack) > 1:
      self.stack.append(self.stack.pop() / self.stack.pop())
  def mod(self):
    if len(self.stack) > 1:
      self.stack.append(self.stack.pop() % self.stack.pop())
