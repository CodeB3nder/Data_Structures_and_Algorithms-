# include <iostream>
using namespace std;
void swap(int* a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int l, int r){
    int x = arr[r];
    int i = l;
    for(int j=l; j<= r-1; j++){
        if(arr[j] <= x){
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[r]);
    return i;
}
int kthSmallest(int arr[], int l, int r, int k) 
{ 
    // If k is smaller than number of elements in array 
    if (k > 0 && k <= r - l + 1) { 
        // Partition the array around last element and get 
        // position of pivot element in sorted array 
        int pos = partition(arr, l, r); 
  
        // If position is same as k 
        if (pos - l == k - 1) 
            return arr[pos]; 
        if (pos - l > k - 1) // If position is more, recur for left subarray 
            return kthSmallest(arr, l, pos - 1, k); 
  
        // Else recur for right subarray 
        return kthSmallest(arr, pos + 1, r, k - pos + l - 1); 
    } 
  
    // If k is more than number of elements in array 
    return INT_MAX; 
} 

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        cout << kthSmallest(arr, 0, n-1, k) << endl;
    }
}