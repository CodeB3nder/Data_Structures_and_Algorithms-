# include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n,b,m; cin >> n >> b >> m;
        int arr[m];
        for(int i=0; i<m; i++){
            cin >> arr[i];
        }
        int k=0;
        while(true){
            if(arr[k] >= n)
            {
                k++;
                continue;
            }
            if(arr[k]%b){
                c++;
                k++;
                
            }
        }
    }
}