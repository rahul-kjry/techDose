class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int len = nums.size();
        for(int i=0; i<len; ++i) {
            int diff = target - nums[i];
            if(map[diff] == 0) {
                map[nums[i]] = i + 1;
            } else {
                return {map[diff] - 1, i};
            }
        }
        return {-1, -1};
    }
};