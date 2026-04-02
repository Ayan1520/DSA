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

def insert(head,val,position):
    new_node=node(val)
    if position ==0:
        new_node.next=head
        node1=new_node
        return new_node
    count=0
    curr=head
    prev_node=None
    while count<position and curr != None:
        prev_node=curr
        curr=curr.next
        count+=1
    prev_node.next=new_node
    new_node.next=curr
    return head
node1=insert(node1, 99, 1)
curr=node1
while curr!=None:
    print(curr.val)
    curr=curr.next