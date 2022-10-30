# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy=prev = ListNode(0) #dummy node
        prev.next = head
        while head and head.next:
            a= head
            b= a.next
            c= b.next
            
            prev.next=b
            b.next=a
            a.next=c
        
            prev=a
            head=c
        return dummy.next