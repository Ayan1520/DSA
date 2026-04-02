class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
def  list_to_linklist(items):
    if len(items)==0:
        return None
    head=ListNode(items[0])
    current=head
    for val in items[1:]:
        current.next=ListNode(val)
        current=current.next
    return head
h= [1,2,3,4,5]
head=list_to_linklist(h)
current=head
prev=None
while current!=None:
    temp=current.next
    current.next=prev
    prev=current
    current=temp
    head=prev
current=head
while current:
    print(current.val)
    current=current.next

