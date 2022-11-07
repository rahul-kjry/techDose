class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {
        auto getMinRemove = [&](string& str) -> int {
            int minRemove = 0;
            int cur = 0;
            for (int i = 0; i < (int) str.size(); i++) {
                if (str[i] == '(') {
                    ++cur;
                } else if (str[i] == ')') {
                    --cur;
                    if (cur < 0) {
                        cur = 0;
                        minRemove++;
                    }
                }
            }
            minRemove += cur;
            return minRemove;
        };
        int minRemove = getMinRemove(s);
        if (minRemove == 0) {
            return {s};
        }
        int n = s.size();
        vector<int> pos;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == ')') {
                pos.emplace_back(i);
            }
        }
        int len = pos.size();
        vector<bool> v(len, true);
        for (int i = 0; i < minRemove; i++) {
            v[i] = false;
        }
        set<string> ret;
        do {
            vector<bool> done(n);
            for (int i = 0; i < len; i++) {
                if (v[i]) {
                    continue;
                }
                done[pos[i]] = true;
            }
            string str = "";
            for (int i = 0; i < n; i++) {
                if (!done[i]) {
                    str += s[i];
                }
            }
            int curRemove = getMinRemove(str);
            if (curRemove == 0) {
                ret.emplace(str);
            }
        } while (next_permutation(v.begin(), v.end()));
        return vector<string>(ret.begin(), ret.end());
    }
};
