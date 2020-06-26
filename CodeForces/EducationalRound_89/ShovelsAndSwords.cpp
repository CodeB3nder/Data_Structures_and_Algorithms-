# include <iostream>
# include <bits/stdc++.h>
using namespace std;
# define ll long long int 

void solve();
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
void solve(){
    ll a, b;
    cin >> a >> b;
    // ll count = 0;
    // while(a>0 && b>0)
    // {   
    //     if(a==1 && b ==1)
    //         break;
    //     if(a >= b){
    //         a -= 2;
    //         b--;
    //         count++;
    //     }
    //     else{
    //         a --;
    //         b -= 2;
    //         count ++; 
    //     }
    // }
    // cout  << count << endl;
    cout <<  min(min(a,b),(a+b)/3) << endl;
}