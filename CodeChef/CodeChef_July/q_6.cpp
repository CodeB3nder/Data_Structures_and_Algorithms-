#include <bits/stdc++.h>
#include<algorithm>
#include<unordered_map>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef unordered_map<int, int> um;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int mod = 1'000'000'007;

void solve()
{
    ll n,x,a; cin >> n >> x;
    int arr[n];
    fo(i,n)
        cin >> arr[i];
    sort(arr, arr+n, greater<int> ());
    //equal
    ll dum = arr[0];
    ll count = 0;
    while(dum>0){
        cout << dum << " " << x << endl;
        a = dum;
        dum -= x;
        
        count++;
        if(dum >= arr[0]/2)
            dum = arr[0];
        else if(dum < arr[0]/2 && dum > 0)
            dum = 2*(a-x);
        x *= 2;
    }
    count += n-1;
    cout << count << endl;
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
