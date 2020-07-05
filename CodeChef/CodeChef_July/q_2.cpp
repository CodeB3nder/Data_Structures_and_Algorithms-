#include <bits/stdc++.h>
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

ll power(ll n){
    ll sum=0;
    while(n!=0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}
void solve()
{
    ll n; cin >> n;
    ll a[n],b[n];
    fo(i,n)
        cin >> a[i] >> b[i];
    ll chef = 0;
    ll morty = 0;
    fo(i,n){
        if(power(a[i]) > power(b[i]))
            chef++;
        else if(power(a[i]) < power(b[i]))
            morty++;
        else
        {
            chef++;
            morty++;
        }
    }
    if(chef > morty){
        cout << 0 << " " << chef << endl;
    }
    else if(chef < morty){
        cout << 1 << " " << morty << endl;
    }
    else
    {
        cout << 2 << " " <<  morty << endl;
    }
    
    
    
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
