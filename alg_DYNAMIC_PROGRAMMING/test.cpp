#include <algorithm>
#include <iostream>
#include <vector>
# include<bits/stdc++.h>

using namespace std;

int findMajority(int arr[], int size) 
{   
    
    unordered_map<int, int> m; 
    for(int i = 0; i < size; i++) 
        m[arr[i]]++; 
    int count = 0; 
    for(auto i : m) 
    {    
      
        if(i.second > size / 2) 
        { 
            return 1;
        } 
    } 
    return 0;
} 
int main()
{ 
  
  int n;
  cin >> n;
  int arr[n];
for (size_t i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }
  cout << (findMajority(arr,n)) << '\n';
}