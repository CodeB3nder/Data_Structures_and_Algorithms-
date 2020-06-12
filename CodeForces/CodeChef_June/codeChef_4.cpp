# include <bits/stdc++.h>
# include<unordered_map>
# include <iostream>
using namespace std;
int power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
}

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        long long int tom, jerry;
        cin >> tom;
        long long int ans = 0;
        if(tom %2)
            ans = tom/2;
        else
        {       
            long long int power_ = 0;
            jerry = tom;
            while(jerry%2 != 1)
            {
                jerry = jerry >> 1;
                power_++;
            }
            //cout << power_  << " ";
            ans = tom/power(2,power_+1);
        }
        cout << ans << "\n";
        
    }
}