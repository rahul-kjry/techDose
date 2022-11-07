class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        vector<int>v;
        unordered_map<int,int>m;
        for(int i = 0; i < nums2.size(); ++i) {
            while (not s.empty() and s.top() <= nums2[i]) {
             int k=s.top(); 
                m[k]=nums2[i];
                s.pop();
            }
            s.push(nums2[i]);  
        }
        
        for (int i = 0;i < nums1.size(); ++i) {
            if (m[nums1[i]]) {
                v.push_back(m[nums1[i]]);
            }
            else
                v.push_back(-1);
        }    
        return v;    
    }
};
