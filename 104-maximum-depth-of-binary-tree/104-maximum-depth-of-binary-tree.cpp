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
    int maxi(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        return 1+max(maxi(root->left),maxi(root->right));
    }
    int maxDepth(TreeNode* root) {
        int depth=maxi(root);
        return depth;
    }
    
};