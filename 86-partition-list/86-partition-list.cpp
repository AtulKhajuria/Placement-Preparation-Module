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
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
        ListNode* dummyLeft=new ListNode(0);
        ListNode* left=dummyLeft;
        ListNode* dummyRight=new ListNode(0);
        ListNode* right=dummyRight;
        while(temp!=NULL){
            if(temp->val<x){
                left->next=temp;
                left=left->next;
            }
            else{
                right->next=temp;
                right=right->next;
            }
            temp=temp->next;
        }
        right->next=NULL;
        left->next=dummyRight->next;
        return dummyLeft->next;
    }
};