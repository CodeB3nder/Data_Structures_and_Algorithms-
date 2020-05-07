/*
Sieve of Eratosthenes
O(n*log(log(n)))
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p <= sqrt(n); p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
    {
        if (prime[p] == true)
            cout << p << " ";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));

        for (int p = 2; p <= sqrt(n); p++)
        {
            if (prime[p] == true)
            {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        for (int p = 2; p <= n; p++)
        {
            if (prime[p] == true)
                cout << p << " ";
        }
        cout << endl;
    }
}