#include <iostream>
#include<math.h>
#include<algorithm>
#include<map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    long long int test;
  scanf("%lld",&test);
  while(test--)
  {
      long long int n , i , j ;
      scanf("%lld",&n);
      long long int a[n];
      long long int b[n];
      long long int minv=100000000000 ;
      long long int maxv=-1;
      map<long long int,long long int> map1;
      map<long long int,long long int> map2;  
      map<long long int,long long int> map; 
      for(i=0;i<n;i++)
      {
          scanf("%lld",&a[i]);
          minv=min(minv,a[i]);
          maxv=max(maxv,a[i]);
          map[a[i]]++;
      }
      for(j=0;j<n;j++)
      {
          scanf("%lld",&b[j]);
          minv=min(minv,b[j]);
          maxv=max(maxv,b[j]);
          map[b[j]]++;
      }
      for(i=0;i<n;i++)
      {
          map1[a[i]]++;
          map2[b[i]]++;
      }
      long long int flag=0;
     
      for(auto i:map)
      {
          if(i.second%2==1)
          {
              flag=1;
              break;
          }
      }
      if(flag==1) printf("-1");
      else 
      {
          flag=0;
          for(i=0;i<=maxv;i++)
          {
              if(map1[i]!=map2[i])
              {
                  flag=1;
                  break;
              }
          }
          if(flag==0) printf("0"); 
          else
          {
              long long int fa[n],fb[n];
              long long int x=0,y=0;
              for(i=0;i<n;i++)
              {
                  if(map1[a[i]]-map2[a[i]]>0 )
                  {   
                      fa[x]=a[i];x++; {map1[a[i]]--;}
                     
                  }
              }
              for(i=0;i<n;i++)
              {
                  if(map2[b[i]]-map1[b[i]]>0 )
                  {
                      fb[y]=b[i];y++;  {map2[b[i]]--;}
                     
                  }
              }
              sort(fa,fa+x);
              sort(fb,fb+x,greater<long long int>());
              long long int ans=0;
             for(i=0;i<x;i+=2)
             {
                 ans+=min(2*minv,min(fa[i],fb[i]));
             }
             printf("%lld",ans);
          }
          
      }
      printf("\n");
  }
  return 0;
}