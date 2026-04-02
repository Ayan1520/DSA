class node:
    def __init__(self,val):
        self.val=val
        self.next=None
class single_linkedlist:
    def __init__(self):
        self.head=None
    def append(self,val):
        new_node=node(val)
        if self.head==None:
            self.head=new_node
        else:
            curr=self.head
            while curr.next!=None:
                curr=curr.next
            curr.next=new_node
    def display(self):
        curr=self.head
        while curr!=None:
            print(curr.val,end=' ')
            curr=curr.next
lst = single_linkedlist()
lst.append(5)
lst.append(10)
lst.append(15)
lst.display()