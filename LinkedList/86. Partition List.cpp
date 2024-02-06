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

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode partition(ListNode head, int x) {
        ListNode left = new ListNode(0), right = new ListNode(0);
        ListNode ltail = left, rtail = right;

        while(head!=null) {
            if(head.val < x) {
                ltail.next = head;
                ltail = ltail.next;
            } else {
                rtail.next = head;
                rtail = rtail.next;
            }
            head = head.next;
        }
        ltail.next = right.next;
        rtail.next = null;

        return left.next;
    }
}

