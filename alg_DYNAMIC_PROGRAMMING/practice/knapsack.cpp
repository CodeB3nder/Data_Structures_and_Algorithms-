# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int dp[100+1][1000+1] = {-1};

int knapsack_rec(int W, int wt[], int val[], int n) 
{ 

    if (n == 0 || W == 0) 
        return 0; 
  
    if (wt[n - 1] > W) 
        return knapsack_rec(W, wt, val, n - 1); 

    else
        return max( 
            val[n - 1] + knapsack_rec(W - wt[n - 1],  
                                    wt, val, n - 1), 
            knapsack_rec(W, wt, val, n - 1)); 
} 
int knapsack_memo(int weight[], int value[], int n, int W){
    if(n==0 || W==0)
        return 0;
    if(dp[n][W] != -1)
        return dp[n][W];
    if(weight[n-1] <= W){
        dp[n][W] = max(value[n-1] + knapsack_memo(weight, value, n-1, W-weight[n-1]), knapsack_memo(weight, value, n-1, W));
        return dp[n][W];
    }
    else{
        dp[n][W] = knapsack_memo(weight, value, n-1, W);
        return dp[n][W];
    }
}
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
                K[i][j] = max(value[i-1]+K[i-1][j-weight[i-1]], K[i-1][j]);
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
    cout << knapsack_rec(W,weight, value, n)<<endl;
    cout << knapsack_memo(weight, value, n, W)<<endl;

    cout << knapsack_topDown(W,n,weight, value);

}