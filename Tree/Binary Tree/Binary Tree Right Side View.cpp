Input: root = [1,2,3,null,5,null,4]
Output: [1,3,4]

Can be solved using bfs and dfs. but dfs solution will be ecceptable if stack memory is not considered. 

https://leetcode.com/problems/binary-tree-right-side-view/description/

  BFS:

  class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;

        if (!root) return res;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            res.push_back(q.front()->val);
            for (int i = 0; i < n; i++) {
                root = q.front();
                q.pop();
                if(root->right != NULL) 
                    q.push(root->right); 
                if(root->left != NULL) 
                    q.push(root->left);
            }
        }
        return res;
    }
};

DFS:

class Solution {
    public List<Integer> rightSideView(TreeNode root) {
        List<Integer> result = new ArrayList();
        dfs(root, result, 0);
        return result;
    }
    
    private void dfs(TreeNode node, List<Integer> result, int level) {
        if(node == null)
            return;
        if(result.size() == level)
            result.add(node.val);
        dfs(node.right, result, level + 1);
        dfs(node.left, result, level + 1);
    }
}


