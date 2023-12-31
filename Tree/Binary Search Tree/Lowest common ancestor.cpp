class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* cur = root;

        while(cur) {
            if(cur->val < p->val and cur->val < q->val) {
                cur = cur->right;
            } else if(cur->val > p->val and cur->val > q->val) {
                cur = cur->left;
            } else {
                return cur;
            }
        }
        return cur;
    }
};
