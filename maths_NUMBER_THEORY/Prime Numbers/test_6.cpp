/* 
LCM of two numbers
   a x b = LCM(a, b) * GCD (a, b)

   LCM(a, b) = (a x b) / GCD(a, b) 
*/

#include <iostream>
using namespace std;
class gfg
{
public:
    int gcd(int a, int b)
    {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }

    int lcm(int a, int b)
    {
        return (a * b) / gcd(a, b);
    }
};
int main()
{
    gfg g;
    int a = 15, b = 20;
    cout << "LCM of " << a << " and " << b << " is " << g.lcm(a, b);
    return 0;
}