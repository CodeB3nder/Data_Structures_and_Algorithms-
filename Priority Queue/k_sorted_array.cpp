# include <iostream>
# include <vector>
#include <bits/stdc++.h> 
using namespace std;

void sort(int arr[], int n, int k)
{
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(int i = 0; i <= k; i++)
        minHeap.push(arr[i]);
    int index = 0;

    for(int i = k+1; i < n; i++)
    {
        arr[index++] = minHeap.top();
        minHeap.pop();
        minHeap.push(arr[i]);
    }
    while(!minHeap.empty())
    {
        arr[index++] = minHeap.top();
        minHeap.pop();
    }
}
void display(int arr[], int n)
{
    for(int i =0 ; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    int arr[n];
    for(int i = 0 ;i < n; i++)
        cin >> arr[i];
    display(arr,n);
    sort(arr, n, k);
    display(arr,n);
}

