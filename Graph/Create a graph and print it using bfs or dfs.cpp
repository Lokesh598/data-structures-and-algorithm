#include<bits/stdc++.h>
using namespace std;

class Solution{

public:
	vector<int> bfsOfGraph(int V, vector<int> adj[]) {
		int vis[V] = {0};
		vector<int> res;
		queue<int> q;
		vis[0] = 1;
		q.push(0);
		while(!q.empty()) {
			int node = q.front();
			q.pop();
			res.push_back(node);
			for(auto it : adj[node]) {
				if(vis[it] != 1) {
					vis[it] = 1;
					q.push(it);
				}
			}
		}
		return res;
	}
};

// void addEdge(vector<int> adj[], int u, int v) {
// 	adj[u].push_back(v);
// 	adj[v].push_back(u);
// }

int main() {
	Solution obj;
	int t;
	cin>>t;

	while(t--) {
		int V, E;
		cin >> V >> E;

	// int V = 5;
	//0, 1, 2, 3, 4
		vector<int> adj[V];
		for (int i = 0; i < E; i++)
		{
			int u,v;
			cin>>u>>v;
			adj[u].push_back(v);
		}
		vector<int> ans = obj.bfsOfGraph(V, adj);

	for (int i = 0; i < ans.size(); ++i)
	{
		/* code */
		cout<<ans[i]<<" ";
	}
		cout<<endl;
	}
	// addEdge(adj, 0, 3);
	// addEdge(adj, 0, 2);
	// addEdge(adj, 2, 1);
	// addEdge(adj, 2, 4);
	
	return 0;
}
