# include <bits/stdc++.h> 
using namespace std; 

int count_naive(int a[], int n, int k)
{   
    int count = 0;
    int s;
    for(int i=0; i<n; i++){
        s=0;
        for(int j=i;j<n;j++)
        {
            s = s+a[j];
            if(s%k==0)
                count++;
        }
    }
    cout << count << endl;
}
int count_efficient(int arr[], int n, int k)
{
    vector<int> rem(k,0);
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int k; cin >> k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        cout << count_naive(arr,n,k);
    }
}