/*
    Printing the largest prime number
    
    Concept Used
    ===========================
    1.Defination of prime numbers
Runtime : 0.01s
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int n;
        cin >> n;
        for(int factor=2; factor<=sqrt(n); factor++){
            if(n%factor!=0)
                continue;
            while(n%factor==0)
                n=n/factor;
        }
        cout << n << endl;            
    }
    return 0;
}