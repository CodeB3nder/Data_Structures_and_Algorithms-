#include <iostream>
using namespace std;
int getCount(int arr[], int n, int sum)
{
    if (sum == 0)
        return 1;
    if (n == 0)
        return 0;

    int res = getCount(arr, n - 1, sum);
    if (arr[n - 1] <= sum)
        res += getCount(arr, n, sum - arr[n - 1]);
    return res;
}
int getcountdp(int arr[], int n, int sum)
{
    int dp[sum + 1][n + 1];
    for (int i = 0; i <= n; i++)
        dp[0][i] = 1;
    for (int i = 1; i <= sum; i++)
        dp[i][0] = 0;
    for(int i=1; i<=sum;i++){
        for(int j=1; j<=n;j++)
        {
            dp[i][j]=dp[i][j-1];
            if(arr[j-1]<=i)//jth coin smaller than or equal to i
                dp[i][j] += dp[i-arr[j-1]][i]; 
        }
    }
    return dp[sum][n];
    
}
int main()
{
 
    int arr[] = {1, 2, 3}; 
    int m = sizeof(arr)/sizeof(arr[0]); 
    cout <<  getCount(arr, m, 4)<<endl; 
    cout <<  getcountdp(arr, m, 4)<<endl; 

    return 0; 
} 
