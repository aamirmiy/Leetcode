# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head:
            return head
        fast = head
        slow = head
        temp=head
        count = 1
        while temp:
            temp=temp.next
            count+=1
        for i in range(1, k):
            slow= slow.next
        for i in range(1, count-k):
            fast = fast.next
        slow.val,fast.val=fast.val,slow.val
        return head
        
        #use two pointer concept