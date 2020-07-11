#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    int ans = min(B / A, C);
    cout << ans << endl;
}
