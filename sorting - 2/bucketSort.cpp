#include<bits/stdc++.h>

using namespace std;

vector<int> bucketSort(vector<int> vec) {
    int len = vec.size();
    vector<int> bkt[len];
    for (int i = 0; i < len; ) {
        bkt[len * vec[i]].push_back(vec[i]);
    }
    for (int i = 0; i < len; ++i)
        sort(bkt[i].begin(), bkt[i].end());
    int ind = 0;
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < bkt[i].size(); ++j) {
            vec[ind++] = bkt[i][j];
        }
    }
    return vec;
}
signed main () {
    int len;
    cin >> len;
    vector<int> vec(len);
    for (int & i : vec) cin >> i;
    for (int & i : bucketSort(vec)) cout << i << " ";
    return EXIT_SUCCESS;
}