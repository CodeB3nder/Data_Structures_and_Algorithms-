/*
    Print all prime factors of a given number

    Print the number of factors

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void prime_factors(int n)
{
    for (int factor = 2; factor <= sqrt(n); factor++)
    {
        if (n % factor == 0)
        {
            int count = 0;
            while (n % factor == 0)
            {

                n = n / factor;
                count++;
            }
            cout << factor << "^" << count << "+";
        }
    }
    cout << n << "^" << 1;
}
int main()
{
    prime_factors(315);
    return 0;
}