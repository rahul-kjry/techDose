#include<bits/stdc++.h>

using namespace std;

vector<int> selectionSort1(vector<int> vec) {
    for (int i = 0; i < vec.size() - 1; ++i) {
        for (int j = i + 1; j < vec.size(); ++j) {
            if (vec[i] > vec[j]) {
                swap(vec[i], vec[j]);
            }
        }
    }
    return vec;
}

vector<int> selectionSort2(vector<int> vec) {
    for (int i = 0; i < vec.size() - 1; ++i) {
        int minInd = i;
        for (int j = i + 1; j < vec.size(); ++j) {
            if (vec[j] < vec[minInd]) minInd = j;
        }
        swap(vec[i], vec[minInd]);
    }
    return vec;
}

signed main() {
    int len;
    cin >> len;
    vector<int> vec(len);
    for (int & i : vec) cin >> i;
    vector<int> res1 = selectionSort1(vec);
    vector<int> res2 = selectionSort2(vec);
    for (int & i : res1) cout << i << " ";
    cout << "\n";
    for (int & i : res2) cout << i << " ";
    return EXIT_SUCCESS;
}