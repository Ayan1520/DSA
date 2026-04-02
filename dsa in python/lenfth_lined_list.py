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

# brute force
# def length(head):
#     temp=head
#     my_set=[]
#     while temp not in my_set:
#         my_set.append(temp)
#         temp=temp.next
#     return len(my_set)
# print(length(node1)) # tc = o(n) sc=o(n)

#optimal
def length(head):
    slow=head
    fast=head
    count=0
    while fast!=None and fast.next!=None:
        slow=slow.next
        fast=fast.next.next
        if slow==fast:
            count=1
            slow=slow.next
            while slow!=fast:
                slow=slow.next
                count+=1
            return count
print(length(node1))
