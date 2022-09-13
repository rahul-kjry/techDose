#include<bits/stdc++.h>

using namespace std;

bool isOdd(int val) {
    return val & 1;
}

signed main () {
    int inp;
    cin >> inp;
    cout << isOdd(inp);
    
    return EXIT_SUCCESS;
}