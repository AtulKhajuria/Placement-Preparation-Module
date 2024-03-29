/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans;
        if((root->val>p->val&&root->val<q->val)||(root->val<p->val&&root->val>q->val)){
            return root;
        }
        else if(root->val==p->val||root->val==q->val)
            return root;
        else if(root->val>p->val){
            ans=lowestCommonAncestor(root->left,p,q);
        }
        else{
            ans=lowestCommonAncestor(root->right,p,q);
        }
        return ans;
    }
};