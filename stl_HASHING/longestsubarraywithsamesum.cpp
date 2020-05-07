#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int count(int arr[], int n, int sum)
{
    unordered_map<int, int> um;
    int prefix_sum=0;
    int res = 0;
    for(int i=0;i<n;i++)
    {
        prefix_sum +=arr[i];
        if(prefix_sum==sum)
            res = i+1;
        if(um.find(prefix_sum)==um.end())
          um[prefix_sum]=i; // um.insert(make_pair(prefix_sum,i)); um.insert({prefix_sum,i})
        if(um.find(prefix_sum-sum)!=um.end())
            res = max(res, i-um[prefix_sum-sum]);
    }
    return res;
}

int main()
{
    int arr1[] = {0,1,0,0,0,0};
    int arr2[] = {1,0,1,0,0,1};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    int sum = 0;
    int arr[n];
    for(int i=0; i<n;i++)
        arr[i] = arr2[i]-arr1[i];
    cout << count(arr, n,sum);
}