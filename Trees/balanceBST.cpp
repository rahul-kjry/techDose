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
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        auto it = [&](auto && it, TreeNode * root) {
            if (not root) {
                return ;
            }
            it (it, root -> left);
            arr.push_back(root -> val);
            it (it, root -> right);
        };
        it (it, root);
        auto f1 = [&](auto && f1, int lo, int hi) {
            if (lo > hi) {
                return NULL;
            }
            int md = lo + (hi - lo) / 2;
            TreeNode * tmp = new TreeNode(arr[md]);
            tmp -> left = f1(f1, lo, md - 1);
            tmp -> right = f1(f1, md + 1, hi);
            return tmp;
        };

        TreeNode * res = f1(f1, 0, arr.size() - 1);
        return nullptr;
    }
};