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

int main()
{
    int v,e;
    cin>>v>>e;
    vector<int> adj[v];
    int a,b;
    for(int i=0; i<e; i++)
    {
        cin>>a>>b;
        addEdge(adj,a,b);
    }
    printGraph(adj,v);
}