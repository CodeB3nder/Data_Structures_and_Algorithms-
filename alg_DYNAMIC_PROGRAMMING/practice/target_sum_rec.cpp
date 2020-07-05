// Number of ways to calculate a target number using only array elements
# include <iostream>
using namespace std;

int target_sum_rec(int arr[], int n, int sum){
    if(sum == 0 && n==0)
        return 1;
    
    if(n < 0)
        return 0;
    
    return target_sum_rec(arr,n-1,sum) + target_sum_rec(arr,n-1,sum-arr[n-1]) + target_sum_rec(arr,n-1,sum+arr[n-1]);
}

int main(){

    int n; cin >> n;
    int arr[n];
    for(int i=0; i <n; i++){
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    cout << target_sum_rec(arr, n, sum);
}