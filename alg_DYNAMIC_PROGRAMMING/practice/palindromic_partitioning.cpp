# include <iostream>
# include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dp[100+1][1000+1];
bool isPalindrome(string str, int i, int j) 
{ 
    int l = i; 
    int h = j; 
  
    // Keep comparing characters while they are same 
    while (h > l) 
    { 
        if (str[l++] != str[h--]) 
            return false; 
    } 
    return true;
} 
int pal(string arr, int i, int j)
{   
    if(i>=j)
        return 0;
    if(isPalindrome(arr,i,j))
        return 0;
    if(dp[i][j]!= -1)
        return dp[i][j];
    int min_= INT_MAX;
    for(int k=i; k<j; k++){
        int cost = pal(arr,i,k)+pal(arr,k+1,j)+1;
        min_ = min(min_,cost);
    }
    return dp[i][j] = min_;
}
int pal_memorized(string arr, int i, int j)
{   
    if(i>=j)
        return 0;
    if(isPalindrome(arr,i,j))
        return 0;
    if(dp[i][j]!= -1)
        return dp[i][j];
    int min_= INT_MAX;
    for(int k=i; k<j; k++){
        // int cost = pal(arr,i,k)+pal(arr,k+1,j)+1;
        int left, right;
        if(dp[i][k]!=-1)
            left = dp[i][k];
        else{
            left = pal_memorized(arr,i,k);
            dp[i][k]=left;
        }
        if(dp[k+1][j]!=-1)
            right = dp[k+1][j];
        else{
            right = pal_memorized(arr,k+1,j);
            dp[k+1][j]=right;
        }
        int cost = 1+left+right;
        min_ = min(min_,cost);
    }
    return dp[i][j] = min_;
}
int main(){
	//ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        //int n; cin>>n
        string s; cin >> s;
        
        memset(dp, -1, sizeof(dp));
        cout<<pal(s, 0, s.length()-1)<<"\n";
        //cout << 12 << endl;

    }
    return 0;
}