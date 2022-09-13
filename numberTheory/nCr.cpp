#include<bits/stdc++.h>

using namespace std;

int dp[100][100] = {0};

int nCr(int n, int r)
{
       if(n==r) return dp[n][r] = 1;
       if(r==0) return dp[n][r] = 1; 
       if(r==1) return dp[n][r] = n;
       if(dp[n][r]) return dp[n][r]; 
       return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}

signed main() {
    int n, r;
    cin >> n >> r;
    cout << nCr(n, r);
    return EXIT_SUCCESS;
}