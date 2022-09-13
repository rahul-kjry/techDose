#include<bits/stdc++.h>

using namespace std;

vector<int> bubbleSort1(vector<int> vec) {
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = 0; j < vec.size() - i - 1; ++j) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
    return vec;
}

vector<int> bubbleSort2(vector<int> vec) {
    for (int i = vec.size() - 1; i > 0; --i) {
        bool isSwap = false;
        for (int j = 0; j < i; ++j) {
            if(vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
                isSwap = true;
            }
        }
        if (not isSwap) break;
    }
    return vec;
}

signed main() {
    int len;
    cin >> len;
    vector<int> vec(len);
    for (int & i : vec) cin >> i;
    vector<int> res1 = bubbleSort1(vec);
    vector<int> res2 = bubbleSort2(vec);
    for (int & i : res1) cout << i << " ";
    cout << "\n";
    for (int & i : res2) cout << i << " ";
}