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
        ListNode p = null, q = null;
        while (head!=null) {
            p=q;
            q = head;
            head = head.next;
            q.next = p;
        }
        return q;
    }
    public ListNode doubleIt(ListNode head) {
        // ListNode dummy = new ListNode(0);
        // ListNode tmp = dummy;
        // int carry = 0;

        // ListNode l1 = reverse(head);
        // ListNode l2 = reverse(head);

        // while( l1!=null && l2!=null || carry != 0 ) {
        //     int sum = 0;
        //     if (l1!=null) {
        //         sum += l1.val;
        //         l1 = l1.next;
        //     }
        //     if (l2!=null) {
        //         sum += l2.val;
        //         l2 = l2.next;
        //     }
            
        //     sum += carry;
        //     carry = sum/10;
        //     ListNode newNode = new ListNode(sum%10);
        //     tmp.next = newNode;
        //     tmp = tmp.next;
        // }

        // return reverse(dummy.next);
        if (head.val > 4)
            head = new ListNode(0, head);
        for(ListNode node = head; node != null; node = node.next) {
            node.val = (node.val * 2) % 10;
            if (node.next != null && node.next.val > 4)
                node.val++;
        }
        return head;
    }
}

// ListNode dummy = new ListNode(0);
//         ListNode tmp = dummy;
//         int carry = 0;
//         while( l1!=null || l2!=null || carry != 0 ) {
//             int sum = 0;
//             if (l1!=null) {
//                 sum += l1.val;
//                 l1 = l1.next;
//             }
//             if (l2!=null) {
//                 sum += l2.val;
//                 l2 = l2.next;
//             }
            
//             sum += carry;
//             carry = sum/10;
//             ListNode newNode = new ListNode(sum%10);
//             tmp.next = newNode;
//             tmp = tmp.next;
//         }
//         return dummy.next;
