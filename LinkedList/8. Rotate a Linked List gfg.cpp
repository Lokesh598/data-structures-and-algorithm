
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        // Node *cur = head;
        // Node *tmp = head;
        
        // for(int i = 0; i<k-1; i++) {
        //     tmp = tmp->next;
        // }
        // while(cur->next!=NULL) {
        //     cur = cur->next;
        // }
        // cur->next = head;
        // head = tmp->next;
        // tmp->next = NULL;
        // return head;
        
        Node *walk = head;
        Node *prev;
        
        while(k-- && walk!=NULL) {
            prev = walk;
            walk = walk->next;
        }
        
        if(!walk) return head;
        
        Node *newHead = walk;
        prev->next = NULL;
        while(walk->next) {
            walk = walk->next;
        }
        walk->next = head;
        
        
        return newHead;
    }
};
