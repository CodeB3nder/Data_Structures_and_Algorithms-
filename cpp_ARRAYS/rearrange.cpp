/*
Rearrange an array such that arr[i]=i
*/

# include <bits/stdc++.h>
# include "utilities.cpp"
using namespace std;

int main()
{
    int arr[] = {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=-1 && arr[i]!=i)
            swap(arr[i], arr[arr[i]]);
    }
    display(arr,n);
}