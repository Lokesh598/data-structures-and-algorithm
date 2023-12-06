//course scedule
//this solution same as "cycle detection in a directed graph"

Input: numCourses = 2, prerequisites = [[1,0]]
Output: true

Input: numCourses = 2, prerequisites = [[1,0],[0,1]]
Output: false
Explanation: There are a total of 2 courses to take. 
To take course 1 you should have finished course 0, and to take course 0 you should also have finished course 1. So it is impossible.

class Solution {
public:
    bool canFinish(int v, vector<vector<int>>& pre) {

        vector<int> adj[v];
        for (auto edge: pre) {
            adj[edge[1]].push_back(edge[0]);
        }

        vector<int> in_degree(v, 0);

        for (int u = 0; u < v; u++) {
            for (int x : adj[u]) in_degree[x]++;
        }

        queue<int> q;
        vector<int> topo;

        for (int i = 0; i < v; i++) {
            if (in_degree[i] == 0) q.push(i);
        }

        while (!q.empty()) {
            int u = q.front();
            q.pop();

            topo.push_back(u);

            for(auto x : adj[u]) {
                if (--in_degree[x] == 0)
                    q.push(x);
            }
        }
        if (topo.size() == v) return true;
        return false;
    }
};
