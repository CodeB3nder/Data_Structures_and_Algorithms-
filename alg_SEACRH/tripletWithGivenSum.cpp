# include <iostream>
# include <bits/stdc++.h>
using namespace std;

bool isPair(int arr[], int left, int right, int x)
{
    while(left<right){
        if(arr[left] + arr[right] == x)
            return true;
        else if(arr[left] + arr[right] > x)
            right--;
        else
            left++;
    }
    return false;
}
int triplet(int arr[], int n, int x)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(isPair(arr, i+1, n-1, x-arr[i]))
            count ++;
    }
    return count;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,x; cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        cout << triplet(arr, n ,x) << endl;
        
    }
}