# include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int BFS(vector<int> adj[],int source, int dest, int V) 
{ 
    // Mark all the vertices as not visited 
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
  
    // Create a queue for BFS 
    int dist[V]={0};
    queue<int> q; 
  
    // Mark the current node as visited and enqueue it 
    visited[source] = true; 
    q.push(source); 
  
    while(!q.empty()) 
    { 
        int u = q.front(); 
        // cout << u << " "; 
        q.pop(); 
        for (int v : adj[u]) 
        { 
            if (visited[v]==false) 
            { 
                dist[v]=dist[u]+1;
                visited[v] = true; 
                q.push(v); 
            } 
        } 
    } 
    return dist[dest];
} 
int main()
{
    vector<int> adj[6];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,2,4);
    addEdge(adj,4,5);
    addEdge(adj,3,5);
    cout << BFS(adj, 0, 5, 6);
}