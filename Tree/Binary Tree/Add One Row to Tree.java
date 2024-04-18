class Solution {
    
    public TreeNode addOneRow(TreeNode root, int val, int depth) {
        if (depth == 1) {
            TreeNode node = new TreeNode(val);
            node.left = root;
            return node;
        }
        Queue<TreeNode> q = new LinkedList<>();
        
        q.add(root);    
        int x = 0;
        while(!q.isEmpty()) {
            x++;
            TreeNode tmp;
            int n = q.size();
            for (int i = 0; i < n; i++) {
                tmp = q.poll();
                
                if (x != depth-1) {
                    if (tmp.left != null) q.add(tmp.left);
                    if (tmp.right != null) q.add(tmp.right);
                } else {
                    TreeNode leftNode = new TreeNode(val);
                    leftNode.left = tmp.left;
                    tmp.left = leftNode;

                    TreeNode rightNode = new TreeNode(val);
                    rightNode.right = tmp.right;
                    tmp.right = rightNode;
                }
            }
        }
        return root;
    }
}
