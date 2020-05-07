# include<bits/stdc++.h>
 
using namespace std;
 
int main() 
{
    long int t;
    cin>>t;
    while(t--)
    {
    	long long int n,i;
    	cin>>n;
    	long long int a[n+1];
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	i=0;
    	long long int mini=-1000000010,j,s=0,maxi=1000000010;
    	while(i<n)
    	{
    		if(a[i]<0)
    		{
    			mini=a[i];
    			j=i+1;
    			while(j<n&&a[j]<0)
    			{
    				mini=max(mini,a[j]);
    				j++;
    			}
    			s+=mini;
    			i=j;
    		}
    		else
    		{
    			maxi=a[i];
    			j=i+1;
    			while(j<n&&a[j]>0)
    			{
    				maxi=max(maxi,a[j]);
    				j++;
    			}
    			s+=maxi;
    			i=j;
    		}
    	}
    	cout<<s<<endl;
    }
  return 0;