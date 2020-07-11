// https://www.codechef.com/problems/COINS

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

void solve(ll n)
{   
    ll arr[n+1];
    arr[3] = 3;
    arr[1] = 1;
    arr[2] = 2;

    for(ll i=4; i<=n; i++){
        arr[i] = max((arr[i/2] + arr[i/3] + arr[i/4]), i);
    }
    cout << arr[n] << endl;
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll n;
  while(cin >> n){
  solve(n);
  }
  return 0;
}
