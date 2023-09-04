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
    int res = INT_MIN;
    int g(TreeNode * root) {
        if (not root) return 0;
        int lft = max(g(root -> left), 0);
        int rgt = max(g(root -> right), 0);
        int val = root -> val;
        res = max({res, lft + val + rgt});
        return val + max(lft, rgt);
    }
    
    int maxPathSum(TreeNode* root) {
        g(root);
        return res;
    }
};