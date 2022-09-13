#include<bits/stdc++.h>

using namespace std;

vector<int> insertionSort(vector<int> vec) {
    vector<int> res;
    for (int & i : vec) {
        res.push_back(i);
        for (int j = res.size() - 1; j > 0; --j) {
            if (res[j] >= res[j - 1]) {
                break;
            }
            swap(res[j], res[j - 1]);
        }
    }
    return res;
}
signed main() {
    int len;
    cin >> len;
    vector<int> vec(len);
    for (int & i : vec) cin >> i;
    vector<int> res = insertionSort(vec);
    for (int & i : res) cout << i << " ";
}