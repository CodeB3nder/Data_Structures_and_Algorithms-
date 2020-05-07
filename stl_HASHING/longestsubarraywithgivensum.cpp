#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int count(int arr[], int n, int sum)
{
    unordered_map<int, int => prevSum;

    int res = 0;
    int currsum = 0;

    for (int i = 0; i < n; i++)
    {

        currsum += arr[i];

        if (currsum == sum)
            res++;

        if (prevSum.find(currsum - sum) != prevSum.end())
            res += (prevSum[currsum - sum]);

        prevSum[currsum]++;
    }

    return res;
}

int main()
{
    int arr[] = {8, 3, 1, 5, -6, 6, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 4;
    cout << count(arr, n, sum);
}