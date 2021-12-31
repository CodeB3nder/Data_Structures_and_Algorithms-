#include <bits/stdc++.h>
#include<unordered_map>
# include <unordered_set>
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
    int m, n; cin >> n >> m;
    int s1[n], s2[n];
    unordered_set<int> set_;
    fo(i,n){
      cin >> s1[i];
      set_.insert(s1[i]);
    }
     
   
    fo(i,m){
      cin >> s2[i];
 
    }
    bool flag = false;
    int x;
    fo(i,m){
        if(set_.find(s2[i])!=set_.end()){
          flag = true;
          x = s2[i];
          break;
      }
    }
    if(flag){
      cout << "YES" << endl;
      cout << 1 << " " << x << endl;
    }
    else{
      cout << "NO" << endl;
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
