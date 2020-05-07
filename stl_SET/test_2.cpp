/*
Pairs that are fibonnacci numbers
Condition to be afibo number is
5x^2 +- 4 must be perfect square
*/
#include <bits/stdc++.h> 
using namespace std; 

bool isPerfectSquare(long double x) 
{ 
    // Find floating point value of 
    // square root of x 
    long double sr = sqrt(x); 
  
    // If square root is an integer 
    return ((sr - floor(sr)) == 0); 
} 
bool isFibonacci(int n) 
{ 
    return isPerfectSquare(5 * n * n + 4) 
           || isPerfectSquare(5 * n * n - 4); 
} 
int totalPairs(int a[], int b[], int n, int m) 
{ 
    // Set is used to avoid duplicate pairs 
    set<pair<int, int> > s; 
  
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < m; j++) { 
  
            // If sum is a Fibonacci number 
            if (isFibonacci(a[i] + b[j]) == true) { 
                if (a[i] < b[j]) 
                    s.insert(make_pair(a[i], b[j])); 
                else
                    s.insert(make_pair(b[j], a[i])); 
            } 
        } 
    } 
  
    // Return the size of the set 
    return s.size(); 
}
int main() 
{ 
    int a[] = { 99, 1, 33, 2 }; 
    int b[] = { 1, 11, 2 }; 
    int n = sizeof(a) / sizeof(a[0]); 
    int m = sizeof(b) / sizeof(b[0]); 
  
    cout << totalPairs(a, b, n, m); 
    return 0; 
} 



