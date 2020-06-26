# include<iostream>
# include<unordered_set>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        unordered_set<int> set;
        for(int i=0; i<n; i++){
            int x; cin >> x;
            set.insert(x);
        }
        int z = 1;
        int c=0;
        while(true){
            if(z>m)
            {
                cout << -1 << endl;
                break;
            }
            if(set.find(z) != set.end()){
                z++;
                c++;
                continue;
            }
            else if(z==m){
                    cout << c+1 << endl;
                    break;
            }
            z++;
            

        }
        
    }
}