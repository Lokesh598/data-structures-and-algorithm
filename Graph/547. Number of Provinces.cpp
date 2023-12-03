// this solution is same as count no of disconnected components

class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        if (M.empty()) return 0;
        int n = M.size();
        vector<bool> visited(n, false);
        int groups = 0;
        for (int i = 0; i < visited.size(); i++) {
            groups += !visited[i] ? dfs(i, M, visited), 1 : 0;
        }
        return groups;
    }

private:
    void dfs(int i, vector<vector<int>>& M, vector<bool>& visited) {
        visited[i] = true;
        for (int j = 0; j < visited.size(); j++) {
            if (i != j && M[i][j] && !visited[j]) {
                dfs(j, M, visited);
            }
        }
    }
};


here is another implemetation
class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        //matrix to adjacency list
        int V = M.size();
        vector<int> adj[V];

        for(int i = 0; i < V; i++) {
            for(int j = 0; j < V; j++) {
                if(M[i][j] == 1 && i!=j) {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int> visited(V, 0);
        int cnt = 0;
        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                cnt++;
                dfs(i, adj, visited);
            }
        }
        return cnt;
    }
private:
    void dfs(int v, vector<int> adj[], vector<int> &visited) {
        visited[v] = 1;

        for(auto u : adj[v]) {
            if(!visited[u]) {
                dfs(u, adj, visited);
            }
        }
    }
}; 
