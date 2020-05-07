# include <iostream>
using namespace std;
# define f(n) for(int i=0;i<n;i++)
# define long long int lli
bool pairsum(int arr[], int n, int k)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {   
        if(arr[i]+arr[j]==k)
            return true;
        else if(arr[i]+arr[j]>k)
            j--;
        else
            i++;

    }
    return false;    
}
void solve()
{
    int n;cin>>n;
    int arr[n];
    f(n)
        cin >> arr[i];
    int k;cin>>k;
    if(pairsum(arr,n,k))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}