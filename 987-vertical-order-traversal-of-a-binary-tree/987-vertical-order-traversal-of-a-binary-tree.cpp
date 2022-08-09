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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto node=q.front();
            q.pop();
            TreeNode* p=node.first;
            int x=node.second.first, y=node.second.second;
            nodes[x][y].insert(p->val);
            if(p->left){
                q.push({p->left,{x-1,y+1}});
            }
            if(p->right){
                q.push({p->right,{x+1,y+1}});
            }
        }
        vector<vector<int>>ans;
        for(auto i:nodes){
            vector<int>col;
            for(auto j:i.second){
                col.insert(col.end(),j.second.begin(),j.second.end());
            }
            ans.push_back(col);   
        }
            return ans;
    }
};