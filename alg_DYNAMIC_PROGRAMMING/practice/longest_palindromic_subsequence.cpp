# include<bits/stdc++.h>
using namespace std;

int lcs_table( string s1, string s2, int m, int n )  
{  
    int L[m + 1][n + 1];  
    int i, j;  

    for (i = 0; i <= m; i++)  
    {  
        for (j = 0; j <= n; j++)  
        {  
        if (i == 0 || j == 0)  
            L[i][j] = 0;  
      
        else if (s1[i - 1] == s2[j - 1])  
            L[i][j] = L[i - 1][j - 1] + 1;  
      
        else
            L[i][j] = max(L[i-1][j],L[i][j-1]); 
        }  
    }  
    return L[m][n];
} 
int lps(string s1,string s2,int m){
    return lcs_table(s1,s2,m,m);
}
int main(){
    int t; cin >> t;
    while(t--){
        
        string s1;
        cin >> s1;
        int m = s1.length();
        string s2 = s1;
        reverse(s2.begin(), s2.end());
        //reverse(s1.begin(),s1.end());
       // cout << lcs_table(s1,s2,m,n) << endl;
        cout << lps(s1,s2,m);
        cout <<endl;
    }
}