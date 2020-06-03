/*
Rotating array clockwise by 1 place
*/
# include<bits/stdc++.h>
using namespace std;
void right_rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-2; i>=0;i--)
        arr[i+1]=arr[i];
    arr[0]=temp;
    
}
void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin  >> n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        right_rotate(arr,n);
        display(arr,n);
        
    }
}