class queueusingstack:
    def __init__(self):
        self.items1=[]
        self.items2=[]
    def push(self,item):
        while len(self.items1)!=0:
            x=self.items1.pop()
            self.items2.append(x)
        self.items1.append(item)
        while len(self.items2)!=0:
            y=self.items2.pop()
            self.items1.append(y)
    def pop(self):
        self.items1.pop(0)
s=queueusingstack()
s.push(0)
s.push(1)
s.pop()
print(s.items1)