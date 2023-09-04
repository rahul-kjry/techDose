class Solution {
public:
    static int[][] dp = new int[101][101];
    int rows, cols;
    static int g(int i, int j) {
        if (i >= rows || j >= cols) {
            return 0;
        }

        if (i == rows - 1 && j == cols - 1) {
            return 1;
        }
        return g(i + 1, j) + g(i, j + 1);
    }

    int uniquePaths(int m, int n) {
        rows = m, cols = n;
        for (int i = 0; i < 101; ++i) {
            Arrays.fill(dp[i], -1);
        }
        return g(0, 0);
    }
};