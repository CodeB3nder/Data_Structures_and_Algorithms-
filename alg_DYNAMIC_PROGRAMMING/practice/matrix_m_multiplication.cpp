# include <iostream>
# include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[100+1][1000+1];
int mcm(int arr[], int i, int j)
{   
    if(i>=j)
        return 0;
    int min_= INT_MAX;
    if(dp[i][j] != -1)
        return dp[i][j];
    for(int k=i; k<j; k++){
        int cost = mcm(arr,i,k)+mcm(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        min_ = min(min_,cost);
    }
    dp[i][j] = min_;
    return min_;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        memset(dp, -1, sizeof(dp));
        cout<<mcm(arr, 1, n-1)<<"\n";

    }
    return 0;
}