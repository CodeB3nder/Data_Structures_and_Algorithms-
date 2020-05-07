# include <iostream>
using namespace std;

void solve()
{
    long int n;
    cin>>n;
    for(int k=2; k<=29; k++)
    {
        int val = (1<<k)-1;
        if(n%val==0){
            cout << n/val << endl;
            break;
        }
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