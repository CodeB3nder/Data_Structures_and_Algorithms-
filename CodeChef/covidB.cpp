#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

	int t; 
	cin >> t;
	while(t--){
	    int n; cin >> n;
	    int v[n];
	    for(int i=0; i<n; i++)
	        cin >> v[i]; 
	    int maxRes = INT_MIN;
	    int minRes = INT_MAX;
	    int spread;
	    for(int i=0; i<n; i++){
            spread = 0;
            bool infected[5];
            memset(infected,false,sizeof(infected));
            infected[i]=true;
	        for(int j=0; j<n; j++)
	        {
	            if( ((i>j) && (v[i] < v[j])) || ((i<j) && (v[i]>v[j]) ) ){
                    infected[j] = true;
	            }	            
	        }
            cout << "Before: " ;
            for(int k=0; k<n; k++){
                cout << infected[k] << "  ";
            }
            cout << endl;
	        for(int k = 0; k<n; k++){
	            if(infected[k]==false){
	                for(int m = k+1;m<n; m++){
	                    if(infected[m]==true && v[k]>v[m]){
                            //cout << "v[k]" << k << " :" << v[k]  << " v[m]" << m << " :" << v[m] << endl;
	                        infected[k]=true;
                        }
	                }
                    for(int m = 0;m<k; m++){
	                    if(infected[m]==true && v[k]<v[m]){
                            //cout << "v[k]" << k << " :" << v[k]  << " v[m]" << m << " :" << v[m] << endl;
	                        infected[k]=true;
                        }
	                }
	            }
	        }
	        for(int k=0; k<n; k++){
               cout << infected[k] << "  ";
	            if(infected[k]==true)
	                spread++;
                
	        }
            cout << endl;
            maxRes = max(spread, maxRes);
	        minRes = min(spread, minRes);

            //cout << maxRes << " " << minRes << endl;
	    }
	    cout << minRes << " " << maxRes << endl;
	}
	return 0;
}