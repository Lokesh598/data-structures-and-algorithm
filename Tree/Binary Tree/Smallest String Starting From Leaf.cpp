class Solution {
    public String smallestFromLeaf(TreeNode root) {
        return preOrder(root, "");
    }
    public String preOrder(TreeNode node, String res) {

        if(node == null)
            return "|";
        
        res = "" + (char)('a' + node.val) + res;

        if (isLeaf(node)) return res;
        
        String left = preOrder(node.left, res);
        String right = preOrder(node.right, res);

        return left.compareTo(right) < 0 ? left : right;
    }
    private boolean isLeaf(TreeNode node) {
        if (node == null) return false;

        return node.left == null && node.right == null;
    }
}
