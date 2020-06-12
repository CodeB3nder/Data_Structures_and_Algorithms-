# include<iostream>
using namespace std;

int isEqlbmPoint(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n ; i++){
        sum += arr[i];
    }
    int lSum = 0;
    for(int i=0; i<n ;i++)
    {   
        //cout << lSum << " " << sum << endl;
        if(lSum == sum - arr[i])
            return i+1;
        lSum += arr[i];
        sum -= arr[i];
    }
    return -1;
}
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        cout << isEqlbmPoint(arr, n) << endl;
    }
}