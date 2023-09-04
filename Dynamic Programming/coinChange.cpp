#define MAX 10000
class Solution {
public:

    int g(int ind, vector<int> & nums, int tar) {
        if (ind >= nums.size()) {
            return MAX;
        }
        int ans = g(ind + 1, nums, tar);
        for (int i = ind; i < nums.size(); ++i) {
            while (tar > 0) {
                tar -= nums[i];
                ans = min(ans, 1 + g(i + 1, nums, tar));
            }
        }
        return ans;
    }
    int coinChange(vector<int>& nums, int tar) {
        return g(0, nums, tar);
    }
};