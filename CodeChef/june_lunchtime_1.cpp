#include <bits/stdc++.h>
#include <unordered_map>
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
 
    vector<int> v1, v2; 
    unordered_map<int, int> um; 
    ll n; cin >> n;
    ll a[n];
    ll max_ = INT_MIN;
    string res;
    for (int i = 0; i < n; i++) { 
        
        cin >> a[i];
        max_ = max(max_, a[i]);
        um[a[i]]++; 
  
        if (um[a[i]] == 1) 
            v1.push_back(a[i]); 
  
        else if (um[a[i]] == 2) 
            v2.push_back(a[i]); 
  
        else { 
             res = "NO";
        } 
    } 
    if(res == "NO"){
        cout << res << endl;
        return;
    }

    if(um[max_]>=2){
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;
    sort(v1.begin(), v1.end()); 
    //cout << "__1" << endl;
    for (auto it : v1) 
        cout << it << " "; 
    //cout << endl << "ewe";
      //cout << "__2" << endl;

    sort(v2.begin(), v2.end(), greater<int>()); 

    for (auto it : v2) 
        cout << it << " ";
    cout << endl; 
    return;
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
