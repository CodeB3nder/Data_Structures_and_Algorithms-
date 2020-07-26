# include <iostream>
# include <bits/stdc++.h>
 using namespace std;
int t[11][51];
int egg_drop_rec(int e,  int f)
{
    if(f==0 || f==1) 
        return f;
    if(e==1)
        return f;
    int min_ = INT_MAX;
    for(int k=1; k<=f ; k++){
        int temp = 1 + max(egg_drop_rec(e-1,k-1), egg_drop_rec(e,f-k));
        min_ = min(min_, temp);
    }
    return min_;
    
}
int egg_drop_dp(int e,  int f)
{
    if(f==0 || f==1) 
        return f;
    if(e==1)
        return f;
    if(t[e][f]!=-1)
        return t[e][f];
    int min_ = INT_MAX;
    for(int k=1; k<=f ; k++){
        int temp = 1 + max(egg_drop_rec(e-1,k-1), egg_drop_rec(e,f-k));
        min_ = min(min_, temp);
    }
    t[e][f]=min_;
    return min_;
    
}
int egg_drop_optimized_dp(int e,  int f)
{
    if(f==0 || f==1) 
        return f;
    if(e==1)
        return f;
    if(t[e][f]!=-1)
        return t[e][f];
    int min_ = INT_MAX;
    for(int k=1; k<=f ; k++){
        int low, high;
        if(t[e-1][k-1]!=-1)
            low = t[e-1][k-1];
        else{
            low = egg_drop_optimized_dp(e-1, k-1);
            t[e-1][k-1]=low;
        }
        if(t[e][f-k]!=-1)
            high = t[e][f-k];
        else{
            high = egg_drop_optimized_dp(e, f-k);
            t[e][f-k]=high;
        }
        int temp = 1 + max(low, high);
        min_ = min(min_, temp);
    }
    t[e][f]=min_;
    return min_;
    
}
int main(){
    memset(t,-1,sizeof(t));
    int e, f;
    cin >> e >> f;
    cout << egg_drop_rec(e,f) << endl;
    cout << egg_drop_dp(e,f) << endl;
    cout << egg_drop_optimized_dp(e,f) << endl;

}