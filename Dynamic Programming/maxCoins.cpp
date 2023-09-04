class Solution {
public:
    long long dp[305][305];

    int g(int i, int j, vector<int> & nums) {
        if (i + 1 == j) {
            return 0;
        }
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        for (int k = i + 1; k < j; ++k) {
            int cur = nums[i] * nums[k] * nums[j] + g(i, k, nums) + g(k, j, nums);
            dp[i][j] = fmax(dp[i][j], cur);
        }
        return dp[i][j];
    }

    int maxCoins(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        nums.insert(nums.begin(), 1);
        nums.push_back(1);
        return g(0, nums.size() - 1, nums);
    }
};