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
     int num = 0;
     int i = 0;
    void fun(ListNode* head)
    {
        if(!head) return ;

        fun(head->next);
        if(head->val == 1) num += pow(2,i) ;
        i++;
    }
    int getDecimalValue(ListNode* head) {
        num = 0;
        i = 0;
       fun(head) ;
       return num;
    }
};