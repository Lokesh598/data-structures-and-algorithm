//Leetcode 637. Average of Levels in Binary Tree
// Input: root = [3,9,20,null,null,15,7]
// Output: [3.00000,14.50000,11.00000]
// Explanation: The average value of nodes on level 0 is 3, on level 1 is 14.5, and on level 2 is 11.
// Hence return [3, 14.5, 11].
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> res;
        
        queue<TreeNode*> q;

        q.push(root);
    
        while(!q.empty()) {
            long sum = 0;
            int n = q.size();
            for(int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                sum += node->val;

                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);

            }
            res.push_back((double)sum/n);
        }
        return res;
    }
};
