class doubltlinkedlist:
    def __init__(self,val):
        self.val=val
        self.next=None
        self.prev=None
node1=doubltlinkedlist(5)
node2=doubltlinkedlist(9)
node3=doubltlinkedlist(1)
node4=doubltlinkedlist(7)
node5=doubltlinkedlist(6)
node1.next=node2
node2.prev=node1
node2.next=node3
node3.prev=node2
node3.next=node4
node4.prev=node3
node4.next=node5
node5.prev=node4

def insert_at_end(head,val):
    value=doubltlinkedlist(val)
    curr=head
    while curr.next!=None:
        curr=curr.next
    curr.next=value
    value.prev=curr
    return head
curr=insert_at_end(node1,10)
while curr!=None:
    print(curr.val)
    curr=curr.next #tc=o(n) #sc=o(1)