class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
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
        for (int i = 0; i < ans.size(); ++i) {
            if (i & 1) reverse(ans[i].begin(), ans[i].end());
        }
        return ans;
    }
};