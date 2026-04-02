class node:
    def __init__(self,val):
        self.val=val
        self.next=None
node1=node(5)
node2=node(9)
node3=node(1)
node4=node(7)
node5=node(6)
node6=node(1)
node7=node(9)
node8=node(2)
node9=node(8)
node1.next=node2
node2.next=node3
node3.next=node4
node4.next=node5
node5.next=node6
node6.next=node7
node7.next=node8
node8.next=node9
node9.next=node3

# brute force ...

def cycle(head):
    temp=head
    my_set=set()
    while temp!=None:
        if temp in my_set:
            return True
        my_set.add(temp)
        temp=temp.next
    return False
print(cycle(node1)) #tc = o(n) sc=o(n)

# optimal 

def cycle(head):
    fast=head
    slow=head
    while fast!=None and fast.next!=None:
        fast=fast.next.next
        slow=slow.next
        if slow==fast:
            return True

    return False
print(cycle(node1))
