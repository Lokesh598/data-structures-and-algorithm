problem from gfg

class Solution {
  public:
    
    bool DFS(int node, vector<int> adj[], int visited[], int parent) {
        visited[node] = 1;
        
        for(auto it: adj[node]) {
            if (visited[it] == 0) {
                if (DFS(it, adj, visited, node) == 1) {
                    return 1;
                }
            } else if (it != parent) {
                return 1;
            }
        }
        return 0;
    }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        int flag[V] = {0};
        
        for (int i = 0; i < V; i++) {
            if(flag[i] == 0) {
                if (DFS(i, adj, flag, -1)) {
                    return 1;
                }
            }
        }
        return 0;
    }
}
