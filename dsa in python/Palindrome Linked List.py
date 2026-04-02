class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
def list_to_linkedlist(items):
    if not items:
        return None
    head=ListNode(items[0])
    current=head
    for val in items[1:]:
        current.next=ListNode(val)
        current=current.next
    return head
s=[1,2]
list1=list_to_linkedlist(s)
#brute force

#reverse
# def reverse(s):
#     current=s
#     prev=None
#     while current:
#         temp=current.next
#         current.next=prev
#         prev=current
#         current=temp
#         head=prev
#     return prev
# #copy

# prev=None
# def copy(current):
#     dummy=ListNode()
#     tail=dummy
#     while current:
#         tail.next=ListNode(current.val)
#         tail=tail.next
#         current=current.next
#     return dummy.next

# rev=reverse(copy(list1))


# current=rev
# tail=list1
# while current:
#     if current.val!=tail.val:
#         print(False)
#         break
#     current=current.next
#     tail=tail.next
#     print(True)

#optimal
#find mid and reach mid
def find_mid(s):
    slow=s
    fast=s
    while fast.next and fast.next.next:
        slow=slow.next
        fast=fast.next.next
    return slow
mid=find_mid(list1)

# after mid all reverse
def reverse(s):
    current=s.next
    prev=None
    while current:
        temp=current.next
        current.next=prev
        prev=current
        current=temp
    return prev
rev=reverse(mid)

def check(x,y):
    while y:
        if x.val!=y.val:
            return False
        x=x.next
        y=y.next
    return True
print(check(list1,rev))  