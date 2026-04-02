class node:
    def __init__(self,data):
        self.data=data
        self.prev=None
        self.next=None
class queue_using_dll:
    def __init__(self):
        self.head=None
    def push(self,val):
        new_node=node(val)
        if self.head==None:
            self.head=new_node
        else:
            curr=self.head
            while curr.next!=None:
                curr=curr.next
            curr.next=new_node
            new_node.prev=curr
    def pop(self):
        value=self.head.data
        self.head=self.head.next
        if self.head!=None:
            self.head.prev=None
        return value