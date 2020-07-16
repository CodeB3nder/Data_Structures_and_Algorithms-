/* 
Naive Recursive Implementation of LCS
*/

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
      
        else if (s1[i - 1] == s2[j - 1] && i!=j)  
            L[i][j] = L[i - 1][j - 1] + 1;  
      
        else
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  
          
    return L[m][n];  
} 
    
int main(){
    int t; cin >> t;
    while(t--){
        
        string s1,s2;
        cin >> s1;
        s2 = s1;
        int m = s1.length();
        int n = s2.length();
       // cout << lcs_table(s1,s2,m,n) << endl;
        if (lcs_table(s1,s2,m,n)==m){
            cout << "True" << endl;
        }
        else{
            cout << "False" << endl;
        }
        cout <<endl;
    }
}