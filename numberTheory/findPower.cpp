#include<bits/stdc++.h>

using namespace std;

int power(int bas, int pow) {
    int res = 1;
    while(pow){
        if (pow % 2) res *= bas;
        bas = bas * bas;
        pow /= 2;
    }
    return res;
}

signed main() {
    int bas, pow;
    cin >> bas >> pow;
    cout << power(bas, pow);
    return EXIT_SUCCESS;              
}