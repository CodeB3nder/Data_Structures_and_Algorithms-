# include<iostream>
using namespace std;

void calPsum(int arr[], int n, int pSum[])
{
    //int pSum[n];
    pSum[0]=arr[0];
    for(int i=1;i<n;i++)
        pSum[i] = pSum[i-1] + arr[i]; 
}
int getSum(int pSum[], int l, int r)
{
    if(l!=0)
        return pSum[r]-pSum[l-1];
    else
        return pSum[r];
}
int main()
{
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int psum[n];
    calPsum(a,n,psum);
    cout << getSum(psum,1,3);
    
}