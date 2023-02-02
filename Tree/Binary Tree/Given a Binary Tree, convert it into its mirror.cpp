
Input:
      1
    /  \
   2    3
Output: 3 1 2
Explanation: The tree is
   1    (mirror)  1
 /  \    =>      /  \
2    3          3    2
The inorder of mirror is 3 1 2


class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(node == nullptr) return;
        Node* tmp = NULL;
        if(node->left || node->right) {
            tmp = node->left;
            node->left = node->right;
            node->right = tmp;
            mirror(node->left);
            mirror(node->right);
        }
    }
};
