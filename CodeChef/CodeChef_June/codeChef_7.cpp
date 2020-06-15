// Covid

# include <cstdio>
# include <iostream>
# include <cstring>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,p,X; 
        cin >> n; cin >> p;
        int a[n][n];
        int number;
        int total_ones, i_index, j_index;
        cout << 1 << " " << 1 << " " << 1 << " " << n << " " << n << endl;
        cin >> total_ones;
        int total_zeroes = n*n - total_ones;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                
                if(total_zeroes == 0)
                {
                    a[i][j] = 1;
                    continue;
                }
                if(total_ones == 0){
                    a[i][j] = 0;
                    continue;
                }
                cout << 1 << " " << i+1<< " " << j+1  << " " 
                        << i+1  << " " << j+1 << endl;
                cin >> number;
                fflush(stdout);
                if(number == -1)
                    return 0;
                if(number == 1)
                    total_ones--;
                if(number == 0)
                    total_zeroes--;
                a[i][j] = number;


            }
        }
        cout << 2 << endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << a[i][j] << " ";
            }
        cout << "\n";
        }
        fflush(stdout);
        cin >> X;
        if(X==1)
            continue;
        else
            return 0; 
        

    }
}