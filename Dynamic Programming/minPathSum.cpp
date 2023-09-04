class Solution {
public:
    int minPathSum(vector<vector<int>>& mat) {
        int rows = mat.size(), cols = mat[0].size();
        for (int i = 1; i < rows; ++i) {
            mat[i][0] += mat[i - 1][0];
        }
        for (int j = 1; j < cols; ++j) {
            mat[0][j] += mat[0][j - 1];
        }
        for (int i = 1; i < rows; ++i) {
            for (int j = 1; j < cols; ++j) {
                mat[i][j] += min(mat[i - 1][j], mat[i][j - 1]);
            }
        }
        return mat[rows - 1][cols - 1];
    }
};