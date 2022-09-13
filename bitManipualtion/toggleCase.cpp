#include<bits/stdc++.h>

using namespace std;

char toggleCase (char chr) {
    return chr ^ 32;
}

signed main () {
    char chr;
    cin >> chr;
    chr = toggleCase(chr);
    cout << chr;
    
    return EXIT_SUCCESS;
}