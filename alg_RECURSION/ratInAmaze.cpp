# include<bits/stdc++.h>
using namespace std;
// void printSolution(int** solution, int n)
// {
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout << solution[i][j] << " ";
//         }
//         cout << endl;
//     }
// }
// void mazeHelper(int maze[][20], int n, int **solution, int x, int y)
// {   
//     if(x == n-1 && y==n-1){
//         solution[x][y]=1;
//         printSolution(solution,n);
//         return;
//     }
//     if(x>=n || x<0 || y<0 || y>=n || solution[x][y]==1 || maze[x][y]==0)
//         return;
//     solution[x][y]=1;
//     mazeHelper(maze,n,solution,x-1,y);
//     mazeHelper(maze,n,solution,x+1,y);
//     mazeHelper(maze,n,solution,x,y-1);
//     mazeHelper(maze,n,solution,x,y+1);
//     solution[x][y]=0;

// }
// void ratInAMaze(int maze[][20], int n) // n no of row and columns
// {
//     int** solution = new int*[n];
//     for(int i=0; i<n; i++)
//         solution[i] = new int[n];
//     mazeHelper(maze, n, solution, 0, 0);
// }
void backtrack(int m[][30] ,int n,vector<string> list,int i,int j,string bf);
vector<string> printPath(int m[][30], int n){
    vector<string> list;
    string bf = "";
    backtrack(m,n,list, 0,0,bf);
    cout<< 1 << list[0];
    return list;
}
void backtrack(int m[][30] ,int n,vector<string> list,int i,int j,string bf)
    {
        if(i<0 || i>=n || j<0 || j>=n || m[i][j]==0)
            return;
        if(i==n-1 && j==n-1)
        {
            list.push_back(bf);
            return;
        }
        
        m[i][j]=0; //making it visited;
        
        backtrack(m,n,list,i+1,j,bf+"D");
        backtrack(m,n,list,i,j-1,bf+"L");
        backtrack(m,n,list,i,j+1,bf+"R");
        backtrack(m,n,list,i-1,j,bf+"U");
        
        m[i][j]=1;
    }
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int maze[n][30];
        for(int i = 0; i<n; i++)
            for(int j = 0; j<n; j++)
                cin >> maze[i][j];
        vector<string> list = printPath(maze,n);
        for(int j = 0; j<n; j++){
            cout << list[j] << " ";
        }
            cout << endl;
        }
    
}