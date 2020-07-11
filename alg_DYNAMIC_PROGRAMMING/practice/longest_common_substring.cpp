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
            L[i][j] = 0; 
        }  
    }  

    int max_ = INT_MIN;     
    for (i = 0; i <= m; i++)  
    {  
        for (j = 0; j <= n; j++)  
        {   
            max_ = max(max_, L[i][j]);
        }
    }
    return max_;
} 
int main(){
    int t; cin >> t;
    while(t--){
        int m,n; cin >> m >> n;
        string s1,s2;
        cin >> s1 >> s2;
        cout << lcs_table(s1,s2,m,n);
        cout <<endl;
    }
}