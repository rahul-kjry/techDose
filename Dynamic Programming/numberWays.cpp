
#define ll long long
class Solution {
public:
    int dp[41][1<<10];
    vector<vector<int>> arr;
    
    ll mod =1e9+7, N;
    
    ll solve(ll ind, ll mask){
        if(ind>=41) return mask==(1<<N)-1;
        
        if(dp[ind][mask]!=-1) return dp[ind][mask];
        
        ll poss = 0;
        for(int i : arr[ind]){
            if(mask&(1<<i)) continue;
            
            poss+=solve(ind+1, mask | 1<<i);
            poss%=mod;
        }
        poss += solve(ind+1, mask);
        return dp[ind][mask] = poss%mod;
    }
    int numberWays(vector<vector<int>>& hats) {
        
        memset(dp, -1, sizeof(dp));
        arr.resize(41);
        N = hats.size();
        
        for(int i=0; i<hats.size(); i++){
            for(int j=0; j<hats[i].size(); j++){
                arr[hats[i][j]].push_back(i);
            }
        }

        return solve(0, 0);
    }
    
};