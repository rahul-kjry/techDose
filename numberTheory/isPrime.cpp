#include<bits/stdc++.h>

using namespace std;

bool isPrime(int num) {
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

signed main() {
    int num;
    cin >> num;
    cout << (isPrime(num) ? "Prime" : "Not Prime");
    return EXIT_SUCCESS;
}