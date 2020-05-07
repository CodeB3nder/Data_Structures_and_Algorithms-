/*  
 * Find a subsequence in given array in which the subsequence's elements are 
 * in sorted order, lowest to highest, and in which the subsequence is as long as possible
 * 
 * Reference: 
 * 1) Geeksforgeeks
 * 2) Tushar
 */
# include <bits/stdc++.h>
# include<iostream>
using namespace std;

int LIS(int arr[], int n)
{
    int dp[n];
    memset(dp,0,sizeof(dp));
    for(int i=1; i<n;i++){
        for(int j=0; j<i; j++){
            if(arr[j]<arr[i])
                dp[i]=max(dp[i], dp[j]+1);
        }
    }
    return *max_element(dp, dp+n);
}
int main()
{
    int arr[] = {3,4,-1,0,6,2,3};
    cout << LIS(arr, 7) ;
    return 0;
}