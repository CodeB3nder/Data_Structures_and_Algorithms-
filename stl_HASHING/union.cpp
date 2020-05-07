# include <iostream>
# include <bits/stdc++.h>
# include<unordered_map>
#define F(n) for (int i = 0; i < n; i++)
using namespace std;

int union_(int arr1[], int arr2[], int m, int n)
{
    unordered_set<int> s;
    F(m)
        s.insert(arr1[i]);

    int res = s.size();
    F(n)
    {
        if(s.find(arr2[i])== s.end())
        {
            res++;
            s.erase(arr2[i]);
        }
    }
    return res;
    
}

int union_alt(int arr1[],int arr2[],int m, int n)
{
    unordered_set<int> us;
    for(int i = 0; i < m; i++)
     us.insert(arr1[i]);
    for(int i = 0; i < n; i++)
     us.insert(arr2[i]);
     
    return us.size(); 
}
int main()
{
    int arr1[] = {2, 8, 3, 5, 6};
    int arr2[] = {4, 8, 3, 6, 1};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    cout << union_(arr1, arr2,m, n);
    cout << union_alt(arr1, arr2,m,n);
}