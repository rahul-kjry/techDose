class Solution {
public:
    #define ll long long
    ll tsum;
    ll dp[201][20001];
    bool g(vector<int> & nums, int ind, int sum) {
        if (ind >= nums.size()) {
            return sum == tsum / 2;
        }
        if (dp[ind][sum] != -1) {
            return dp[ind][sum];
        }
        bool may1 = g(nums, ind + 1, sum + nums[ind]);
        bool may2 = g(nums, ind + 1, sum);
        return dp[ind][sum] = may1 or may2;
    }
    bool canPartition(vector<int>& nums) {
        tsum = accumulate(nums.begin(), nums.end(), 0LL);
        memset(dp, -1, sizeof(dp));
        if (tsum & 1) {
            return false;
        }
        return g(nums, 0, 0);
    }
};