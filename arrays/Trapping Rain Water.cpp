class Solution {
public:
    int trap(vector<int>& nums) {
        int len = nums.size();
        if(len == 0) return 0;
        int lo = 0, hi = len - 1;
        int ans = 0;
        int lmx = nums[lo], rmx = nums[hi];
        while (lo < hi) {
            if(lmx < rmx) {
                ++ lo;
                lmx = max(lmx, nums[lo]);
                ans += lmx - nums[lo];
            } else {
                -- hi;
                rmx = max(rmx, nums[hi]);
                ans += rmx - nums[hi];
            }
        }
        return ans;
    }
};