#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    int count = 0;
	    int n; cin >> n;
	    int total = (n*(n+1))/2;
	    
	    if(total%2 == 1){
	        cout << 0 << endl;
	        continue;
	    }
	    else{
	        total = total/2;
	        int sum = n;
	        int i=1;
	        while(sum<=total){
	            count++;
	            sum += n-i;
                i++;
                //cout << "sum" << sum << endl;
	        }
	       cout << count+1 << endl; 
	       }
	       
	    }
	
	return 0;
}
