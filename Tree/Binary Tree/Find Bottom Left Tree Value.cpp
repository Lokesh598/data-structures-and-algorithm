Input: root = [1,2,3,4,null,5,6,null,null,7]
Output: 7

class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()) {
            root=q.front(); // get the value before pop coz pop will not return anyy val
            q.pop();
            if (root->right) {
                q.push(root->right);
            }
            if(root->left) q.push(root->left);
        }
        return root->val;
        
    }
};
