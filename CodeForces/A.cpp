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

void solve()
{
    int n; cin >> n; int arr[n];
    int max_ = INT_MIN;
    fo(i,n){
        cin >> arr[i];
        max_ = max(max_,arr[i]);
    }
    unordered_map<int,string> mp;
    string res;
    res = "abcdefghijklmnopqrstuvwzyzabcdefghijklmnopqrstuvwxyz";
    int count = 1;
    fo(i,n){
        if(arr[i]!=max_)
            cout << res.substr(0,arr[i]) << endl;
        else if(count==0){
            cout << res.substr(0,arr[i]) << "\n" << res.substr(0,arr[i])<< endl; 
            count = 1;
        }
    }
}

int main()
{
 // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
