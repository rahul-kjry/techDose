class Solution {
public:
    int dp[3001][3001];
    int g1(vector<int> & nums, int cur, int pre) {
        if (cur >= nums.size()) {
            return 0;
        }
        if (dp[cur][pre + 1] != -1) {
            return dp[cur][pre + 1];
        } 
        int take(0), skip = g1(nums, cur + 1, pre);
        if (pre == -1 or nums[cur] > nums[pre]) {
            take = 1 + g1(nums, cur + 1, cur);
        }
        return dp[cur][pre + 1] = max(take, skip);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        return g1(nums, 0, -1);
    }
};