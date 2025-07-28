/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head == NULL) return NULL;
        
        unordered_map<Node*,Node*>m;

        Node* newhead = new Node(head->val);
        Node* oldTemp = head->next;
        Node* newTemp = newhead;
        // Node* prev = newhead;

        m[head] = newhead; 
        

        while(oldTemp != NULL){
            
            Node* newNode = new Node(oldTemp->val);
            m[oldTemp] = newNode;
            newTemp->next = newNode;

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        oldTemp = head;
        newTemp = newhead;

        while(oldTemp != NULL){
            newTemp->random = m[oldTemp ->random];

            oldTemp = oldTemp->next; 
            newTemp = newTemp->next; 
        }

        return newhead;
    }
};