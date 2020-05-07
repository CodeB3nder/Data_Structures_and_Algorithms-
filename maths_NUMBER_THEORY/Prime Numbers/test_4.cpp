/*
GCD of two numbers
1. Recursive
2. Euclidean
*/

# include<bits/stdc++.h>
using namespace std;

int gcd_recur(int a, int b)
{
    if (a==0)
        return b;
    if (b==0)
        return a;

    if(a>b)
        return gcd_recur(a-b,b);
    else 
        return gcd_recur(a,b-a);
}

int gcd_euclid(int a, int b)
{
    if(b==0)
        return a;
    return gcd_euclid(b, a%b);
}
int main() 
{ 
    int a = 98, b = 56; 
    cout << gcd_recur(a,b)<< endl;
    cout << gcd_euclid(a,b); 
    return 0; 
} 