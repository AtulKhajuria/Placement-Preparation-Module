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
    stack<TreeNode*>st;
    void preOrder(TreeNode *root){
        if(root==NULL)
            return;
        TreeNode* temp=root;
        st.push(temp);
        preOrder(root->left);
        preOrder(root->right);
    }
    void flatten(TreeNode* root) {
        if(root==NULL)
            return;
        preOrder(root);
        TreeNode* prev=st.top();
        st.pop();
        while(!st.empty()){
            TreeNode* cur=st.top();
            cur->left=NULL;
            cur->right=prev;
            prev=cur;
            st.pop();
        }
    }
};