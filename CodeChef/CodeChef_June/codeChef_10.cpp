// Tuple operations
# include <bits/stdc++.h>
# include <iostream>
# include <vector> 

# define f(n) for(int i=0; i<n; i++) 
using namespace std;
int min(int a, int b){
    if(a<b)
        return a;
    else
        return b;    
}
void display(int arr[]){
    f(3)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--){
        vector<int> res;
        bool flag= false;
        bool flag_ = false;
        int a1[3];
        int a2[3];
        f(3)
            cin >> a1[i];
        f(3){
            cin >> a2[i];
            if(a2[i] < a1[i])
                flag = true; // If one number in 2nd array smaller  
        }
        if(flag){
            cout << 0 << endl;
            continue;
        }
        f(3){
            if(a1[i] != a2[i]){
                flag_ = false; // Initial check
                break;
            }
            else
                flag_ = true;   
        }
        if(flag_){
            cout << 0 << endl;
            continue;
        }
        if(a2[0]-a1[0] == a2[1]-a1[1] == a2[2]-a1[2]){
            cout << 1 << endl;
            continue;
        }
        if(a2[0]%a1[0] == 0 && a2[1]%a1[1] == 0 && a2[2]%a1[2]==0 && (a2[0]/a1[0]==a2[1]/a1[1]==a2[2]/a1[2]) ){
            cout << 1 << endl;
            continue;
        }
        if(a2[0]-a1[0] == a2[1]-a1[1] || a2[2]-a1[2] == a2[1]-a1[1] || a2[0]-a1[0] == a2[2]-a1[2]){
            if(a2[0]-a1[0] == 0 || a2[1]-a1[1] == 0 || a2[2]-a1[2] == 0)
                cout << 1 << endl;
            else 
                cout << 2 << endl;
            continue;
        }
        if(((a2[0]%a1[0] == 0 && a2[1]%a1[1] == 0) && a2[0]/a1[0] == a2[1]/a1[1]) || 
                    ((a2[2]%a1[2] == 0 && a2[1]%a1[1] == 0) && a2[2]/a1[2] == a2[1]/a1[1])||
                        ((a2[0]%a1[0] == 0 && a2[2]%a1[2] == 0) && a2[2]/a1[2] == a2[0]/a1[0])){
                        cout << 2 << endl;
                        continue;
        }


        
    }
}