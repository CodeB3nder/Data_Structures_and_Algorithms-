# include <bits/stdc++.h>
using namespace std;

class Graph{
    int v;
    int e;
    int **adj;
public:
    Graph(int v, int e)
    {
        this->v=v;
        this->e=e;
        adj = new int* [v];
        for(int row=0; row<v; row++)
        {
            adj[row] = new int[v];
            for(int col=0; col<v;col++)
                adj[row][col]=0;
        }
    }
    void addEdge(int start, int end)
    {
        adj[start][end]=1;
        adj[end][start]=1;
    }
    void BFS(int source)
    {
        vector<bool> visited(v,false);
        queue<int> q;
        q.push(source);
        visited[source]=true;
        while(q.empty() == false)
        {
            int u = q.front();
            cout << u << " ";
            q.pop();
            for(int i=0; i<v; i++)
            {
                if(adj[u][i]==1 && visited[i]==false)
                {
                    q.push(i);
                    visited[i]=true;
                }
            }
        }
    }
};
int main() 
{ 
    int v = 5, e = 4; 
  
    // Create the graph 
    Graph G(v, e); 
    G.addEdge(0, 1); 
    G.addEdge(0, 2); 
    G.addEdge(1, 3); 
  
    G.BFS(0); 
} 
