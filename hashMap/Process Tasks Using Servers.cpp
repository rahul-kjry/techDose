typedef pair<int,int> Pair;
#define mp make_pair
#define pb push_back
#define ll long long int

class Solution {
public:
    priority_queue<Pair,vector<Pair>,greater<Pair>>servfree;
    priority_queue<pair<ll,Pair>,vector<pair<ll,Pair>>,greater<pair<ll,Pair>>>servbusy;
    queue<int>tsk;
    
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        int n = servers.size(), m = tasks.size(), k;
        for(int i = 0; i < n; ++i) servfree.push(mp(servers[i], i));
        vector<int> ans(m);
        int j = 0,t = 0;
        while(j < m){
            while(not servbusy.empty() and servbusy.top().first <= t) {
                servfree.push(servbusy.top().second);
                servbusy.pop();
            }
            tsk.push(j);
            while(not servfree.empty() and not tsk.empty()){
                k = tsk.front();
                ans[k] = (servfree.top().second);
                servbusy.push(mp(t + tasks[k], servfree.top()));
                servfree.pop();
                tsk.pop();
            }
            j++;
            t++;
        }
        while(not tsk.empty()){
            k = tsk.front();
            tsk.pop();
            ans[k] = servbusy.top().second.second;
            servbusy.push(mp(servbusy.top().first+tasks[k],servbusy.top().second));
            servbusy.pop();
        }
        return ans;
    }
};
