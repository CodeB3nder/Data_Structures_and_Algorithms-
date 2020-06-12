// Kadanes Algorithm
# include<iostream>
# include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int cSum = arr[0];
    int max_ = arr[0];
    for(int i=1;i<n;i++){
        cSum = max(arr[i], cSum+arr[i]);
        max_ = max(max_, cSum); 
    }
    return max_;
    
}
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        cout << kadane(arr, n) << endl;
    }
}