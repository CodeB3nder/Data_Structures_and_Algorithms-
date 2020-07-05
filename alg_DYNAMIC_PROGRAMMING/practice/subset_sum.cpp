# include <iostream>
# include<bits/stdc++.h>
using namespace std;
// Count the number of subsets with a given sum 
int subset_sum_rec(int arr[], int n, int sum){
    if(n==0)
        return (sum==0)? 1:0;
    return 
        subset_sum_rec(arr,n-1,sum) || subset_sum_rec(arr,n-1,sum-arr[n-1]);
}
//  dp(i,j) Is it possible to form a Subset with i elements that is arr[0..i] and target sum j  
int subset_sum_exists_dp(int arr[], int n, int sum)
{
    bool dp[n+1][sum+1]; 
    for (int i = 0; i <= n; i++) 
        dp[i][0] = true; 

    for (int i = 1; i <= sum; i++) 
        dp[0][i] = false; 

    for (int i=1; i<=n; i++) 
    { 
        for (int j=1; j<=sum; j++) 
        { 
            dp[i][j] = dp[i-1][j]; 
            if (arr[i-1] <= j) 
                dp[i][j] |= dp[i-1][j-arr[i-1]]; 
        } 
    }
    return dp[n][sum];

}

//dp(i,j) is the number of subsets with sum j and arr[0...i]

int subset_count(int arr[], int n, int sum)
{   
    int dp[n+1][sum+1];
     for(int i=0; i<=n; i++)
        for(int j=0; j<=sum;j++)
            dp[i][j]=0;

    for (int i = 0; i <= n; i++) 
        dp[i][0] = 1; 
  
    for (int i = 1; i <= sum; i++) 
        dp[0][i] = 0; 


    for(int i=1; i<=n; i++){
        for(int j=1; j<=sum;j++){
            if(j < arr[i-1])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
             
        }
    }
   
    return dp[n][sum];
}
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i=0; i <n; i++){
        cin >> arr[i];
    }
    int sum; cin >> sum;
    cout << subset_sum_rec(arr,n,sum) << endl;
    cout << subset_sum_exists_dp(arr,n,sum);
    //cout<< subset_count(arr,n,sum) ;
}
