#include <iostream>
using namespace std;
int maxGold(int **ar, int i, int j,int n, int m, int **dp)
{   
    if(i<0 || i>=n || j>=m)
        return 0;
    if(j==m-1)
        return ar[i][j];
    if(dp[i][j]!=-1) 
        return dp[i][j];
    int x = maxGold(ar,i-1,j+1,n,m,dp);
    int y = maxGold(ar,i,j+1,n,m,dp);
    int z = maxGold(ar,i+1,j+1,n,m,dp);
    dp[i][j] = ar[i][j] + max(x,max(y,z));
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int **ar = new int *[n];
        for (int i = 0; i < n; i++)
            ar[i] = new int[m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> ar[i][j];
            }
        }
        int **dp = new int *[n];
        for (int i = 0; i < n; i++)
            dp[i] = new int[m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                dp[i][j] = -1;
            }
        }
        int max_ans = 0;
        for(int i=0; i<n; i++)
        {
            int ans = maxGold(ar,i,0,n,m,dp);
            max_ans = max(max_ans, ans);
        }
        cout << max_ans << endl;
    }
}