class Solution {
    public void deleteNode(ListNode node) {
        
        //How to become another person in the world? Two steps.
        // One, change your appearance to whom you want to be.
        // Two, kill that person.
        node.val = node.next.val;
        node.next = node.next.next;
        
    }
}
