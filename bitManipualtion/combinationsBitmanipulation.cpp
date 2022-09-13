#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> combinations(vector<int> & vec, int len) {
    vector<vector<int>> ret;
    for (int i = 0; i < (1 << len); ++i) {
        vector<int> subRet;
        for (int j = 0; j < len; ++j) {
            if (i & (1 << j)) {
                subRet.emplace_back(vec[j]);
            }
        }
        ret.emplace_back(subRet);
    }
    return ret;
}

signed main () {
    int len;
    cin >> len;
    vector<int> vec (len);
    for (auto & i : vec) {
        cin >> i;
    }
    vector<vector<int>> ans = combinations(vec, len);
    for (auto & i : ans) {
        for (auto & j : i) {
            cout << j << " ";
        }
        cout << "\n";
    }
        
    return EXIT_SUCCESS;
}