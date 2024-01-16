class Solution {
    public ListNode sortList(ListNode head) {
        if (head == null || head.next == null) return head;
        ListNode tmp = null, slow = head, fast = head;

        while (fast != null && fast.next != null) {
            tmp = slow;
            slow = slow.next;
            fast = fast.next.next;
        }
        tmp.next = null; //check boundary case for this.

        ListNode l1 = sortList(head);
        ListNode l2 = sortList(slow);
        return mergeList(l1, l2);
    }

    ListNode mergeList(ListNode l1, ListNode l2) {
        ListNode result = null;
        if (l1 == null) 
            return l2;
        else if (l2 == null)
            return l1;

        if (l1.val <= l2.val) {
            result = l1;
            result.next = mergeList(l1.next, l2);
        } else {
            result = l2; 
            result.next = mergeList(l1, l2.next);
        }
        return result;
    }
}
