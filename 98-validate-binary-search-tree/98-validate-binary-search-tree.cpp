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
private:
  bool isValidBST(TreeNode *root, TreeNode *lb, TreeNode *rb) {
    if (!root) return true;
    if ((lb && root->val <= lb->val) || (rb && root->val >= rb->val)) return false;
    return isValidBST(root->left, lb, root) && isValidBST(root->right, root, rb);
  }
public:
  bool isValidBST(TreeNode* root) {
    return isValidBST(root, NULL, NULL);
  }
};