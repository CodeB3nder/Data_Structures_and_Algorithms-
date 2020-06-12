#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
        int row = 1;
        for(int i=1; i<=n*n; i++){
            if(row%2==1) 
            {
                // Odd : print as usual
                cout << i << " ";
                if(i%n==0){
                    cout << "\n";
                    row++;
                }
            }
            else
            {
                // Even : print backwards
                // cout << row << endl;
                //cout << i  << " ";
                cout << row*n - (i-1)%n <<  " ";
 
                if(i%n==0){
                    cout << "\n";
                    row++;
                }
            }
        }
	}
	return 0;
}
