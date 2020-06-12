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
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                
                cout << 1 << " " << i+1<< " " << j+1  << " " 
                        << i+1  << " " << j+1 << endl;
                cin >> number;

                fflush(stdout);
                if(number == -1)
                    return 0;
                a[i][j] = number;
            }
        }
        cout << 2 << endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++)
                cout << a[i][j] << " ";
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