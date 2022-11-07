class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int & i : nums) {
            ++ mp[i];
        }
        priority_queue<pair<int, int>> pq;
        for (auto & [k, v] : mp) {
            pq.push({v, k});
        }
        vector<int> res;
        while (not pq.empty() and k > 0) {
            res.push_back(pq.top().second);
            pq.pop();
            -- k;
        }
        return res;
    }
};
