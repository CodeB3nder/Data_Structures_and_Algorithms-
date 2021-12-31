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

void solve(ll t)
{
    ll n;
    cin >> n;
    ll v[n];
    fo(i,n)
        cin >> v[i];
    bool flag = true;
    bool flag_ = true;
    ll res = 0;
    for(ll i=0; i<n; i++)
    {   
        if(i==0){
            if(v[i+1] < v[i])
                res++;
            continue;
        }
        if(i==n-1){
                for(ll j=i-1; j>=0; j--){
                    if(v[i]<=v[j])
                        flag_ = false;
            }
            if(flag_){
                res++;
                continue;
            }
        }
        if(v[i+1]<v[i]){
            for(ll j=i-1; j>=0; j--){
                if(v[i]<=v[j])
                    flag = false;
            }
        }
        else
            continue;
        if(flag==true)
            res++;
    }
    cout << "Case #" << t << ":" <<  " " << res << endl;
    
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll t = 1;
  cin >> t;
  for(ll i = 0; i<t; i++)
  {
    solve(i+1);
  }
  return 0;
}
