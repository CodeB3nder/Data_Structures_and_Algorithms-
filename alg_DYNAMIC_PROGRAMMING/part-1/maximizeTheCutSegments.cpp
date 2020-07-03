# include <iostream>
using namespace std;

int max(int a, int b, int c)
{
    if(a>b && a>c) return a;
    else if(b>c) return b;
    else return c;  
}
int recursive(int n, int a, int b, int c){
    if(n<0)
       return -1;
    if(n==0)
        return 0;
    int res = max(recursive(n-a,a,b,c), recursive(n-b,a,b,c), recursive(n-c,a,b,c));
    if(res == -1)
        return res;
    else 
        return res+1;

}
int dynamic(int n, int a, int b, int c)
{
    int dp[n+1];
    dp[0]=0;
    for(int i=1; i<=n; i++)

    {
        dp[i] = -1;
        if(i-a >= 0)
            dp[i] = max(dp[i], dp[i-a]);
        if(i-b >= 0)
            dp[i] = max(dp[i], dp[i-b]);
        if(i-c >= 0)
            dp[i] = max(dp[i], dp[i-c]);
        if(dp[i] != -1)
            dp[i]++;
    }
    return dp[n];
}
int main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int a,b,c;
        cin >> a >> b >> c;
        cout << recursive(n,a,b,c);
        cout << dynamic(n,a,b,c);
        
    }
}