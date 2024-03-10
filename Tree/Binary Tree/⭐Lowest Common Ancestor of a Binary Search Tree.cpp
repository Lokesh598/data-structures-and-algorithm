class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root -> val == p->val or root -> val == q->val) 
            return root;
        
        if (!root->left and !root -> right) 
            return nullptr;

        TreeNode *left = nullptr, *right = nullptr;

        if (root -> left) 
            left = lowestCommonAncestor(root->left, p, q);
        
        if (root -> right) 
            right = lowestCommonAncestor(root->right, p, q);

        if (left and right) return root;

        return left == nullptr ? right : left;
    }
};
