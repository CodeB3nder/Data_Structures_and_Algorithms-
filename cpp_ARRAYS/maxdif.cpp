/*
Maximum Difference
1.We keep the minimum value in the left sub array and subtract it with the
as we encounter
*/

# include "utilities.cpp"
# include<bits/stdc++.h>

int max_diff(int arr[], int n)
{
    int res=arr[1]-arr[0];
    int minvalue = arr[0];
    for(int i=1; i<n; i++)
    {
        res = max(res,arr[i]-minvalue);
        minvalue = min(minvalue, arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {2,3,10,6,4,8,1};
    cout << max_diff(arr,7);
}