class Solution {
    public TreeNode sortedListToBST(ListNode head) {
        if (head == null) 
            return null;
        return toBST(head, null);
    }
    public TreeNode toBST(ListNode head, ListNode tail) {
        
        ListNode slow = head;
        ListNode fast = head;
        if (head==tail) return null;
        while (fast!=tail && fast.next!=tail) {
            slow = slow.next;
            fast = fast.next.next;
        }

        TreeNode tree = new TreeNode(slow.val);
        tree.left = toBST(head, slow);
        tree.right = toBST(slow.next, tail);
        return tree;
    }
}
