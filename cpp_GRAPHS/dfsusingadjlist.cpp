# include<bits/stdc++.h>
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

void DFSrec(vector<int> adj[], int source, bool visited[])
{
    visited[source]=true;
    cout << source << " ";

    for(int v : adj[source])
    {
        if(visited[v]==false)
            DFSrec(adj,v,visited);
    }
}
void DFS(vector<int> adj[], int V,int source)
{
    bool visited[V];
    for(int i=0; i<V; i++)
        visited[i]=false;
    for(int i=0; i<V; i++)
    {
        if(visited[i]==false)
            DFSrec(adj,i,visited);
    }
}


int main()
{
    int n; int e;
    cin >> n >> e;
    vector<int> edges[n];
    //printGraph(edges, n);
    int s,d;
    for(int i=0; i<e; i++)
    {
        cin >> s >> d;
        addEdge(edges,s,d);
    }
    DFS(edges, n, 0);
    //printGraph(edges,n);
    
}