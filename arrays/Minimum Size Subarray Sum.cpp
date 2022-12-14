class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0, r = 0;
        int sum = 0;
        int n = nums.size();
        int min_length = INT_MAX;
        while (r < n) {
            sum += nums[r]; 
            while (sum >= target) {
                int length = r-l+1;
                if(length < min_length) min_length = length;
                sum -= nums[l++];
            }
            r++;
        }
        return (min_length == INT_MAX) ? 0 : min_length;
    }
};