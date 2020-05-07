/* Count of subsequences whose product is a difference of square of two integer*/
# include<iostream>
using namespace std;

int cntsubs(int a[], int n)
{
    int c=0,d=0,i,prod=1,j;
    for(i=0;i<n;i++)
    {
        if(a[i]%2 != 0 || a[i] % 4 == 0)
            d++;
        prod = a[i];
        for(j=i+1;j<n;j++){
            prod *= a[j];
            if(prod%2!=0 || prod%4==0)
                d++;
        }
        prod=1;
    }
    return d;
}
int main() 
{ 
    int arr[] = { 5, 4, 2, 9, 8 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    cout << cntsubs(arr, n); 
  
    return 0; 
} 