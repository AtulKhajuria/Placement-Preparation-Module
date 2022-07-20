/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast=head;
        ListNode* slow=head;
        if(head==NULL || head->next==NULL)
            return NULL;
        while(fast && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast)
                break;
        }
        if(slow==fast){
            while(head!=slow){
                head=head->next;
                slow=slow->next;
            }
            return head;
        }
        return NULL;
    }
};