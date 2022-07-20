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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next)
            return head;
        int i=1;
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            temp=temp->next;
            len++;
        }
        k%=len;
        while(i<=k){
            ListNode* temp=head, *prev;
            while(temp->next!=nullptr){
                prev=temp;
                temp=temp->next;
            }
            prev->next=nullptr;
            temp->next=head;
            head=temp;
            i++;
        }
        return head;
    }
};
// class Solution{
//     public:
//     ListNode* rotateRight(ListNode* head, int k) {
//     if(!head) return head;
//     int len = 1;    
//     ListNode *p = head;
//     while(p->next) { len++; p = p->next; }
//     p->next = head;
//     if(k %= len)
//         for(int i = 0; i < len-k; ++i, p=p->next) ; 
//     ListNode* newHead = p->next;
//     p->next = NULL;
//     return newHead;
// }
// };
