// URL : https://codeforces.com/contest/1358/problem/A
#include <iostream>

using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        cout << (n * m + 1) / 2 << '\n';
    }
}