# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        dummy=prev = ListNode(0) #dummy node
        prev.next = head
        while head and head.next: #condition to check pairs
            a= head
            b= a.next
            c= b.next
            #reversing pair
            prev.next=b
            b.next=a
            a.next=c
        #updating pointers
            prev=a
            head=c
        return dummy.next