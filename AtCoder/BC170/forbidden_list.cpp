#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
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
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef unordered_map<int, int> map;
typedef unordered_set<int> set;
const int mod = 1'000'000'007;

void solve()
{
    int x, n; cin >> x >> n;
    unordered_set<int> input;
    for(int i=0 ;i<n; i++)
    {
        int m; cin >> m;
        input.insert(m);
    }
    int j = 1;
    while(true){
        if(input.find(x-j) == input.end()){
            cout << x-j << endl;
            return;
        }
        if(input.find(x+j) == input.end()){
            cout << x+j << endl;
            return;
        }
        j++;
    }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  
    solve();
  
  return 0;
}
