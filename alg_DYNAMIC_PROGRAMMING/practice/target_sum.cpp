# include <iostream>
# include<bits/stdc++.h>
using namespace std;

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
    int sum = 0;
    for(int i=0; i <n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    int diff; cin >> diff;
    int val = (diff+sum)/2;
    cout << subset_count(arr,n,val);
    //cout<< subset_count(arr,n,sum) ;
}
