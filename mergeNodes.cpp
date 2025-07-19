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
    ListNode* mergeNodes(ListNode* head) {
        if (!head) return nullptr;

        ListNode* curr = head->next;
        int sum = 0;

        while (curr && curr->val != 0) {
            sum += curr->val;
            curr = curr->next;
        }

        ListNode* node = new ListNode(sum);

        // skip to the next segment
        if (curr && curr->next) {
            node->next = mergeNodes(curr);
        } else {
            node->next = nullptr;
        }

        return node;
    }
};
