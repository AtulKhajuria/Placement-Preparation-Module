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
    bool hasCycle(ListNode *head) {
        ListNode *walker, *runner;
        if(head==nullptr)
            return false;
        walker=head;
        runner=head;
        while(runner->next!=nullptr && runner->next->next!=nullptr){
            walker=walker->next;
            runner=runner->next->next;
            if(walker==runner)
                return true;
        }
        return false;
    }
};