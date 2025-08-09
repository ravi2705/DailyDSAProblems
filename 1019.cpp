/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> vals;
        
        
        for (ListNode* curr = head; curr; curr = curr->next) {
            vals.push_back(curr->val);
        }
        
        int n = vals.size();
        vector<int> ans(n, 0);
        stack<int> st; 
        
       
        for (int i = 0; i < n; i++) {
            while (!st.empty() && vals[i] > vals[st.top()]) {
                ans[st.top()] = vals[i];
                st.pop();
            }
            st.push(i);
        }
        
        return ans;
    }
};
