# include<iostream>
using namespace std;

int cut(int price[],int length,int n)
{   
    if(n==0 || length==0 || length<n)
        return 0;
    return max(cut(price,length,n-1), cut(price,length-n,n-1)+price[n-1]);
}
int main()
{
    int cost[4] = {1,5,8,9};
    cout << cut(cost, 5, 4);
}