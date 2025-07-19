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
    ListNode* curr ;
    bool ans = true;
    void fun(ListNode* head)
    {
        if(!head) return ;
        fun(head->next);
        if(head->val != curr->val) ans = false;
        curr = curr ->next ;
    }
    bool isPalindrome(ListNode* head) {
        curr = head;
        ListNode* nhead = head;
        fun(nhead);
        return ans;
    }
};