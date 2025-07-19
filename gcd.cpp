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
    int gcd(int a , int b)
    {
        while(a && b){
        if(a>b) a = a%b;
        else b = b%a;
        }
        if(a==0) return b;
        return a; 
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
          if(!head->next) return head;
          ListNode* t1 = head;
          ListNode* t2 = head->next;

          while(t2)
          {
               int x = t1 -> val;
               int y = t2 -> val;
               int gcdd = gcd(x,y);
               ListNode* t = new ListNode(gcdd);
               t1->next = t;
               t->next = t2;  
               t1 = t2; 
               t2 = t2->next;
          }
          return head;
    }
};