// K largest elements
# include<iostream>
# include<bits/stdc++.h>
using namespace std;
void kLargest(int arr[], int n, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
        pq.push(arr[i]);
    while (k--)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}
int main()
{
    int 
}

