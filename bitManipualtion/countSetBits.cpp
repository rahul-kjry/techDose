#include<bits/stdc++.h>

using namespace std;

int countSetBits1(int val) {
    int ret = 0;
    while (val) {
        val &= (val - 1);
        ++ ret;
    }
    return ret;
}

int countSetBits2(int val) {
    int ret = 0;
    while (val) {
        (val & 1) and ++ ret;
        val >>= 1;
    }
    return ret;
}

int countSetBits3(int val) {
    return __builtin_popcount(val);
}
signed main () {
    int inp;
    cin >> inp;
    cout << countSetBits1(inp);
    cout << "\n";
    cout << countSetBits2(inp); 
    cout << "\n";
    cout << countSetBits3(inp);

    return EXIT_SUCCESS;
}