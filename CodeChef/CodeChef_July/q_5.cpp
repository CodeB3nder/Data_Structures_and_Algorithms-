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
typedef unordered_set<int> us;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
const int mod = 1'000'000'007;
bool areEqual(ll arr1[], ll arr2[], ll n) 
{  
    unordered_map<ll, ll> mp; 
    for (ll i = 0; i < n; i++) 
        mp[arr1[i]]++; 

    for (ll i = 0; i < n; i++) { 

        if (mp.find(arr2[i]) == mp.end()) 
            return false; 

        if (mp[arr2[i]] == 0) 
            return false; 
  
        mp[arr2[i]]--; 
    } 
  
    return true; 
} 
void solve()
{
    ll n;
    cin >> n;
    ll a[n],b[n];
    um freq_a;
    um freq_b;
    um freq;
    um occur;
    ll min_ = INT_MAX;
    fo(i,n){
        cin >> a[i];
        freq_a[a[i]]++;
        min_ = min(min_,a[i]);
        freq[a[i]]++;
    }
    // cout << "-fs";

    fo(i,n){
        cin >> b[i];
        freq_b[b[i]]++;
        min_ = min(min_, b[i]);
        freq[b[i]]++;       
    }

    if(areEqual(a,b,n)){
        cout << 0 << endl;
        return;
    }
    //cout << min_ << endl;
    bool flag_ = false; 
    for(auto i:freq){
     // cout << i.first << " " << i.second << " ";
        if(i.second %2 == 1){
            flag_ = true;
            break;
        }
    }
    if(flag_){
        cout << -1 << endl;
        return;
    }
    sort(a,a+n);
    sort(b,b+n);
    vi res;
    for(ll i=0; i<n; i+=freq_a[a[i]]){
        if(freq_a[a[i]] >= freq_b[a[i]])
        {
            ll count = abs(freq_a[a[i]] - freq_b[a[i]])/2;
            while(count--){
                res.push_back(a[i]);
            }
        }
    }
    for(ll i=0; i<n; i+=freq_b[b[i]]){
        if(freq_b[b[i]] > freq_a[b[i]])
        {
            ll count = abs(freq_a[b[i]] - freq_b[b[i]])/2;
            while(count--){
                res.push_back(b[i]);
            }
        }
    }



     sort(res.begin(), res.end());
    fo(i,res.size())
        cout << res[i] << " ";
    ll sum = 0;
    for(ll i=0; i<res.size()/2; i++){
        if(res[i] < 2*min_)
            sum += res[i];
        else
            sum += 2*min_;    
    }
    
    cout << sum << endl;
    return;

}
    


int main()
{
  //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
