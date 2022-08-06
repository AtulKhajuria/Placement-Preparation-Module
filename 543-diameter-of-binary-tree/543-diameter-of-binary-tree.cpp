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
    int diameter=0;
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        calDiameter(root);
        return diameter;
    }
    int calDiameter(TreeNode* root){
        if(!root)return 0;
        int lh=calDiameter(root->left);
        int rh=calDiameter(root->right);
        diameter=max(diameter,(lh+rh));
        return max(lh,rh)+1;
    }
};