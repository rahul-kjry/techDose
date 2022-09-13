#include<bits/stdc++.h>

using namespace std;

int flipPosThBit(int val, int pos) {
    return val ^ (1 << (pos - 1));
}

signed main () {
    int inp, pos;
    cin >> inp >> pos;
    inp = flipPosThBit (inp, pos);
    return EXIT_SUCCESS;
}