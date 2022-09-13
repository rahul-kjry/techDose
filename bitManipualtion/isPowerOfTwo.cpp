#include<bits/stdc++.h>

using namespace std;

bool isPowerOfTwo1 (int val) {
    return val > 0 and (val & (val - 1)) == 0;
}

bool isPowerOfTwo2 (int val) {
    return __builtin_popcount(val) == 1;
}

signed main () {
    int inp;
    cin >> inp;
    cout << isPowerOfTwo1(inp);
    cout << "\n";
    cout << isPowerOfTwo2(inp);
    return EXIT_SUCCESS;
}

