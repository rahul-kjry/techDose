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
    bool helper(TreeNode * a, TreeNode * b) {
        if(not a and not b) return true;
        if((not a || not b) or (a -> val != b -> val)) return false;
        return helper(a -> left, b -> right) and helper(a -> right, b -> left);
    } 
    
    bool isSymmetric(TreeNode* root) {
        return helper(root->left, root->right);
    }
};