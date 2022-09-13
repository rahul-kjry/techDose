class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string s1 = strs[0], s2 = strs[strs.size() - 1];
        if(strs.size() == 1) return strs[0];
        string ans = "";
        for(int ind = 0; ind <= min(s1.size(), s2.size()); ++ind) {
            if(s1[ind] == s2[ind]) ans += s1[ind];
            else break;
        }
        return ans;
    }
};