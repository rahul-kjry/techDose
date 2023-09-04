class Solution {
public:
    int findLength(vector<int>& n1, vector<int>& n2) {
        int l1 = n1.size(), l2 = n2.size(), mx = 0;
        vector<vector<int>> dp(l1 + 1, vector<int>(l2 + 1, 0));
        for (int i = 0; i < l1; ++i) {
            for (int j = 0; j < l2; ++j) {
                if (n1[i] == n2[j]) {
                    mx = max(mx, dp[i + 1][j + 1] = dp[i][j] + 1);
                }
            }
        }
        return mx;
    }
};