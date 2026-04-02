class queue:
    def __init__(self):
        self.items=[]
    def enqueue(self,item):
        self.items.append(item)
    def dequeue(self):
        x=self.items.pop(0)
        return x
    def front(self):
        return self.items[0]
    def rear(self):
        return self.items[-1]
q=queue()
q.enqueue(10)
q.enqueue(1)
q.enqueue(5)
q.dequeue()
print(q.items)