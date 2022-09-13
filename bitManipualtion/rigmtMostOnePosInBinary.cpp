#include<bits/stdc++.h>

using namespace std;

int rightMostOnePosInBinary (int val) {
    if (! val) return - 1;
    int pos = 0;
    while (val) {
        if (val & 1) {
            return pos;
        }
        val >>= 1;
        ++ pos;
    }
    return 0;
}
signed main () {
    int inp;
    cin >> inp;
    cout << rightMostOnePosInBinary (inp);
    
    return EXIT_SUCCESS;
}