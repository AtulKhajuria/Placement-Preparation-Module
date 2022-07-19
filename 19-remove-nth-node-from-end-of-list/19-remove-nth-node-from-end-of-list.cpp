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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* frwrdPtr=head, *actualPtr=head;
        while(n--){
            frwrdPtr=frwrdPtr->next;
        }
        if(!frwrdPtr)
            return head->next;
        while(frwrdPtr->next!=NULL){
            actualPtr=actualPtr->next;
            frwrdPtr=frwrdPtr->next;
        }
        actualPtr->next=actualPtr->next->next;
        return head;
    }
};