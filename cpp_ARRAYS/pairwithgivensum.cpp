/*
   Given an array A[] and a number x, check for pair in A[] with sum as x
*/
#include <bits/stdc++.h>
using namespace std;

bool arrayPairwithSum(int arr[], int n, int sum)
{
    int l, r;
    sort(arr, arr + n);

    l = 0;
    r = n - 1;
    while (l < r)
    {
        if (arr[l] + arr[r] == sum)
            return true;
        else if (arr[l] + arr[r] > sum)
            r--;
        else
            l++;
    }
    return false;
}
void print_pairs(int arr[], int n, int sum)
{
    unordered_set<int> s;
    for(int i=0; i<n; i++)
    {
        int temp = sum -arr[i];
        if(s.find(temp) != s.end())
            cout << arr[i] << " " << temp << endl;
        s.insert(arr[i]);
    }
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin  >> n;
        int arr[n];
        int sum; cin >> sum;
        for(int i=0;i<n;i++)
            cin >> arr[i];
        if(arrayPairwithSum(arr,n,sum)){
            cout << "Yes" << endl;
            print_pairs(arr, n, sum);
        }
        else    
            cout << "No" << endl;
        
    }
}