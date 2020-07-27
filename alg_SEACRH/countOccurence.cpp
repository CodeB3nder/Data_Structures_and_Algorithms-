#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        vector < int > a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
 
        int l = lower_bound(a.begin(), a.end(), x)-a.begin();
        int h = upper_bound(a.begin(), a.end(), x) - a.begin();
        cout << l << "\n" << h;
    //     int ans = h - l;
    //     if(ans)
    //         cout << ans << "\n";
    //     else
    //         cout << "-1\n";
    // 
    }
    return 0;
}
 