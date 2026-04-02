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
def middle(head):
    fast=head
    slow=head
    while fast!=None and fast.next!=None:
        slow=slow.next
        fast=fast.next.next
    return slow
md=middle(node1)
print(md.val) # tc = o(n/2)
#sc=o(1)