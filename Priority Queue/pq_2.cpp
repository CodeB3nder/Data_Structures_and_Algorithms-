//Length of Smallest Subsequence such that sum of
// elements is greater than equal to K
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int length(int k, vector<int> v)
{
    priority_queue<int> pq;
    for (int i = 0; i < v.size(); i++)
    {
        pq.push(v[i]);
    }
    int sum = 0;
    int count = 0;

    while (!pq.empty() && sum < k)
    {
        sum += pq.top();
        pq.pop();
        count++;
    }
    if (sum < k)
        return -1;
    else
        return count;
}
int main() 
{ 
  
    vector<int> v{ 2, 3, 1, 5, 
                   6, 3, 7, 9, 
                   14, 10, 2, 5 }; 
    int K = 35; 
  
    cout << length(K, v); 
  
    return 0; 
} 