# include<iostream>
using namespace std;
int fib(int n,int memo[])
{
    if(n==0 || n==1)
        return n;
    if(memo[n]!=0)
        return memo[n];
    else
    {
        memo[n] = fib(n-1, memo)+fib(n-2,memo);
        return memo[n];
    }
    
}
int main()
{
    int n;
    cin >> n;
    int memo[n+1] = {0};
    cout << fib(n,memo);
}
