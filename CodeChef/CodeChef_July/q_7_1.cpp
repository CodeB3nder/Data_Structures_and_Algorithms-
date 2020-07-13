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
    ll n, q;
    cin >> n >> q;
    ll h[n + 2];
    ll a[n + 1];

    fo(i, n)
            cin >>h[i + 1];

    fo(i, n)
            cin >>a[i + 1];

    while (q--)
    {
        ll b, start, end;
        cin >> b >> start >> end;
        if (b == 1)
        {
            a[start] = end;
            continue;
        }
        else
        {
            if (start > end)
            {
                ll i = start;
                ll sum = 0;
                bool flag = false;
                stack<ll> st;
                st.push(i);
                while (i != end - 1)
                {
                    //cout << 1 << endl;
                    if (i!=start && h[i] >= h[start])
                    {
                        cout << -1 << endl;
                        flag = true;
                        break;
                    }
                    //cout << 2 << endl;
                    if (h[st.top()] <= h[i])
                    {
                        //cout << 2 << endl;
                        while (st.empty() == false && h[st.top()] <= h[i])
                        {
                            //cout << 5 << " " << st.top() << " ";
                            st.pop();
                        }
                        st.push(i);
                    }
                    else if (i != start)
                    {
                        //cout << 3 << endl;
                        st.push(i);
                    }
                    //cout << 4 << endl;
                    i--;
                }
                if (flag)
                {
                    continue;
                }
                while (!st.empty())
                {
                    //cout << st.top() << " " << h[st.top()] << endl;
                    sum += a[st.top()];
                    st.pop();
                }
                cout << sum << endl;
            }
            else if (end > start)
            {
                ll i = start;
                ll sum = 0;
                bool flag = false;
                stack<ll> st;
                st.push(i);
                while (i != end + 1)
                {
                    //cout << 1 << endl;
                    if (i!=start && h[i] >= h[start])
                    {   
                        //cout << 6 << endl;
                        cout << -1 << endl;
                        flag = true;
                        break;
                    }
                    //cout << 2 << endl;
                    // if(i!=start && h[st.top()] == h[i] && i!=end){
                    //     //cout << 8 << endl;
                    //     cout << -1 << endl;
                    //     flag = true;
                    //     break;
                    // }
                    if (h[st.top()] <= h[i])
                    {
                        //cout << 2 << endl;
                        while (st.empty() == false && h[st.top()] <= h[i] )
                        {
                            //cout << 5 << " " << st.top() << " ";
                            st.pop();
                        }
                        st.push(i);
                    }
                    else if (i != start)
                    {
                        //cout << 3 << endl;
                        st.push(i);
                    }
                    //cout << 4 << endl;
                    i++;
                }
                if (flag)
                {
                    continue;
                }
                while (!st.empty())
                {
                    //cout << st.top() << " " << h[st.top()] << endl;
                    sum += a[st.top()];
                    st.pop();
                }
                cout << sum << endl;
            }
            else    
                cout << a[start] << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
}
