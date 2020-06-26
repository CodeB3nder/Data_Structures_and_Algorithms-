#include <bits/stdc++.h> 
using namespace std; 

void add_edge(vector<int> adj[], int src, int dest) 
{ 
    adj[src].push_back(dest); 
    adj[dest].push_back(src); 
} 
bool DFSrec(vector<int> adj[], int source, bool visited[], int parent)
{
    visited[source] = true;
    for(int v : adj[source]){
        if(visited[v] == false){
            if(DFSrec(adj, v, visited, source) == true)
                return true;
        }
        else if(v!=parent)
            return true;
    }   
    return false;
}
bool DFS(vector<int> adj[], int V)
{
    bool visited[V];
    for(int i=0; i<V; i++)
        visited[i]=false;
    for(int i=0; i<V; i++)
    {
        if(visited[i]==false)
            if(DFSrec(adj, i, visited, -1) == true)
                return true;
       
    }
}
int main() 
{ 
    // no. of vertices 
    int v = 6;  
  
    // array of vectors is used to store the graph 
    // in the form of an adjacency list 
    vector<int> adj[v]; 
  
    // Creating graph given in the above diagram. 
    // add_edge function takes adjacency list, source  
    // and destination vertex as argument and forms 
    // an edge between them. 
    add_edge(adj, 0, 1); 
    add_edge(adj, 1, 2); 
    add_edge(adj, 2, 4); 
    add_edge(adj, 2, 3); 
    add_edge(adj, 1, 3); 
    add_edge(adj, 4, 5); 

    cout << DFS(adj, v);
}
/*

bool isCyclicUtil(vector<int> g[],bool* visited,int sv,int parent){
    visited[sv]=true;
    for(int i=0;i<g[sv].size();i++){
        if(visited[g[sv][i]]==false){
            if(isCyclicUtil(g,visited,g[sv][i],sv))
                return true;
        }
        else if(parent!=g[sv][i]){
            return true;
        }
    }
    return false;
}
bool isCyclic(vector<int> g[], int V)
{
    // Your code here
    bool* visited=new bool [V];
    for(int i=0;i<V;i++){
        visited[i]=false;
    }
    for(int i=0;i<V;i++){
        if(visited[i]==false){
            if(isCyclicUtil(g,visited,i,-1))
                return true;
        }
    }
    return false;
}

*/