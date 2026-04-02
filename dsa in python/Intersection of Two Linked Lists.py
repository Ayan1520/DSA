listA = [4,1,8,4,5]
listB = [5,6,1,8,4,5]
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
lista=list_to_linkedlist(listA)
listb=list_to_linkedlist(listB)

current1=lista
prev1=None
while current1:
    temp=current1.next
    current1.next=prev1
    prev1=current1
    current1=temp
current1=prev1
while current1:
    print(current1.val)
    current1=current1.next
current2=listb
prev2=None
while current2.next:
    temp=current2.next
    current2.next=prev2
    prev1=current2
    current2=temp
print(current2.val)
# if current1==current2:
#     while current1!=current2:
