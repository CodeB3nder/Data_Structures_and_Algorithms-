//Minimum cost for ropes
# include <iostream>
# include <bits/stdc++.h>
using namespace std;
// Your code here

long long minCost(long long arr[], long long n){
    priority_queue<long long ,vector<long long>,greater<long long>> p(arr, arr+n);
    long long res = 0;
    while(p.size()!=1)
    {
         long long sum=p.top();
         p.pop();
     
         sum+=p.top();
         p.pop();
         p.push(sum);
         res+=sum;

    }
    return res;
}
int main()
{
    
}