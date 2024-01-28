/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<string>> printTree(TreeNode* root) {
        //no of rows and no of columns required
        // rows nothing but height of tree
        int height = height1(root);
        int row = height;
        int column = pow(2, row) - 1;
        vector<vector<string>> ans(height, vector<string>(column));
        dfs(root, 0, column-1, 0, ans);
        return ans;
    }
private: 
    int height1(TreeNode* root) {
        if (!root) return 0;
        return 1 + max(height1(root->left), height1(root->right));
    }
    void dfs(TreeNode* root, int l, int r, int h, vector<vector<string>> &ans) {
        if (root == nullptr) return;
        if (l > r) return;
        int mid = (l + r)/2;
        ans[h][mid] = to_string(root->val);
        dfs(root->left, l, mid-1, h+1, ans);
        dfs(root->right, mid+1, r, h+1, ans);
    }
};
