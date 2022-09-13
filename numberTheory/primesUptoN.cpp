#include<bits/stdc++.h>

using namespace std;

vector<int> getPrimes(int num) {
    vector<int> res;
    vector<bool> tmp(num + 1);
    for (int i = 2; i * i <= num; ++i) {
        if (not tmp[i]) {
            for (int j = i * i; j <= num; j += i) {
                tmp[j] = true;
            }
        } 
    }
    for (int i = 2; i <= num; ++i) {
        if (not tmp[i]) res.push_back(i);
    }
    return res;
}

signed main() {
    int num;
    cin >> num;
    vector<int> res = getPrimes(num);
    for (int & i : res) cout << i << " ";
    return EXIT_SUCCESS;
}