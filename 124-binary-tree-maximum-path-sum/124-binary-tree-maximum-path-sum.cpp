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
    int maxSum=INT_MIN;
    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxSum;
    }
    int solve(TreeNode* root){
        if(root==NULL)
            return 0;
        int left=max(0,solve(root->left));
        int right=max(0,solve(root->right));
        maxSum=max(maxSum,left+right+root->val);
        return max(left,right)+root->val;
    }
};