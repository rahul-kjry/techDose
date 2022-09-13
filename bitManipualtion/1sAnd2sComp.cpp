#include<bits/stdc++.h>

using namespace std;

int onesComp (int val) {
    return ~val;
}

int twosComp (int val) {
    return onesComp(val) + 1;
}

signed main () {
    int inp;
    cin >> inp;
    cout << onesComp (inp);
    cout << twosComp (inp);
    return EXIT_SUCCESS;
}