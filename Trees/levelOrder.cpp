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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(! root) return {};
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        q.push(root);
        while(! q.empty()) {
            int len = q.size();
            vector<int> subAns;
            for(int i=0; i<len; ++i) {
                subAns.push_back(q.front()->val);
                TreeNode * lft = q.front()->left;
                TreeNode * rgt = q.front()->right;
                q.pop();
                if(lft) q.push(lft);
                if(rgt) q.push(rgt);
            } 
            ans.push_back(subAns);
        }
        return ans;
    }
};