public ListNode deleteDuplicates(ListNode head) {
        ListNode temp = head;
        while (temp!=null) {
            while (temp.next!=null && temp.val == temp.next.val) {
                temp.next = temp.next.next;
            }
            temp = temp.next;
        
        return head;
}
