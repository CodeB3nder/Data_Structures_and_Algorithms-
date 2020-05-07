#include <bits/stdc++.h> 
using namespace std; 

void add_edge(vector<int> adj[], int src, int dest) 
{ 
    adj[src].push_back(dest); 
    adj[dest].push_back(src); 
} 
bool DFSrec(vector<int> adj[], int source, bool visited[],int parent)
{
    visited[source]=true;
    //cout << source << " ";

    for(int v : adj[source])
    {
        cout << "outside" << "source:"<<source <<  " "<< "v:" << v << " " << "parent:"<< parent << " " ;
        if(visited[v]==false)
        {
            if (DFSrec(adj,v,visited,source)==true)
            {      
        cout << "if"<<"source:"<<source <<  " "<< "v:" << v << " " << "parent:"<< parent << " " ;
                //cout << source << " " << v << " " ;
                //cout << "true ";
                return true;
            }
            else if(v!=parent)
            {   
        cout <<"else:"<< "source:"<<source <<  " "<< "v:" << v << " " << "parent:"<< parent << " " ;
                cout << "else:";
                //cout << "false ";
                return true;

        }
        }
    }
        cout << "false ";
        return false;
}
bool DFS(vector<int> adj[], int V,int source)
{
    bool visited[V];
    for(int i=0; i<V; i++)
        visited[i]=false;
    for(int i=0; i<V; i++)
    {
        if(visited[i]==false)
{
               //cout << "true ";
                return DFSrec(adj,i,visited,-1);
}
        return false;
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

    cout << DFS(adj, v, 0);
}
