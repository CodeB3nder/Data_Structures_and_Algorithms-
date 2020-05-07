/*
Find the smallest positive number missing from an unsorted array 
*/

# include<bits/stdc++.h>
using namespace std;

int func(int arr[], int n)
{
    bool present[n+1]={false};

    for(int i=0;i<n;i++){
        if(arr[i]>0 && arr[i]<=n)
            present[arr[i]]=true;
    }

    for(int i=1;i<=n;i++)
    {
        if(present[i]==0)
            return i;
    }
    return n+1;
}
int main() 
{ 
  
    int A[] = { 0, 10, 2, -10, -20 }; 
    int size = sizeof(A) / sizeof(A[0]); 
    cout << func(A, size); 
    return 0;
} 





