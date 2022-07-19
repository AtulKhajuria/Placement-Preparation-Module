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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res;
        ListNode* headptr=nullptr;
        int carry=0;
        int sum=0;
        while(l1!=nullptr || l2!=nullptr || carry!=0){
            int val1=l1 !=nullptr ? l1->val : 0;
            int val2=l2 !=nullptr ? l2->val : 0;
            sum=val1+val2+carry;
            if(headptr==nullptr){
                res=new ListNode(sum%10);
                headptr=res;
            }
            else{
                res->next=new ListNode(sum%10);
                res=res->next;
            }
            carry=sum/10;
            if(l1!=nullptr)
            l1=l1->next;
            if(l2!=nullptr)
            l2=l2->next;
        }
        return headptr;
    }
};