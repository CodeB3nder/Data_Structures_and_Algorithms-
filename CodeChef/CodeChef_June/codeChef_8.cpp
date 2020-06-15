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
        if(!flag){
            while(!flag_){
                //cout << "--debug1--" << endl;
                int min_ = INT_MAX;
                f(3){
                    min_= min(min_, a2[i]/a1[i]);
                }
                //cout << min_ << endl;

                if(min_ != 1){
                //cout << "--debug2--" << endl;
                    f(3)
                        a1[i] *= min_;
                    //cout << "MUL: "; 
                   // display(a1);
                    res.push_back(1);
                }
                else{
                    //cout << "--debug3--" << endl;

                    f(3){
                        if(a1[i]+1 <= a2[i])
                            a1[i] += 1;
                    }
                    //cout << "ADD: ";  
                    //display(a1) ;

                    res.push_back(0);   
                }

                // Checking if the two arrays are equal
                f(3){
                    if(a1[i] != a2[i]){
                        flag_ = false;
                        break;
                    }
                    else
                        flag_ = true;   
                }
            }
        }
        else{
            cout << 0 << endl;
            continue;
        }
        
        int count = 0;
        int hash[2] = {0,0};
        if(flag_){
            f(res.size()){
                if(res[i]==0) hash[0] = 1;
                else hash[1]++;
                if(res[i]==1){
                    if(hash[0] != 0)
                        count ++;
                    hash[0] =0;
                }

            }
        }
        count += hash[0]+hash[1];
        cout << count << endl;
    }
    return 0;
}