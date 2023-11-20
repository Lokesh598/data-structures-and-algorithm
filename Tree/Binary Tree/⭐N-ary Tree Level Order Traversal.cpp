class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        if (root == NULL)
            return {};
        
        queue<Node*> q;
        vector<vector<int>> res;

        q.push(root); 
        while (!q.empty()) {
            int size = q.size();
            vector<int> curlevel;
            for (int i = 0; i < size; i++) {
                Node *tmp = q.front();
                q.pop();
                curlevel.push_back(tmp->val);
                for (auto n : tmp->children) 
                    q.push(n);
            }
            res.push_back(curlevel);
        }
        return res;
    }
};
