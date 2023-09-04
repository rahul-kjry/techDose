class Solution {
public:
    string longestPalindrome(string str) {
        string rev(str.rbegin(), str.rend());
        int len = str.size(), max = 0;
        int max_len = 0;
        string max_str = "";
        vector<vector<int>> dp(len + 1, vector<int>(len + 1, 0));
        for (int i = 1; i <= len; ++i) {
            for (int j = 1; j <= len; ++j) {
                if (rev[i - 1] == str[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                if (dp[i][j] > max_len) {
                    string s1 = rev.substr(i - dp[i][j], dp[i][j]);
                    string s2(s1.rbegin(), s1.rend());
                    if (s1 == s2) {
                        max_len = dp[i][j];
                        max_str = s1;
                    }
                }
            }
        }
        return max_str;
    }
};