# include <bits/stdc++.h> 
using namespace std; 

void printdistinct(int arr[],int n)
{
    unordered_set<int> s;
    for(int i=0; i<n; i++)
    {
        if(s.find(arr[i])==s.end()){
            s.insert(arr[i]);
            cout << arr[i] << " ";
        }
    }
}
int main () 
{ 
    int arr[] = {10, 5, 3, 4, 3, 5, 6}; 
    int n=7; 
    printdistinct(arr,n); 
    return 0; 
} 