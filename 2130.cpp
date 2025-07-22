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
    int pairSum(ListNode* head) {
        if(!head) return 0;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = NULL;
        while(slow)
        {
            ListNode* agla = slow->next;
            slow->next = prev;
            prev = slow ;
            slow = agla;
        }
        int maxi = INT_MIN;
        while(prev && head)
        {
            maxi = max(prev->val + head->val , maxi);
            prev = prev->next;
            head = head->next;
        }
        return maxi;
    }
};