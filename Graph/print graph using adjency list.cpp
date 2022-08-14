//print adjacency list of graph where user knows the no. vertices

#include<iostream>
#include<vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(u);
    adj[v].push_back(v);
}

void printGraph(vector<int> adj[], int V) {
    for(int i = 0; i<V; i++) {
        for(auto x: adj[i]) {
            cout << x;
        }
        cout<<"\n";
    }
}
int main() {
    int V = 4;
    // cout<<"hiell";
    vector<int> adj[V];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 4, 1);
    printGraph(adj, V);
}
