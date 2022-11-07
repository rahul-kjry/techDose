class Solution {
    public:
    vector<string> res;
    void g(int lc, int rc, string s) {
        if(lc == 0 and rc ==0){
            res.push_back(s);
            return;
        }
        if(lc > 0) g(lc - 1, rc, s + '(');
        if(rc > lc) g(lc, rc - 1, s + ')');
    }
    vector<string> generateParenthesis(int n) {
        g(n,n,"");
        return res;
    }
};
