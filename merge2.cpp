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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int cnt = 0;
        ListNode* temp = list1;
        ListNode* f = nullptr;
        ListNode* s = nullptr;
        while(temp)
        {

            if(cnt == a-1){
                f = temp;
            } 
            if(cnt == b+1) s = temp;
            temp = temp->next ; 
            cnt ++;
        }
        f->next  = list2;
        while(list2->next) list2 = list2->next;
        list2->next = s;
        return list1;
    }
};