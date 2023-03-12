input:
Output: 0 1 2 3 4


// Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        // we need a visited guy first
        
        int vis[V] = {0};
        vector<int> res;
        queue<int> q;
        vis[0] = 1;
        q.push(0);
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            res.push_back(node);
            for(auto it: adj[node]) {
                if(vis[it] != 1) {
                    vis[it] = 1;
                    q.push(it);
                }
            }
        }
        return res;
    }
