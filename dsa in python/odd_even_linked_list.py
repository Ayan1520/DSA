# brute force
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
def odd_even(head):
    val=[]
    curr=head
    while curr !=None:
        val.append(curr.val)
        if curr.next:
            curr=curr.next.next
        else:
            break
    curr=head.next
    while curr !=None:
        val.append(curr.val)
        if curr.next:
            curr=curr.next.next
        else:
            break
    n=len(val)
    curr=node(val[0])
    print(curr.val)
    for i in range(1,n):
        curr.next=curr
        curr=node(val[i])
        print(curr.val)
odd_even(node1)