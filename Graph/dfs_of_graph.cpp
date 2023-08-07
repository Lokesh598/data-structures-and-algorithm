Input: V = 5 , adj = [[2,3,1] , [0], [0,4], [0], [2]]
Output: 0 2 4 3 1

class Solution {
    
    private: 
    vector<int> dfs(int start, int vis[], vector<int> &res, vector<int> adj[]) {
        vis[start] = 1;
        res.push_back(start);
        
        for(auto it: adj[start]) {
            if(!vis[it]) {
                dfs(it, vis, res, adj);
            }
        }
        return res;
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V] = {0};
        int start = 0;
        vector<int> res;
        
        dfs(start, vis, res, adj);
        
        return res;
    }
};



class Solution {
  
  static void dfsUtils(
            int start,
            boolean[] vis,
            ArrayList<ArrayList<Integer>> adj,
            ArrayList<Integer> res) {

        vis[start] = true;
        res.add(start);

        for(int it : adj.get(start)) {
            if(!vis[it]) {
                dfsUtils(it, vis, adj, res);
            }
        }
    }
    public ArrayList<Integer> dfsOfGraph(int V, ArrayList<ArrayList<Integer>> adj) {
        // Code here
        boolean[] vis = new boolean[V];

        ArrayList<Integer> res = new ArrayList<>();

        dfsUtils(0, vis, adj, res);
        return res;
    }
  
}
