# include<iostream>
using namespace std;
int search(int arr[], int low, int high,int x)
{   
    if(low>high)
        return -1;
    int mid = (low+high)/2;
    if(arr[mid]==x)
        return mid;
    if(arr[mid]>x)
        return search(arr,low,mid-1,x);
    else
        return search(arr,mid+1,high,x);
}
int count(int arr[], int n, int x) 
{ 
    int ind = search(arr, 0, n - 1, x); 
  
    // If element is not present 
    if (ind == -1) 
        return 0; 
  
    // Count elements on left side. 
    int count = 1; 
    int left = ind - 1; 
    while (left >= 0 && arr[left] == x) 
        count++, left--; 
  
    // Count elements on right side. 
    int right = ind + 1; 
    while (right < n && arr[right] == x) 
        count++, right++; 
  
    return count; 
} 
int main()
{
    int arr[] = {2, 1, 1, 3, 3, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ele = 3;
    //int mid = search(arr, 0,n,ele);
    cout << count(arr,n,ele);
    
    return 0;
}