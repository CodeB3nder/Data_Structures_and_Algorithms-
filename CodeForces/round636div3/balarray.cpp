# include <iostream>
using namespace std;

void solve()
{
    int n;cin>>n;
    if((n/2)%2 ==1){
        cout << "NO" << endl;
        return ;
    }
    else
    {
        cout << "YES" << endl;
        int sum=0;
        int osum = 0;
        for(int i=1; i<=n/2; i++){
            cout << 2*i << " ";
            sum += 2*i;
        }
        for(int i=1;i<=n/2-1;i++)
        {
            cout << (2*i-1) << " ";
            osum += 2*i-1;
        }
        cout << sum - osum << endl;
    }
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