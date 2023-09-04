class Solution {
public:
    int dp[301][5001];
    int g(vector<int> & nums, int sum, int ind) {
        if (sum < 0) {
            return 0;
        }
        if (ind >= nums.size()) {
            return sum == 0;
        }
        if (dp[ind][sum] != -1) {
            return dp[ind][sum];
        }
        int pick = g(nums, sum - nums[ind], ind);
        int skip = g(nums, sum, ind + 1);
        return dp[ind][sum] = pick + skip;
    }
    int change(int sum, vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return g(nums, sum, 0);
    }
};