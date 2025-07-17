// Given the head of a linked list, remove the nth 
// node from the end of the list and return its head.

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)return NULL;
        if(head->next == NULL && n == 1){
            delete head;
            return NULL;
        }
        ListNode* temp = head;
        int countNode = 0;
        while(temp!= NULL){
            countNode++;
            temp = temp->next;
        }
        if(n > countNode) return head;

        int m = countNode - n;
        temp = head;
        ListNode* prev;
        for(int i = 0; i<m; i++){
            prev = temp;
            temp = temp->next;
        }
        if(temp == head){
            head = temp->next;
        }
        else{
            prev->next = temp->next;
        }
        delete temp;
        return head;
    }
};