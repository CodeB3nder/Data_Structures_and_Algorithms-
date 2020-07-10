# include<iostream>
# include<bits/stdc++.h>
using namespace std;
int knapsack_topDown(int sum, int n, int coins[]){
    int i, j; 
    int K[n + 1][sum + 1]; 
    for(int i=1; i<=n;i++)
        K[0][i] = 0;
    for(int i=0; i<=sum;i++)
        K[i][0] = INT_MAX-1;
    for(int i=1;i<=sum;i++){
        if(i%coins[0] == 0)
            K[1][i] = i/coins[0];
        else
            K[1][i] = INT_MAX-1;
    }
    // Build table K[][] in bottom up manner 
    for (i = 1; i <= n; i++) { 
        for (j = 1; j <= sum; j++) {  
            if(coins[i-1]>j)
                K[i][j] = K[i-1][j];
            else
                K[i][j] = min(K[i][j-coins[i-1]] + 1, K[i-1][j]);
        }
    }
    return K[n][sum]; 
}  
int main(){
    int t; cin >> t;
    while(t--){
    int n, sum;
    cin >> n;
    
    int coins[n];

    for(int i=0; i<n; i++)
        cin >> coins[i];
    cin >> sum;
    cout << knapsack_topDown(sum,n,coins) << endl;
    }
}