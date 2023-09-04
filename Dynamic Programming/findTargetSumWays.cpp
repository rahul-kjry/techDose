class Solution {
public:
    map<pair<int, int>, int> mp;
    int g(int i, vector<int> & nums, int tar) {
        if (i == nums.size()) {
            return tar == 0 ? 1 : 0;
        }
        if (mp.find({i, tar}) != mp.end()) {
            return mp[{i, tar}];
        }
        return mp[{i, tar}] = g(i + 1, nums, tar + nums[i]) + g(i + 1, nums, tar - nums[i]);
    }
    int findTargetSumWays(vector<int>& nums, int tar) {
        return g(0, nums, tar);
    }
};