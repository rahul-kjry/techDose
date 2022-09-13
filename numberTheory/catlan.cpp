#include<bits/stdc++.h>

using namespace std;

int catalan(int num) {
    vector<int> dp(num + 1);
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= num; ++i) {
        dp[i] = 0;
        for (int j = 0; j < i; j++)
            dp[i] += dp[j] * dp[i - j - 1];
    }
    return dp[num];
}

signed main(){
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i) {
        cout << catalan(i) << " ";
    }
    return EXIT_SUCCESS;
}


