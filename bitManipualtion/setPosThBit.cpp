#include<bits/stdc++.h>

using namespace std;

int setPosThBit (int val, int pos) {
    return val |= (1 << (pos - 1));
}  

signed main () {
    int inp, pos;
    cin >> inp >> pos;
    inp = setPosThBit(inp, pos);
    cout << inp;

    return EXIT_SUCCESS;
}