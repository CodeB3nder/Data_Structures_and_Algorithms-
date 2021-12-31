/*
Full Pyramid Star Pattern

      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * * 
 */

# include <iostream>
using namespace std;


int main(){
    int n; cin >> n; int k=0;
    for(int i = 1; i<=n; i++, k=0)
    {
        for(int j=1; j<=n-i; j++){
            cout << "  ";
        }
        while(k != 2*i-1)
        {
            cout << "* ";
            k++; 
        }
        cout << endl;
    }
}