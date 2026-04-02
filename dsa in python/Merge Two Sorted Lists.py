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
list1=list_to_linkedlist([1,2,4])
list2=list_to_linkedlist([1,3,4])
i=list1
j=list2
dummy=ListNode()
tail=dummy
while i and j:
    if i.val<=j.val:
        tail.next=ListNode(i.val)
        i=i.next
    else:
        tail.next=ListNode(j.val)
        j=j.next
    tail=tail.next
while i:
    tail.next=ListNode(i.val)
    tail=tail.next
    i=i.next
while j:
    tail.next=ListNode(j.val)
    tail=tail.next
    j=j.next
h=dummy.next
while h:
    print(h.val)
    h=h.next
