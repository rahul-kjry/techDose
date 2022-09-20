#include<bits/stdc++.h>

using namespace std;

vector<int> radixSort(vector<int> & vec) {
    int mx = *max_element(vec.begin(), vec.end());
    int ln = int(log10(mx));
    for (int d = 0; d <= ln; ++d) {
        vector<int> tmp(10), rs(vec.size());
        for (int & i : vec) ++ tmp[(i / int(pow(10, d))) % 10];
        for (int i = 1; i < tmp.size(); ++i) tmp[i] += tmp[i - 1];
        for (int i = vec.size() - 1; i >= 0; --i) {
            rs[--tmp[(vec[i]/int(pow(10, d)))%10]] = vec[i];
        }
        vec = rs;
    }
    return vec;
}

signed main() {
    int len;
    cin >> len;
    vector<int> vec(len);
    for (int & i : vec) cin >> i;
    for (int & i : radixSort(vec)) cout << i << " ";
    return EXIT_SUCCESS;
}