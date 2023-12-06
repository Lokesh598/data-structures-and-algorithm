class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> res;
	    vector<int> indegree(V, 0);
	    
	    for(int i = 0; i < V; i++) {
	        for (int x : adj[i]) {
	            indegree[x]++;
	        }
	    }
	    queue<int> q;
	    //push all vertices, with indegree 0
	    for(int i = 0; i < V; i++) {
	        if(indegree[i] == 0)
	            q.push(i);
	    }
	    int count = 0;
	    while(!q.empty()) {
	        int x = q.front();
	        q.pop();
	        
	        res.push_back(x);
	        for(int i : adj[x])
	            if(--indegree[i] == 0)
	                q.push(i);
	                
	        count++;
	    }
	    return (count != V);
    }
};
