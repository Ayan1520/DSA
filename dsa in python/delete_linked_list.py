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
def delete_linkedlist(head,position):
    curr=head
    if position==0:
        head=curr.next
        return head
    prev_node=None
    count=0
    while curr!=None and count!=position:
        prev_node=curr
        curr=curr.next
        count+=1
    prev_node.next=curr.next
    return head
node1=delete_linkedlist(node1,3)
curr=node1
while curr!=None:
    print(curr.val)
    curr=curr.next



        