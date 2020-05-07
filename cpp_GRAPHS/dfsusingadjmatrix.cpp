# include<bits/stdc++.h>
using namespace std;

void createGraph(int **arr, int n)
{
    for(int i=0; i<n;i++){
        arr[i] = new int[n];
        for(int j=0; j<n; j++)
            arr[i][j]=0;
    }
}
void printMatrix(int **arr, int n)
{
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++)
            cout << arr[i][j] << " "; 
        cout << endl;           
    }
    cout << endl;

}
void DFS(int **arr, int n, int source, bool *visited)
{
    cout << source << endl;
    visited[source]=true;
    for(int i=0; i<n; i++)
    {   
        if(i==source)
            continue;
        if(arr[source][i]==1)
        {   
            if(visited[i]==false)
                DFS(arr,n,i,visited);
        }
    }
}
void addEdge(int **arr, int s, int d)
{
    arr[s][d]=1;
    arr[d][s]=1;
}
int main()
{
    int n; int e;
    cin >> n >> e;
    int ** edges = new int*[n]; // 2d dynamic array
    createGraph(edges,n);
    //printGraph(edges, n);
    int s,d;
    for(int i=0; i<e; i++)
    {
        cin >> s >> d;
        addEdge(edges,s,d);
    }
    bool *visited = new bool[n];
    for(int i=0; i<n ; i++)
        visited[i] = false;
    //printGraph(edges,n);
    
}