# include <bits/stdc++.h>
# include<unordered_map>
# include <iostream>
using namespace std;


int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n; 
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        unordered_map<int, int> mp;
        mp[5] = 0;
        mp[10] = 0;
        mp[15] = 0;
        int i;
        for( i=0; i<n; i++){
            if(arr[i]==5)
                mp[arr[i]]++;
            if(arr[i]==10){
                if(mp[5]!=0){
                    mp[5]--;
                    mp[10]++;
                }
                else{
                    cout << "NO" << "\n";
                    break;
                }
            }
            if(arr[i]==15){
                if(mp[10]!=0)
                    mp[10]--;
                else if(mp[5]>=2)
                    mp[5] -= 2;
                else
                {
                    cout << "NO" << "\n";
                    break;   
                }
            }
            
        }
        if(i==n)
            cout << "YES" << "\n";


    }
    return 0;

}