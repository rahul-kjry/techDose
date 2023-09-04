class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int l1 = t1.size(), l2 = t2.size();
        vector<vector<int>> dp(l1 + 1, vector<int>(l2 + 1, 0));
        for (int i = 0; i < l1; ++i) {
            for (int j = 0; j < l2; ++j) {
                if (t1[i] == t2[j]) {
                    dp[i + 1][j + 1] = dp[i][j] + 1;
                }
                else {
                    dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
                }
            }
        }
        return dp[l1][l2];
    }
};