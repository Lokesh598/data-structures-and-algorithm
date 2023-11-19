class Solution {
    
public:
    TreeNode *pre = NULL, *first = NULL, *second = NULL;
    void traverse(TreeNode* root) {
        if(root == NULL) 
            return;
        
        traverse(root->left);
        
        if(pre != NULL && root->val < pre->val) {
            if(first == NULL)
                first = pre;
            second = root;
            
        }
        
        pre = root;
        traverse(root->right);
    }

    void recoverTree(TreeNode* root) {
        traverse(root);
        swap(first->val, second->val);
    }
};
