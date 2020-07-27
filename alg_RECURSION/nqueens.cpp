# include<bits/stdc++.h>

using namespace std;

int board[11][11];
bool isPossible(int n, int row, int col){
    // Same Column
    for(int i=row-1; i>=0; i--){
        if(board[i][col]==1)
            return false;
    }

    //Upper left diagonal
    for(int i= row-1,j=col-1 ;i>=0 && j>=0; i--, j-- ){
        if(board[i][j]==1)
            return false;
    }
    //Upper right diagonal
    for(int i= row-1,j=col+1 ;i>=0 && j<n; i--, j++ ){
        if(board[i][j]==1)
            return false;
    }
    return true;
}
void nQueenHelper(int n ,int row){
    if(row==n){
            cout <<"[";
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]==1)
                    cout << j+1 << " ";
                //cout << board[i][j] << " ";
            }
        }
        cout << "] ";
        

    }
    for(int j=0; j<n; j++){
        if(isPossible(n,row,j)){
            board[row][j]=1;
            nQueenHelper(n,row+1);
            board[row][j]=0;
        }
    }
    return;
}
void placeNQueens(int n){
    memset(board, 0, sizeof(board));
    nQueenHelper(n,0);
    cout << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n==2 || n==3){
            cout << -1 << endl;
            continue;
        }
        placeNQueens(n);
    }
}