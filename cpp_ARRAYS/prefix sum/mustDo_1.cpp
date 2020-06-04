// C++ program for SP- partition 
#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find the partition 
void partition(int a[], int n) 
{ 
    unordered_map<long long, long long> mpp; 
  
    // mark the last occurrence of every element 
    for (int i = 0; i < n; i++) 
        mpp[a[i]] = i; 
  
    // calculate the prefix sum 
    long long presum[n]; 
    presum[0] = a[0]; 
    for (int i = 1; i < n; i++) 
        presum[i] = presum[i - 1] + a[i]; 
  
    // calculate the suffix sum 
    long long sufsum[n]; 
    sufsum[n - 1] = a[n - 1]; 
    for (int i = n - 2; i >= 0; i--) { 
        sufsum[i] = sufsum[i + 1] + a[i]; 
    } 
  
    // Check if partition is possible 
    bool possible = false; 
  
    // Stores the absolute difference 
    long long ans = 1e18; 
  
    // stores the last index till 
    // which there can not be any partition 
    long long count = 0; 
  
    // Stores the partition 
    long long index = -1; 
  
    // Check if partition is possible or not 
    // donot check for the last element 
    // as partition is not possible 
    for (int i = 0; i < n - 1; i++) { 
  
        // takes an element and checks it last occurrence 
        // stores the maximum of the last occurrence 
        // where partition can be done 
        count = max(count, mpp[a[i]]); 
  
        // if partition is possible 
        if (count == i) { 
  
            // partition is possible 
            possible = true; 
  
            // stores the left array sum 
            long long sumleft = presum[i]; 
  
            // stores the right array sum 
            long long sumright = sufsum[i + 1]; 
  
            // check if the difference is minimum 
            if ((abs(sumleft - sumright)) < ans) { 
                ans = abs(sumleft - sumright); 
                index = i + 1; 
            } 
        } 
    } 
  
    // is partition is possible or not 
    if (possible) 
        cout << index << ".5" << endl; 
    else
        cout << -1 << endl; 
} 
  
// Driver Code- 
int main() 
{ 
    int a[] = { 1, 2, -1, 2, 3 }; 
    int n = sizeof(a) / sizeof(a[0]); 
  
    partition(a, n); 
    return 0; 
} 