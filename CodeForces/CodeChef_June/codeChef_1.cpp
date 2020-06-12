# include <bits/stdc++.h>
# include <iostream>
using namespace std;


int main()
{
   
    int t;
    cin >> t;
    while(t--){
        int res = 0;
        int n; cin >> n;
        int arr[n]; int p;
        cin >> p;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]>p){
                //cout << p << " " << arr[i] << endl;
                res += arr[i] - p;
            }
        }
        cout << res << endl;
    }
    return 0;
}
