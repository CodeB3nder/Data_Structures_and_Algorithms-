// https://codeforces.com/contest/1358/problem/C

#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << (c - a) * (d - b) + 1 << '\n';
    }
}

// After each step, the sum on the way will increase by 1.

// We're going to bend like this until we get to the maximum sum. We're not going to miss any possible sum, because we're incrementing the sum by 1. We started with the minimum sum and finished with the maximum sum, so we can use these changes to get all possible sums.

// In order for us to come from the minimum to the maximum way, we must bend the way exactly 1 time per each cell of table (except for the cells of the minimum way). That is, the number of changes equals the number of cells not belonging to the minimum way — (x2−x1)⋅(y2−y1). Then the number of different sums will be (x2−x1)⋅(y2−y1)+1.

// The overall compexity is O(1) per test.