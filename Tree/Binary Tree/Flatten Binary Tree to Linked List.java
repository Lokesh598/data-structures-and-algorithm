/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode tmp = null;
    public void flatten(TreeNode root) {

        if (root == null) return;
        flatten(root.right);
        flatten(root.left);

        root.right = tmp;
        root.left = null;
        tmp = root;        
    }
}
