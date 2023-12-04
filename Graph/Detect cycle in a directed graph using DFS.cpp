class Solution {
  private: 
    bool DFS(int node, vector<int> adj[], int vis[], int pathVis[]) {
        vis[node] = 1;
        pathVis[node] = 1;
        
        for(auto it: adj[node]) {
            //node not visited
            if(!vis[it]) {
                if (DFS(it, adj, vis, pathVis) == 1) 
                    return true;
            } 
            //if node has been visited previously
            //but it has to be visited on the same path
            else if (pathVis[it]) {
                return true;
            }
        }
        
        pathVis[node] = 0;
        return false;
    }
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        int vis[V] = {0};
        int pathVis[V] = {0};
        
        for(int i = 0; i < V; i++) {
            if(!vis[i]) {
                if(DFS(i, adj, vis, pathVis) == 1)
                    return true;
            }
        }
        return false;
    }
  
}
