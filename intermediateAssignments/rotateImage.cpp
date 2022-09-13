class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int rl = mat.size();
        for(int r=0; r<rl; ++r) {
            for(int c=r; c<rl; ++c) {
                swap(mat[r][c], mat[c][r]);
            }
            reverse(mat[r].begin(), mat[r].end());
        }
    }
};