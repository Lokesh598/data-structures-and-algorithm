class Solution {
    long long ans = 0;//global
    void dfs(TreeNode *root, long long val) {
        if(!root) return;
        val *=10;
        val +=root->val;
        if(root->left == nullptr && root->right == nullptr) {
            ans += val;
            return;
        }
        dfs(root->left, val);
        dfs(root->right, val);
    }
public:
    int sumNumbers(TreeNode* root) {
        if(!root) {
            return 0;
        }
        dfs(root, 0);
        return ans;
    }
};
