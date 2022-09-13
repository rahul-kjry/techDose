#include<bits/stdc++.h>

using namespace std;

int largestPowerOfTwo (int val) {
    val |= val >> 1;
    val |= val >> 2;
    val |= val >> 4;
    val |= val >> 8;
    val |= val >> 16;
    return (val ^ (val >> 1));
}
signed main () {
    int inp;
    cin >> inp;
    cout << largestPowerOfTwo (inp);
    return EXIT_SUCCESS;
}