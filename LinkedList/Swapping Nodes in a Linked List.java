class Solution {
    public ListNode swapNodes(ListNode head, int k) {  
        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode slow = dummy;
        ListNode fast = dummy;

        for (int i = 0; i < k; i++) {
            fast = fast.next;
        }

        ListNode first= fast;

        while (fast!=null) {
            slow = slow.next;
            fast = fast.next;
        }
        ListNode second = slow;

        int tmp = first.val;
        first.val = second.val;
        second.val = tmp;
        
        return head;
    }
}
