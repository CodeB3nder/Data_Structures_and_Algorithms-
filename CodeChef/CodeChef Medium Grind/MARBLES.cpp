#include<stdio.h>
# include <iostream>
#include<math.h>
#define ll long long

using namespace std;

ll  C(ll  n,ll  r) {
  ll i,j=1,k=1,res = 1;
  if(r> n/2)
    r = n-r;

  for(i = 0;i<r;i++) {
    res *=  n--;
    res /= i+1;
    
  }
  return res; 
}

    
int main() {
  int T; 
  ll  N, K,R,n,r;
  
  cin >> T;
  while(T--) {
    cin >> N >> K;
    r= N - K;      
    n = K + r - 1;
    cout << C(n,r) << endl;
  }
  return 0;
}
 
