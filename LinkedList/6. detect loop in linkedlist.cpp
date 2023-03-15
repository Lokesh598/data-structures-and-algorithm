floyed's cycle algorithm

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        if(head == NULL or head->next == NULL)
            return false;
        // your code here
        Node *slow = head;
        Node *fast = head;
        while(fast->next != NULL and fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                return 1;
        }
        return 0;
    }
};
