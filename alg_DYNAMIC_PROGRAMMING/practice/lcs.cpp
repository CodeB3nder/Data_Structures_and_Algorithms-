/* 
Naive Recursive Implementation of LCS
*/

# include<bits/stdc++.h>
using namespace std;

const int maximum = 1000; 
int lcs_recursive(string s1, string s2, int m, int n)
{   
    if(m==0 || n==0)
        return 0;
    if(s1[m-1]==s2[n-1])
        return 1+lcs_recursive(s1,s2,m-1,n-1);
    else 
        return max(lcs_recursive(s1,s2,m-1,n),lcs_recursive(s1,s2,m,n-1));
}
/* 
Memorization Implementation of LCS
*/
int lcs_memo(string s1, string s2, int m, int n, int memo[][maximum])
{
    if(m==0 || n==0)
        return 0;
    if(memo[m-1][n-1]!=-1)
        return memo[m-1][n-1];
    if(s1[m-1]==s2[n-1]){
        memo[m-1][n-1]=1+lcs_memo(s1,s2,m-1,n-1,memo);
        return memo[m-1][n-1];
    }
    else {
        memo[m-1][n-1]=max(lcs_memo(s1,s2,m-1,n,memo),lcs_memo(s1,s2,m,n-1,memo));
        return memo[m-1][n-1];
    }  
}

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
            L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
        }  
    }  
          
    return L[m][n];  
} 
    
int main()  
{  
    string x = "AGGTAB";  
    string y = "GXTXAYB";  
      
    int m = x.length();  
    int n = y.length();  
      
    cout<<"Length of LCS is "<< lcs_recursive( x, y, m, n ) << endl ;  
    int memo[m][maximum];
    memset(memo,-1,sizeof(memo));
    cout<<"Length of LCS is "<< lcs_memo( x, y, m, n,memo ) << endl ;  
    cout<<"Length of LCS is "<< lcs_table( x, y, m, n ) << endl ;  

    return 0;  
}  