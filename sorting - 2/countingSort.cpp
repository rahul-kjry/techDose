#include<bits/stdc++.h>

using namespace std;

vector<int> countingSort(vector<int> & vec) {
    int mx = *max_element(vec.begin(), vec.end());
    vector<int> frq(mx + 1), rs(vec.size());
    for (int & i : vec) ++ frq[i];
    for (int i = 1; i < frq.size(); ++i) frq[i] += frq[i - 1];
    for (int i = vec.size() - 1; i >= 0; --i) {
        rs[--frq[vec[i]]] = vec[i];
    }
    return rs;
}

signed main() {
    int len;
    cin >> len;
    vector<int> vec(len);
    for (int & i : vec) cin >> i;
    for(int & i : countingSort(vec)) cout << i << " ";
    return EXIT_SUCCESS;
}