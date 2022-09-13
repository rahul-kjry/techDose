#include<bits/stdc++.h>

using namespace std;

int unSetPosThBit (int val, int pos) {
    return (val & (~(1 << (pos - 1))))
}

signed main () {
    int inp, pos;
    cin >> inp >> pos;
    inp = unSetPosThBit (inp, pos);
    cout << inp;
    return EXIT_SUCCESS;
}