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
    vector<int> rightSideView(TreeNode* root) {
        if (not root) return {};
        vector<int> ans;
        queue<TreeNode *> que;
        que.push(root);
        while (not que.empty()) {
            for (int i = que.size(); i > 0; --i) {
                TreeNode * tmp = que.front();
                que.pop();
                if (i == 1) {
                    ans.push_back(tmp -> val);
                }
                if (tmp -> left) {
                    que.push(tmp -> left);
                }
                if (tmp -> right) {
                    que.push(tmp -> right);
                }
            }
        }
        return ans;
    }
};