class Solution {
  /*
            * requrements: 
            * in prims algorithms we have two conditions:
            * first is minimum edge and second is adjacent vertex.
            * for minimum edge take min heap tree. for that we use priority_queue.
            * also we need a visited guy.
            * bfs or dfs algo.
        */
        // priority queue
        priority_queue<pair<int, int>, vector<pair<int, int>, greater<pair<int,int>>> pq;
        
        // visited array
        
        vector<int> vis(V, 0);
        
        pq.push({0, 0});
        int sum = 0;
        
        while(!q.empty()) {
            
            auto it = pq.top();
            pq.pop();
            int node = it.second;
            int wt = it.first;
            
            if(vis[node] == 1) continue;
            vis[node] = 1;
            sum += wt;
            
            for(auto it: adj[node]) {
                int adjNode = it[0];
                int edwt = it[1];
                pq.push(edwt, adjNode);
            }
        }
        return sum;
}
