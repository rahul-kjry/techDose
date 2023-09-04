class Solution {
public:
    int memo[601][101][101];
    int g(vector<string> & strs, int m, int n, int i) {
        if (i == strs.size() or m < 0 or n < 0) {
            return 0;
        }
        if (memo[i][m][n] != -1) {
            return memo[i][m][n];
        }
        int may1 = g(strs, m, n, i + 1);
        int zers = count(strs[i].begin(), strs[i].end(), '0');
        int ones = count(strs[i].begin(), strs[i].end(), '1');
        int may2 = 0;
        if (m - zers >= 0 and n - ones >= 0) {
             may2 = 1 + g(strs, m - zers, n - ones, i + 1);
        }
        return memo[i][m][n] = max(may1, may2);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(memo, -1, sizeof(memo));
        return g(strs, m, n, 0);
    }
};