Input:
        19
     /     \
    10      8
  /    \
 11    13
Output: 11 13 10 8 19
  
class Tree
{
    void postOrderTraversal(Node root, ArrayList<Integer> ans) {
        if(root != null) {
        
        postOrderTraversal(root.left, ans);
        postOrderTraversal(root.right, ans);
        ans.add(root.data);
        }
    }
    //Function to return a list containing the postorder traversal of the tree.
    ArrayList<Integer> postOrder(Node root)
    {
       // Your code goes here
       ArrayList<Integer> ans = new ArrayList<Integer>();
       
       postOrderTraversal(root, ans);
       
       return ans;
    }
}
