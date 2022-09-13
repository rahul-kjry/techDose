class Solution {
public:
    int maxArea(vector<int>& nums) {
        int lo = 0, hi = nums.size() - 1;
        int mx = 0;
        while(lo < hi) {
            mx = max(mx, (hi - lo) * min(nums[lo], nums[hi]));
            nums[lo] < nums[hi] ? ++ lo : -- hi;
        }
        return mx;
    }
};