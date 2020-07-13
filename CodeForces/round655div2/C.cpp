#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define fo(i, n) for (long long  i = 0; i < n; i++)
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
  ll n; cin >> n; ll a[n];
  ll c = 0;
  fo(i,n){
    cin >> a[i];
    if(a[i] != i+1)
        c++;
  }
  if(c%2 == 0)
  cout << c/2 << endl;
  else
  cout << c/2 + 1 << endl;
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
