#include<bits/stdc++.h>

using namespace std;

int prt (vector<int> & vec, int lo, int hi) {
    int i = lo - 1;
    for (int j = lo; j < hi; ++j) {
        if (vec[j] < vec[hi]) {
            swap(vec[++i], vec[j]);
        }
    } 
    swap(vec[i + 1], vec[hi]);
    return i + 1;
}

void quickSort(vector<int> & vec, int lo, int hi) {
    if (lo < hi) {
        swap(vec[lo + rand() % (hi - lo + 1)], vec[lo]);
        int pvt = prt(vec, lo, hi);
        quickSort(vec, lo, pvt - 1);
        quickSort(vec, pvt + 1, hi);
    }
}

signed main() {
    int len;
    cin >> len;
    vector<int> vec(len);
    for (int & i : vec) cin >> i;
    quickSort(vec, 0, len - 1);
    for (int & i : vec) cout << i << " ";
    return EXIT_SUCCESS;
}