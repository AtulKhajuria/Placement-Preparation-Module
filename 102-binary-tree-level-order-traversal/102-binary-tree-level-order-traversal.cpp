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


class Solution{
    public:
        vector<vector<int>> levelOrder(TreeNode* root){
            if(!root)return {};
            vector<vector<int>>ans;
            queue<TreeNode*>q;
            q.push(root);
            while(!q.empty()){
                int cnt=q.size();
                ans.emplace_back();
                while(cnt--){
                    root=q.front();
                    q.pop();
                    ans.back().push_back(root->val);
                    if(root->left)q.push(root->left);
                    if(root->right)q.push(root->right);
                }
            }
            return ans;
        }
};