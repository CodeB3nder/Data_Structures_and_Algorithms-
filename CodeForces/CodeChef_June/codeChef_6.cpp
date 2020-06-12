# include <iostream>
# include <cstring>
# include <cstdio>

# define ll long long 
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll l=1;
    ll r=n;
    ll c = 1;
    //ll dummy = 1;
    while(l!=r){
        if(c%2==0){
            ll mid = (l+r+1)/2;
            cout << mid << "\n";
            char response[3];
            cin >> response;
            fflush(stdout);

            if(strcmp(response, "L")==0){
                r = mid-1;
                c++;
            }
            else if(strcmp(response, "G")==0){
                l = mid+1;
                c++;
            }
            else if(strcmp(response, "E")==0){
                return 0;
            }
        }
        else{
            cout << -1 << "\n";
            char c_;
            cin >> c_;
            fflush(stdout);
            c++;
        }
    }
    l = 1;
    r = n;
    c=1;
    while(l<=r){
        if(c%2==1){
            ll mid = (l+r+1)/2;
            cout << mid << endl;
            char response[3];
            cin >> response;
            fflush(stdout);

            if(strcmp(response, "L")==0){
                r = mid-1;
                c++;
            }
            else if(strcmp(response, "G")==0){
                l = mid+1;
                c++;
            }
            else if(strcmp(response, "E")==0){
                return 0;
            }
        }
        else{
            cout << -1 << endl;
            char c_;
            cin >> c_;
            fflush(stdout);
            c++;
        }
    }
    return 0;
}