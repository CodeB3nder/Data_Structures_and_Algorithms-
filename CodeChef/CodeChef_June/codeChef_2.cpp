# include <bits/stdc++.h>
# include <iostream>
using namespace std;


int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int count = 0;
        for(int i= 0; i<n-1 ; i++)
        {
            if(s[i]=='x'){
                if(s[i+1] == 'y'){
                    i++;
                    count ++ ;
                }
            }
            
            else if(s[i]=='y'){
                if(s[i+1] == 'x'){
                    i++;
                    count ++ ;
                }
            }
        }
        cout << count << "\n";
    }
}
