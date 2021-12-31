#include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int k ; cin >> k;
	if(k==1){
	    int t; cin >> t;
	    while(t--){
if(k==2){
         long long int n; cin >> n;
	     long long int total = (n * (n + 1) * (2 * n + 1)) / 6; 
	     long long int half = total/2;
	     long long int sum = 0;
	     long long int i=0;
	     string s = "";
	     cout << half << total;
	     while(sum<half){
	         sum+=pow(n-i,2);
	         if(sum<=half){
	            s += '1';
	            i++;
	         }
             else if(sum>half){
                s += '0';
	            sum -= pow(n-i,2);
                i++;
             }
             cout<<sum << " " << half-sum << endl; 
	     }
	     return 0;
    }
	}
	return 0;
    }
}
