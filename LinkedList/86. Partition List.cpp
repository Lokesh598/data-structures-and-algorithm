class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *left = new ListNode(), *right = new ListNode();
        ListNode *ltail = left, *rtail = right;

        while(head!=nullptr) {
            if(head->val < x) {
                ltail->next = head;
                ltail = ltail->next;
            } else {
                rtail->next = head;
                rtail = rtail->next;
            }
            head = head->next;
        }
        ltail->next = right->next;
        rtail->next = nullptr;

        return left->next;
    }
};
