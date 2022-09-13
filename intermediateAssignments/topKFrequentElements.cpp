class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> freq;
        for(auto & i : nums) ++ freq[i];
        map<int, vector<int>> maper;
        for(auto &[K,V] : freq) {
            maper[V].emplace_back(K);
        }
        vector<int> ans;
        for(int i=nums.size()+1; i>=1; --i) {
            if(maper[i].size()) {
                for(auto & n : maper[i]) {
                    ans.emplace_back(n);
                    if(--k == 0) return ans;
                }
            }
        }
        return ans;
    }
};