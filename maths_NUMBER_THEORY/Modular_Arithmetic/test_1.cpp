/*
    Modular Exponentiation
    1) Iterative Function to calculate (x^y) in O(log y)  
    2) (ab) mod p = ( (a mod p) (b mod p) ) mod p   
*/
#include <bits/stdc++.h>
using namespace std;
long power(int x, unsigned int y)
{
    int res = 1;

    while (y > 0)
    {
        if (y & 1 == 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}

long power_mod(int x, unsigned int y, int p)
{
    int res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0)
    {
        if (y & 1 == 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
int main()
{
    cout << power(3, 19);
    return 0;
}
