class node:
    def __init__(self,val):
        self.val=val
        self.next=None
node1=node(5)
node2=node(9)
node3=node(1)
node4=node(7)
node5=node(6)
node1.next=node2
node2.next=node3
node3.next=node4
node4.next=node5

def remove_nth_node(head,target):
    curr=head
    prev=None
    if target==head:
        return head.next
    while curr!=None:
        if curr==target:
            prev.next=curr.next
            break
        prev=curr
        curr=curr.next
    return head
nd=remove_nth_node(node1,node4)
while nd!=None:
    print(nd.val)
    nd=nd.next #tc=o(n) sc=o(n)