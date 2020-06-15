// Guessing game - 2

# include <iostream>
# include <cstring>
# include <cstdio>

# define ll long long 
using namespace std;
//int f_lie(ll ,ll );

void f(ll l, ll r){
        
        
        ll l_,r_;

        ll mid = (l+r+1)/2;
        cout << mid << "\n";
        char response[3];
        cin >> response;
        fflush(stdout);
        if(l >= r)
            return;

        if(strcmp(response, "L")==0){
            r_ = r;
            r = mid-1;
            l_ = mid+1;         
        }
        else if(strcmp(response, "G")==0){
            l_ = l;
            l = mid+1;
            r_ = mid-1;
        }
        else if(strcmp(response, "E")==0){
            //flag = true;
            exit(0);
        }
        //cout << l << " " << r << " " <<  l_ << " "<<  r_ << endl;
        f(l,r);
        f(l_,r_);
        
}
int main(){
    ll n;
    cin>>n;
    f(1,n);
    return 0;
}
