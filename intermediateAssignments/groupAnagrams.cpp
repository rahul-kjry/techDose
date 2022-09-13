class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char, int>, vector<string>> maper;
        for(auto & str : strs) {
            map<char, int> map;
            for(auto & c : str) ++ map[c];
            maper[map].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto &[k,v] : maper) {
            ans.push_back(v);
        }
        return ans;
    }
};