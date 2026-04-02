class node:
    def __init__(self,val):
        self.val=val
        self.next=None
node1=node(1)
node2=node(2)
node3=node(3)
node4=node(4)
node5=node(5)
node1.next=node2
node2.next=node3
node3.next=node4
node4.next=node5
fast=node1

slow=node2
while fast.next or fast.next.next or slow.next or slow.next.next :
    fast.next=slow.next
    fast=slow.next
    slow.next=fast.next
    slow=fast.next
print(node1.val)
print(node1.next.val)
print(node1.next.next.val)
# # print(slow.val)
# while  (slow.next!=None and slow.next.next!=None):
#     print(slow.next.next.val)
#     slow=slow.next.next
                                         