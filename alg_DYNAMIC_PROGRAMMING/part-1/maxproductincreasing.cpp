#include <iostream>
# include <bits/stdc++.h>
using namespace std;


long int mip(long int arr[], int n)
{
    long int sums[n];
    sums[0]=arr[0];
    for(int i=1; i<n; i++)
    {   
        sums[i]=arr[i];
        for(int j=0; j<i; j++)
        {
            if(arr[i] > arr[j])
                sums[i]=max(arr[i]*sums[j],sums[i]);
        }
    }
    return *max_element(sums,sums+n);
}
int main() {
          int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        long int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        cout << mip(arr,n) << endl;
    }
    return 0; 
}