/*
    Counting distinct elements in an array
*/

# include <iostream>
# include <bits/stdc++.h>
#define F(n) for (int i = 0; i < n; i++)

using namespace std;
int countdistinct(int arr[], int n)
{
    unordered_set<int> s;

    F(n)
        s.insert(arr[i]);
    return s.size();
}

int main()
{
    int arr[] = {15, 16, 27, 27, 28, 15};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << countdistinct(arr, n);
    
    return 0;
}
