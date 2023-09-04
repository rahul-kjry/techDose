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
    vector<int> vec;
    void preOrder(TreeNode * root) {
        if (! root) return;
        vec.emplace_back(root -> val);
        preOrder(root -> left);
        preOrder(root -> right);
    }
    void flatten(TreeNode* root) {
        if(! root) return;
        preOrder(root);
        root -> left = root -> right = NULL;
        TreeNode * ptr = root;
        for (int & i : vec) {
            TreeNode * tmp = new TreeNode(i);
            ptr -> right = tmp;
            ptr = tmp;
        }
        *root = *root -> right;
    }
};
