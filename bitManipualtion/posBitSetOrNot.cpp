#include<bits/stdc++.h>

using namespace std;

bool posBitSetOrNot (int val, int pos) {
    return val & (1 << (pos -  1));
}
signed main () {
    int inp, pos;
    cin >> inp >> pos;
    cout << posBitSetOrNot (inp, pos);
    return EXIT_SUCCESS;
}