class Solution {
public:
    int countNodes(TreeNode* root) {
        
        if (root == NULL)
            return 0;
 
        int l = countNodes(root->left);
        int r = countNodes(root->right);

        return 1 + l + r;
    }
};

// count non leaf nodes in binary tree


int countNonLeafNodes(TreeNode* root) {
        
        if (root == NULL)
            return 0;
        if (root->left == null && root->right == null) {
            return 0;
        }
        int l = countNodes(root->left);
        int r = countNodes(root->right);

        return 1 + l + r;
    }
