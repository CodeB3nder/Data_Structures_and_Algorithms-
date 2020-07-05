# include <iostream>
# include<bits/stdc++.h>
using namespace std;
bool subset_sum(int arr[],int n,int sum){

    bool dp[n+1][sum+1];
    for(int i=0; i<=n; i++){
        for(int j=0; j<=sum;j++){
            if(i==0)
                dp[i][j]=false;
            if(j==0)
                dp[i][j]=true;
            if(j < arr[i-1])
                dp[i][j] = dp[i-1][j];
            else
                dp[i][j] = dp[i-1][j] || dp[i-1][j-arr[i-1]];
             
        }
    }
    return dp[n][sum];
}
int main(){
    int n; cin >> n;
    int arr[n];
    int sum = 0;
    // If equal sum partiotion exists then the total sum must be even, so that it can be partitioned in sum/2
    
    for(int i=0; i <n; i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    if(sum%2 == 0)
        cout << subset_sum(arr,n,sum/2);
    else
        cout << 0 ;
    
}