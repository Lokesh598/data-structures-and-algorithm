class Solution
{
	public:
	void topo(vector<int> adj[], int u, bool visited[], stack<int> &s) 
	{
	    //marking the current vertex as visited.
        visited[u] = true; 
    
        //traversing over the adjacent vertices.
        for (auto v : adj[u])
        {
            //if any vertex is not visited, we call the function recursively.
            if (!visited[v])
                topo(adj, v, visited,s); 
        }
        //pushing the current vertex into the stack.
        s.push(u); 
    }
    
    //Function to return list containing vertices in Topological order. 
    vector <int> topoSort(int N, vector<int> adj[]) 
    {
        //using boolean array to mark visited nodes and currently 
        //marking all the nodes as false.
        bool visited[N+1];                
        memset(visited, 0, sizeof visited); 
        
        stack<int> s;
        
        //traversing over all the vertices.
        for (int i = 0; i < N; i++) 
        {
            //if the current vertex is not visited, we call the topo function.
            if (!visited[i])              
                topo(adj, i, visited, s); 
        }
    
        vector <int> res;
        int i = -1;
        while (!s.empty())
        {
            //pushing elements of stack in list and popping them from stack.
            res.push_back (s.top()); 
            s.pop();
        }
        //returning the list.
        return res;
    }
};
