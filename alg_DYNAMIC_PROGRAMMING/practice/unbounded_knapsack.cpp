# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int knapsack_topDown(int W, int n, int weight[], int value[]){
    int i, j; 
    int K[n + 1][W + 1]; 
  
    // Build table K[][] in bottom up manner 
    for (i = 0; i <= n; i++) { 
        for (j = 0; j <= W; j++) { 
            if (i == 0 || j == 0) 
                K[i][j] = 0; 
            else if(weight[i-1]>j)
                K[i][j] = K[i-1][j];
            else
                K[i][j] = max(value[i-1]+K[i][j-weight[i-1]], K[i-1][j]);
        }
    }
    return K[n][W]; 
}  
int main(){
    int n, W;
    cin >> n >> W;
    
    int weight[n];
    int value[n];
    for(int i=0; i<n; i++)
        cin >> weight[i] >> value[i];


    cout << knapsack_topDown(W,n,weight, value);

}