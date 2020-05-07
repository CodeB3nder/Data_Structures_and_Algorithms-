# include <iostream>
# include <bits/stdc++.h>
# include<unordered_map>
#define F(n) for (int i = 0; i < n; i++)
using namespace std;
void count_frequency(int arr[], int n)
{
    unordered_map<int,int> mp;
    F(n)
        mp[arr[i]]++;
    // for(auto x : mp)
    //     cout << x.first << " " << x.second << endl;
    for (int i = 0; i < n; i++) { 
      if (mp[arr[i]] != -1) 
      { 
          cout << arr[i] << " " << mp[arr[i]] << endl; 
          mp[arr[i]] = -1; 
      } 
    } 
}

int main() 
{ 
    int arr[] = { 10, 20, 20, 10, 10, 20, 5, 20 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    count_frequency(arr, n); 
    return 0; 
} 