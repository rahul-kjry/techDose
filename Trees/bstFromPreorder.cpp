/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode dummy_root(INT_MAX);
        stack<TreeNode *> s({&dummy_root});
        for (int x : preorder) {
            auto n = new TreeNode(x);
            TreeNode *p = nullptr;
            while (s.top()->val < x) {
                p = s.top();
                s.pop();
            }
            if (p) {
                p->right = n;
            } else {
                s.top()->left = n;
            }
            s.push(n);
        }
        return dummy_root.left;
    }
};