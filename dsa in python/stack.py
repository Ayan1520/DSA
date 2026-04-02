class stack:
    def __init__(self):
        self.items=[]
    def push(self,items):
        self.items.append(items)
    def pop(self):
        e=self.items.pop()
        return e
    def top(self):
        return self.items[-1]
s=stack()
s.push(10)
s.push(20)
s.push(30)
print(s.top)
    