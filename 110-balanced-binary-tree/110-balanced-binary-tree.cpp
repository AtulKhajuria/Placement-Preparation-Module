/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool ans=true;
    int checkBalance(TreeNode* root){
        if(root==NULL)return 0;
        int lb=1+checkBalance(root->left);
        int rb=1+checkBalance(root->right);
        if(abs(lb-rb)>1)ans=false;
        return max(lb,rb);
    }
    bool isBalanced(TreeNode* root) {
        int val=checkBalance(root);
        return ans;
    }
};