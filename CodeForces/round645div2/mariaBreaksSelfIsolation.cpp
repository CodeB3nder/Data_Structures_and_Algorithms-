// URL : https://codeforces.com/contest/1358/problem/B
#include <iostream>
# include <vector>
# include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> arr(n);
        for (int &elem : arr)
            cin >> elem;
        sort(arr.begin(), arr.end());
        for(int i=n-1 ; i>=0; i--){
            if(arr[i]<=i+1) {
                cout << i+2 << endl; // Indexing starts from 0 and Maria is another granny in the party 
                return 0;
            }
        }
        cout << 1 << endl; // If nothing satisfies and Maria is the only granny
    }
}

// Let x be the maximum number of grannies that can go out to the yard. Then if Maria Ivanovna calls them all at the same time,
// then everyone will see x grannies. Since x is the maximum answer, then each granny of them satisfy ai≤x (otherwise there's no 
// way for these grannies to gather in the yard), that is, such call is correct. So it is always enough to call once.
// Note that if you order grannies by ai, Maria Ivanovna will have to call x first grannies from this list. She can take x grannies if ax≤x (otherwise, after all x grannies arrived, the last one will leave). To find x we can do a linear search.
// The overall compexity is O(nlogn) per test.