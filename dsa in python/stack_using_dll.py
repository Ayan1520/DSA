class node:
    def __init__(self,data):
        self.data=data
        self.prev=None
        self.next=None
class stackusingdll:
    def __init__(self):
        self.head=None
    def push(self,val):
        new_node=node(val)
        if self.head==None:
            self.head=new_node
        else:
            new_node.next=self.head
            self.head.prev=new_node
            self.head=new_node
    def pop(self):
        value=self.head.data
        self.head=self.head.next
        if self.head != None:
            self.head.prev=None
        return value
    def top(self):
        top=self.head.data


    def print_stack(self):
        temp = self.head
        while temp:
            print(temp.data, end=" ")
            temp = temp.next
        print()
s=stackusingdll()
s.push(10)
s.push(20)
s.push(30)

s.print_stack()   # 30 20 10

print(s.pop())    # 30
print(s.top())    # 20
s.print_stack()  