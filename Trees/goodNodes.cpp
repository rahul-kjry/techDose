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
    int mx = 0;
    void g (TreeNode * root, int len) {
        mx = max(mx, len);
        if (not root) {
            return ;
        }
        if (root -> left and root -> left -> val >= root -> val) {
            g(root -> left, len + 1);
        } 
        if (root -> right and root -> right -> val >= root -> val) {
            g(root -> right, len + 1);
        } 
    }
    int goodNodes(TreeNode* root) {
        g(root, 0);
        return mx;
    }
};