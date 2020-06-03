// CPP Program to check if array 
// can be split into K contiguous 
// subarrays each having equal sum 
#include <bits/stdc++.h> 
using namespace std; 
  
// function returns true to it is possible to 
// create K contiguous partitions each having 
// equal sum, otherwise false 
int KpartitionsPossible(int arr[], int n, int k) 
{ 
    int sum = 0; 
    int count = 0; 
      
    // calculate the sum of the array 
    for(int i = 0; i < n; i++) 
    sum = sum + arr[i]; 
      
    if(sum % k != 0) 
    return 0; 
      
    sum = sum / k; 
    int ksum = 0; 
      
    // ksum denotes the sum of each subarray 
    for(int i = 0; i < n; i++) 
    { 
    ksum=ksum + arr[i]; 
      
    // one subarray is found 
    if(ksum == sum) 
    { 
        // to locate another 
        ksum = 0; 
        count++; 
    } 
      
    } 
      
    if(count == k) 
    return 1; 
    else
    return 0; 
      
} 
  
// Driver code 
int main() { 
  
int arr[] = { 1, 1, 2, 2};  
int k = 2; 
    int n = sizeof(arr) / sizeof(arr[0]);  
    if (KpartitionsPossible(arr, n, k) == 0)  
        cout << "Yes"; 
    else
        cout<<"No"; 
    return 0;  
  
} 