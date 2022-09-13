class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN, sm = 0;
        for(int & i : nums) {
            sm += i;
            mx = max(mx, sm);
            if(sm < 0) sm = 0;
        }
        return mx;
    }
};