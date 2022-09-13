#include<bits/stdc++.h>

using namespace std;

vector<int> getFactors(int num) {
    vector<int> res;
    for (int i = 1; i * i <= num; ++i) {
        if (num % i == 0) {
            res.push_back(i);
            if (num / i != i) res.push_back(num / i);
        }
    }
    return res;
}

signed main() {
    int num;
    cin >> num;
    vector<int> res = getFactors(num);
    for (int & i : res) cout << i << " ";
    return EXIT_SUCCESS;
}