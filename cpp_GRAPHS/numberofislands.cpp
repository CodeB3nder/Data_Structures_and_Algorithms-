# include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{    for(int i=0;i<V;i++)
    {   
        cout << i;
        for(int j=0; j<adj[i].size();j++)
            cout << "-> "<<adj[i][j];
        cout << endl;

    }

}
void BFSforDis(vector<int> adj[], int source, bool visited[]) 
{ 
   
    queue<int> q; 
  
    visited[source] = true; 
    q.push(source); 
  
    while(!q.empty()) 
    { 
        int u = q.front(); 
        //cout << u << " "; 
        q.pop(); 

        for (int v : adj[u]) 
        { 
            if (visited[v]==false) 
            { 
                visited[v] = true; 
                q.push(v); 
            } 
        } 
    } 
} 
int BFS_dis(vector<int> adj[] , int s, int V)
{
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
    int count = 0;
    for(int i=0 ;i<V; i++){
        if(visited[i]==false){
            BFSforDis(adj,i,visited);
            count++;
        }
    }
    return count;
}
int main()
{   
    vector<int> adj[7];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,2,3);
    addEdge(adj,4,5);
    addEdge(adj,4,6);
    addEdge(adj,5,6);
    cout << BFS_dis(adj,0,7);
}