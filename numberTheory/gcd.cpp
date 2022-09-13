#include<bits/stdc++.h>

using namespace std;

int gcd (int num1, int num2) {
    return num1 == 0 ? num2 : gcd(num2 % num1, num1);
}

signed main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1, num2);
    return EXIT_SUCCESS;
}