from typing import Optional



class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random

n1 = Node(7)
n2 = Node(13)
n3 = Node(11)
n4 = Node(10)
n5 = Node(1)

n1.next = n2
n2.next = n3
n3.next = n4
n4.next = n5

n2.random = n1
n3.random = n5
n4.random = n3

class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        #BRUTE FORCE
        stack=[]
        slow=head
        dummy=Node(-1)
        tail=dummy
        while slow:
            tail.next=slow
            if 
            stack.append(tail.random.val)
            slow=slow.next
            tail=tail.next
        print(stack)

sol = Solution()
sol.copyRandomList(n1)
