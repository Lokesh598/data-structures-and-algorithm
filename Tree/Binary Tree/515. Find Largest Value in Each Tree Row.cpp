//leetcode 515

Example 1:


Input: root = [1,3,2,5,3,null,9]
Output: [1,3,9]

class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        if(!root) return {};
        vector<int> res;

        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            vector<int> lvl;
            while(size--) {
                TreeNode* tmp = q.front();
                lvl.push_back(tmp->val);
                q.pop();

                if(tmp->left) 
                    q.push(tmp->left);
                if(tmp->right) 
                    q.push(tmp->right);
            }
            sort(lvl.begin(), lvl.end());
            int n = lvl.size();
            res.push_back(lvl[n-1]);
        } 
        return res;
    }
};
