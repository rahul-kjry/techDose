#include<bits/stdc++.h>

using namespace std;

vector<int> getPrimeFactors(int num) {
    vector<int> res;
    for (int i = 2; i * i <= num; ++i) {
        while (num % i == 0) {
            num /= i;
            res.push_back(i);
        }
    }
    if (num) res.push_back(num); 
    return res;
}

signed main() {
    int num;
    cin >> num;
    vector<int> res = getPrimeFactors(num);
    for (int & i : res) cout << i << " ";
    return EXIT_SUCCESS;
}