///Maximize the profit after selling the tickets
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int maxProfit(int seats[], int size, int num)
{
    priority_queue<int> pq;
    for (int i = 0; i < size; i++)
        pq.push(seats[i]);
    int profit = 0;
    int count = 0;
    while (count < num && pq.top() > 0)
    {
        int top = pq.top();
        pq.pop();

        profit += top;
        pq.push(top - 1);
        count++;
    }
    return profit;
}
int main() 
{ 
    int seats[] = { 2, 3, 4, 5, 1 }; 
    int k = sizeof(seats) / sizeof(int); 
    int n = 6; 
  
    cout << maxProfit(seats, k, n); 
  
    return 0; 
} 