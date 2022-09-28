class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        for(int i=0; i<len; ++i) {
            if(i > 0 and nums[i] == nums[i-1]) 
                continue;
            int lo = i + 1, hi = len - 1;
            while(lo < hi) {
                int sm = nums[i] + nums[lo] + nums[hi];
                if(sm > 0) {
                    -- hi;
                }
                else if(sm < 0) {
                    ++ lo;
                }
                else {
                    ans.push_back({nums[i], nums[lo], nums[hi]});
                    ++ lo;
                    while(nums[lo] == nums[lo - 1] and lo < hi) {
                        ++ lo;
                    }
                }
            }
        }
        return ans;
    }