
#include <bits/stdc++.h> 
using namespace std; 

void add_edge(vector<int> adj[], int src, int dest) 
{ 
    adj[src].push_back(dest); 
    adj[dest].push_back(src); 
} 

bool bfs(vector<int> adj[], int src, int dest, int v, int pred[], int dist[])
{
    queue<int> q;

    bool visited[v];

    for(int i=0; i<v; i++)
    {
        visited[i]=false;
        pred[i]=-1;
        dist[i]=0;
    }
    visited[src] = true;
    dist[src] = 0;
    q.push(src);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i : adj[u])         {
            if(visited[i]==false)
            {
                visited[i]=true;
                dist[i] = dist[u]+1;
                pred[i] = u;
                q.push(i);

                if(i == dest)
                    return true;
            }
        }
    }
}
void printShortestDistance(vector<int> adj[], int s, int dest, int v)
{   
    int pred[v], dist[v];
    if(bfs(adj,s,dest,v,pred,dist)==false)
    {
        cout << "No path "<< endl;
        return;
    }
    int p;
    p= dest;
    cout << p << " ";
    for(int i=0; i<dist[dest];i++)
    {
        cout << pred[p] << " ";
        p = pred[p];

    }
    cout << endl;
        
}
int main() 
{ 
    // no. of vertices 
    int v = 8;  
  
    // array of vectors is used to store the graph 
    // in the form of an adjacency list 
    vector<int> adj[v]; 
  
    // Creating graph given in the above diagram. 
    // add_edge function takes adjacency list, source  
    // and destination vertex as argument and forms 
    // an edge between them. 
    add_edge(adj, 0, 1); 
    add_edge(adj, 0, 3); 
    add_edge(adj, 1, 2); 
    add_edge(adj, 3, 4); 
    add_edge(adj, 3, 7); 
    add_edge(adj, 4, 5); 
    add_edge(adj, 4, 6); 
    add_edge(adj, 4, 7); 
    add_edge(adj, 5, 6); 
    add_edge(adj, 6, 7); 
    int source = 0, dest = 6; 
    // int pred[v];
    // int dist[v];
    printShortestDistance(adj, source, dest, v); 
    return 0; 
}