# Definition for singly-linked list.
from dbm import dumb
from typing import Optional
class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
       current1=l1
       current2=l2
       carry=0
       sum=0
       dummy=ListNode(-1)
       tail=dummy
      while current1 or current2 or carry:
        v1 = current1.val if current1 else 0
    v2 = current2.val if current2 else 0

    total = v1 + v2 + carry
    carry = total // 10
    digit = total % 10

    tail.next = ListNode(digit)
    tail = tail.next

    if current1:
        current1 = current1.next
    if current2:
        current2 = current2.next

    
        
            
           
    
        