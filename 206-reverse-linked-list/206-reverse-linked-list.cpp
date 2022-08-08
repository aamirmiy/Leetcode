/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head || head->next==NULL)
            return head;
        ListNode* p = nullptr;
        //prev = NULL;
        ListNode* curr = head;
        ListNode* temp = nullptr;
        while(curr)
        {
            temp = curr->next;
            curr->next = p;
            p=curr;
            curr= temp;
        }
        return p;
    }
};