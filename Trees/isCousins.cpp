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
    unordered_map<int, int> level, parent;
    
    void tt(TreeNode * rt, int lvl, int pre) {
        if (not rt) {
            return ;
        }
        tt(rt -> left, lvl + 1, rt -> val);
        level[rt -> val] = lvl;
        parent[rt -> val] = pre;
        tt(rt -> right, lvl + 1, rt -> val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        tt(root, 0, -1);
        
        return level[x] == level[y] and parent[x] != parent[y];
    }
};