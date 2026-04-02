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
def reverse(head):
    temp=head
    prev=None
    while temp!=None:
        font=temp.next
        temp.next=prev
        prev=temp
        temp=font
    return prev
curr=reverse(node1)
while curr!=None:
    print(curr.val)
    curr=curr.next

        