class Solution {
public:
    int dp[101][101];
    int g(vector<vector<int>> & mat, int i, int j) {
        if (i >= mat.size() or j >= mat[0].size() or mat[i][j] == 1) {
            return 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if (i == mat.size() - 1 and j == mat[0].size() - 1) {
            return 1;
        }
        return dp[i][j] = g(mat, i + 1, j) + g(mat, i, j + 1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& mat) {
        memset(dp, -1, sizeof(dp));
        return g(mat, 0, 0);
    }
};