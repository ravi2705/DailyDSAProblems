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
    ListNode* removeNodes(ListNode* head) {
        
        if(!head->next) return head;

        ListNode* faith = removeNodes(head->next);

        if(faith->val > head->val) return faith;
        else
        {
            head -> next = faith ;
            return head ;
        }
    }
};