#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
        int den[n+1];
        den[0] = 0;
	    
	    for(int i=1;i<=n;i++)
	    {
	        cin>>den[i];
	    }
	    
	    int total;
	    cin>>total;
	    

	    int matrix[n+1][total+1];
	    
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=total;j++)
	        {
	            if(i==0 && j==0)
	            {
	                matrix[i][j]=1;
	            }
	            
	            else if(i==0 && j>0)
	            {
	                matrix[i][j]=0;
	            }
	            
	            else 
	            {
	               if(den[i]>j)
	                {
	                    matrix[i][j]=matrix[i-1][j];
	                }
	                else
	                {
	                    matrix[i][j]=matrix[i-1][j]+matrix[i][j-den[i]];
	                }
	            }
	            
	        }
	    }
	    
	    /* code to print matrix
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=0;j<=total;j++)
	        {
	            cout<<matrix[i][j]<<" ";
	        }
	        cout<<"\n";
	    }*/
	    cout<<matrix[n][total]<<"\n";
	    
	}
	return 0;
}