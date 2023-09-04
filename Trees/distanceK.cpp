template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<int, unordered_set<int>> grp;
        queue<TreeNode*> que1;
        que1.push(root);
        while (que1.empty() == false) {
            for (int i = que1.size(); i > 0; --i) {
                TreeNode * par = que1.front();
                que1.pop();
                if (par -> left != nullptr) {
                    grp[par -> val].insert(par -> left -> val);
                    grp[par -> left -> val].insert(par -> val);
                    que1.push(par -> left);
                }
                if (par -> right != nullptr) {
                    grp[par -> val].insert(par -> right -> val);
                    grp[par -> right -> val].insert(par -> val);
                    que1.push(par -> right);
                }
            }
        }
        queue<int> que2;
        unordered_set<int> viz;
        que2.push(target -> val);
        viz.insert(target -> val);
        while (que2.empty() == false and k > 0) {
            for (int i = que2.size(); i > 0; --i) {
                int nod = que2.front();
                que2.pop();
                for (int nei : grp[nod]) {
                    if (viz.find(nei) == viz.end()) {
                        que2.push(nei);
                        viz.insert(nei);
                    }
                }
            }
            k--;
        }
        vector<int> res;
        while (que2.empty() == false) {
            res.push_back(que2.front());
            que2.pop();
        }
        return res;
    }
};