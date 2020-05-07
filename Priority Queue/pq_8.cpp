#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void nearlySorted(int arr[], int num, int K)
{
    priority_queue<int, vector<int>, greater<int>> p;
    for (int i = 0; i <= K; i++)
        p.push(arr[i]);
    for (int i = K + 1; i < num; i++)
    {
        cout << p.top() << " ";
        p.pop();
        p.push(arr[i]);
    }
    while (!p.empty())
    {
        cout << p.top() << " ";
        p.pop();
    }
}

int main()
{
    int arr[] = {9, 15, 20};
    nearlySorted(arr, 3, 3);
    return 0;
}