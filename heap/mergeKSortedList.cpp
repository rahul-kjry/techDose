class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lst) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (auto & i : lst) {
            while (i) {
                pq.push(i -> val);
                i = i -> next;
            }
        }
        ListNode * root = new ListNode();
        ListNode * ptr = root;
        while (not pq.empty()) {
            ListNode * tmp = new ListNode(pq.top());
            pq.pop();
            ptr -> next = tmp;
            ptr = ptr -> next;
        }
        return root -> next;
    }
};
