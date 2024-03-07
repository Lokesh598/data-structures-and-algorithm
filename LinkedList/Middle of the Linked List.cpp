//optimized solution using two pointer

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        //find the length of list
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
