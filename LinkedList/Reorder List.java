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
    public ListNode reverse(ListNode head) {
        ListNode pre = null;
        ListNode cur = null;

        while (head!=null) {

            pre = cur;
            cur = head;
            head = head.next;
            cur.next = pre;
        }
        return cur;
    }
    public void reorderList(ListNode head) {
        //1.find mid
        ListNode slow = head;
        ListNode fast = head;

        while (fast!=null && fast.next!=null) {
            slow = slow.next;
            fast = fast.next.next;

        }
        //2. reverse half
        ListNode s = reverse(slow.next);
        slow.next = null;

        while (head!=null && s!=null) {
            ListNode nn = head.next;
            ListNode rn = s.next;
            head.next = s;
            head.next.next = nn;
            head=nn;
            s=rn;
        }
    }
}
