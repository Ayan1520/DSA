from httpx import head


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
# optimal 
def cycle(head):
    fast=head
    slow=head
    while fast != None and fast.next != None:
        slow=slow.next
        fast=fast.next.next
        if slow==fast:
            slow=head
        while slow!=fast:
            slow=slow.next
            fast=fast.next
            return slow.val
    return None
print(cycle(node1))