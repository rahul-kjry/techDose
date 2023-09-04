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
    
    bool help(TreeNode * root, long min, long max) {
        if(! root) {
            return true;
        }
        if(root -> val <= min or root->val >= max) {
            return false;
        }
        return help(root -> left, min, root -> val) and help(root -> right, root->val, max);
    }
    
    bool isValidBST(TreeNode* root) {
        return help(root, -1e18, 1e18);
    }
};