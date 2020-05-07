#include<iostream> 
#include <vector> 
#include<queue>
  
using namespace std; 
  
class Graph 
{ 
    int V;   
    vector <int> *adj;    
public: 
    Graph(int V);  
    void addEdge(int v, int w);  
    void printGraph();
    void BFS(int s);   
    void BFS_dis(int s);
    void BFSforDis(int i, bool* visited);
}; 
  
Graph::Graph(int V) // V is number of vertex
{ 
    this->V = V; 
    adj = new vector<int>[V];
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w); // Add w to v’s list.
    //adj[w].push_back(v); // For undirected graph 
} 

void Graph:: printGraph()
{
    for(int i=0;i<V;i++)
    {   
        cout << i;
        for(int j=0; j<adj[i].size();j++)
            cout << "-> "<<adj[i][j];
        cout << endl;

    }
    cout << endl;
}  
void Graph::BFS(int source) 
{ 
    // Mark all the vertices as not visited 
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
  
    // Create a queue for BFS 
    queue<int> q; 
  
    // Mark the current node as visited and enqueue it 
    visited[source] = true; 
    q.push(source); 
  
    while(!q.empty()) 
    { 
        int u = q.front(); 
        cout << u << " "; 
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

void Graph::BFS_dis(int s)
{
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
    for(int i=0 ;i<V; i++){
        if(visited[i]==false)
            BFSforDis(i,visited);
    }
}
void Graph::BFSforDis(int source, bool visited[]) 
{ 
 
    queue<int> q; 
  
    visited[source] = true; 
    q.push(source); 
  
    while(!q.empty()) 
    { 
        int u = q.front(); 
        cout << u << " "; 
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
 
// int main() 
// { 
//     Graph g(4); 
//     g.addEdge(0, 1); 
//     g.addEdge(0, 2); 
//     g.addEdge(1, 2); 
//     g.addEdge(2, 0); 
//     g.addEdge(2, 3); 
//     g.addEdge(3, 3); 
  
//     cout << "Following is Breadth First Traversal "
//          << "(starting from vertex 2) \n"; 
//     g.printGraph();
//     g.BFS_dis(2); 
//     g.BFS(2);
  
//     return 0; 
// } 