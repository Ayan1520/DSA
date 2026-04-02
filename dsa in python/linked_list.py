# node --> store data and next adress
# single linked list --> move forward and not backward
class node:
    def __init__(self,val):
        self.val=val
        self.next=None
node1=node(5)
node2=node(10)
node3=node(12)
node4=node(9)
node1.next=node2
node2.next=node3
node3.next=node4
print(node1) # print adress
print(node1.val)