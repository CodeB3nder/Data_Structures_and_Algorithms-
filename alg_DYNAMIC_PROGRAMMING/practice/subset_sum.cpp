# include <iostream>
# include<bits/stdc++.h>
using namespace std;
// Count the number of subsets with a given sum 
int subset_sum_rec(int arr[], int n, int sum){
    if(n==0)
        return (sum==0)? 1:0;
    return 
        subset_sum_rec(arr,n-1,sum) + subset_sum_rec(arr,n-1,sum-arr[n-1]);
}

int subset_sum_exists_dp(int arr[], int n, int sum)
{
    int dp[n+1][sum+1];
    

}
