class Solution {
public:
    int dp[1001][1001];
    int g(int i, int j, string & str1, string & str2, int len) {
        if (max(i, j) >= len) {
            return 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        if (str1[i] == str2[j]) {
            return dp[i][j] = 1 + g(i + 1, j + 1, str1, str2, len);
        }
        return dp[i][j] = max(g(i + 1, j, str1, str2, len), g(i, j + 1, str1, str2, len));
    }
    int longestPalindromeSubseq(string str1) {
        string str2(str1.rbegin(), str1.rend());
        memset(dp, -1, sizeof(dp));
        return g(0, 0, str1, str2, str1.size());
    }
};

