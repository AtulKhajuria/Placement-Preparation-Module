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
    
    ListNode* reverse(ListNode* head){
        if(!head or !head->next) return head;
        
        ListNode* tmp=head->next;
        ListNode* ans = reverse(tmp);
        tmp->next=head;
        head->next=NULL;
        return ans;
         
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head or !head->next or left==right) return head;
        
        ListNode* prev=head;
        ListNode* tmp = head;
        
        int k=1;
        while(tmp and k!=left){
            prev=tmp;
            tmp=tmp->next;
            k++;
        }
        ListNode* node=tmp;
        
        while(tmp and k!=right){
            tmp=tmp->next;
            k++;
        }
        
        ListNode* nxt = tmp->next;
        tmp->next=NULL;
        
        ListNode* rev = reverse(node);
        node->next = nxt;
        
        if(left!=1)
            prev->next=rev;
        else head = rev;
        
        return head;
    }
    };