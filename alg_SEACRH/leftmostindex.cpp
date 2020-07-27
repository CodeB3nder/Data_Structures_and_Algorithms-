# include<iostream>
using namespace std;
int search(int arr[], int low, int high,int x)
{   
    int mid = (low+high)/2;
    if(arr[mid]==x && (mid==0 || arr[mid-1]!=x))
        return mid;
    if(arr[mid]>=x)
        return search(arr,low,mid-1,x);
    else
        return search(arr,mid+1,high,x);
    
    

}
int main()
{
    int arr[] = {2, 1, 1, 3, 3, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int ele = 3;
    cout << search(arr, 0,n,ele);
    
    return 0;
}