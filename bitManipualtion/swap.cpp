#include<bits/stdc++.h>

using namespace std;

void swap( int & val1, int & val2) {
    val1 ^= val2 ^= val1 ^= val2;
}

signed main () {
    int val1, val2;
    cin >> val1 >> val2;
    cout << val1 << " " <<  val2;
    cout << "\n";
    swap (val1, val2);
    cout << val1 << " " << val2; 
    return EXIT_SUCCESS;
}