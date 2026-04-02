class stackusingqueue:
    def __init__(self):
        self.items1=[]
        self.items2=[]
    def enqueue(self,item):
        while len(self.items1)!=0:
            x=self.items1.pop()
            self.items2.append(x)
        self.items1.append(item)
        while len(self.items2)!=0:
            y=self.items2.pop()
            self.items1.append(y)
    def dequeue(self):
        self.items1.pop(0)
s=stackusingqueue()
s.enqueue(0)
s.enqueue(1)
s.dequeue()
print(s.items1)
    

