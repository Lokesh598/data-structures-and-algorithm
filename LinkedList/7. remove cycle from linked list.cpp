class Solution
{
    public:
    Node *detectCycle(Node *head) {
        if(head == NULL) return NULL;
        Node *slow = head;
        Node *fast = head;
        // bool cycle = false;
        while(fast!=NULL and fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) {
                // cycle = true;
                // break;
                slow = head;
                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if(head == NULL) return;
    
        // if(cycle == false) return;
        
        // while(slow != head) {
        //     slow = slow->next;
        //     fast = fast->next;
        // }
        Node *slow = detectCycle(head);
        if(slow == NULL) return;
        Node *tmp = slow;
        while(tmp->next != slow) {
            tmp = tmp->next;
        }
        tmp->next = NULL;
        return;
    }
