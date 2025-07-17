// 82. Remove Duplicates from Sorted List II
// Solved
// Medium
// Topics
// premium lock icon
// Companies
// Given the head of a sorted linked list, 
// delete all nodes that have duplicate numbers, 
// leaving only distinct numbers from the original 
// list. Return the linked list sorted as well

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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;
        ListNode* temp = head;

        while (temp && temp->next != NULL) {
            bool check = false;
            ListNode* temp1 = temp->next;

            while (temp1 && temp->val == temp1->val) {
                check = true;
                ListNode* temp2 = temp1;
                temp1 = temp1->next;
                delete temp2;
            }

            if (check) {
                ListNode* toDelete = temp;
                temp = temp1;
                delete toDelete;
                prev->next = temp;
            } else {
                prev = temp;
                temp = temp->next;
            }
        }

        ListNode* result = dummy->next;
        delete dummy;
        return result;
    }
};
