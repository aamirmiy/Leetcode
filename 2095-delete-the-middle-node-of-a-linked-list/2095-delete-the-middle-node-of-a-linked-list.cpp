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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL){
            head=NULL;
            return head;
        }
        ListNode* temp = head;
        int cnt= 0;
        while(temp)
        {
            temp=temp->next;
            cnt++;
        }
        int len = 0;
        len=cnt/2+1;
        temp = head;
        while(len>2)
        {
            temp=temp->next;
            len--;
        }
            temp->next = temp->next->next;
        return head;
    }
};