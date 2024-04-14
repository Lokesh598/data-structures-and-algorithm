class Solution {
public:
    int dfs(TreeNode* root, bool is_left) {
        if (!root) return 0;
        if (!root->left and !root->right) {
            if (is_left) return root->val; 
        }
        return dfs(root->left, true) + dfs(root->right, false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return dfs(root, false);
    }
};
