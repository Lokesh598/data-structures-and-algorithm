https://leetcode.com/problems/remove-linked-list-elements/


class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr) return head;
        while(head!=nullptr && head->val == val) {
            ListNode* tmp = head;
            head = head->next;
            delete(tmp);
        }
        ListNode *cur = head;
        while(cur!=nullptr && cur->next!=nullptr) {
            if(cur->next->val == val) {
                cur->next = cur->next->next;
            } else {
                cur = cur->next;
            }
        }
        return head;
    }
};
