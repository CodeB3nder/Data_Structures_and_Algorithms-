/* 
Find array elements equal to sum of any subarray of at least size 2
*/
# include <iostream>
# include <unordered_map>
using namespace std;

void findElements(int arr[], int n){
    if(n==1)
        return ;
    
    int pre[n];
    pre[0] = arr[0]; 
    for (int i = 1; i < n; i++) 
        pre[i] = arr[i] + pre[i - 1]; 

    unordered_map<int, bool> mp;

    for(int i=1; i<n; i++){
        mp[pre[i]] = true; // From starting to i
        for(int j=i+1; j<n; j++){
            mp[pre[j] - pre[i-1]] = true;
        }
    }
     
    // Check all elements marked true
    for (int i = 0; i < n; i++) { 
        if (mp[arr[i]]) { 
            cout << arr[i] << " "; 
        } 
    } 
    cout << endl; 
}

int main() 
{ 
    int arr1[] = { 1, 2, 3, 4, 5, 6 }; 
  
    int n1 = sizeof(arr1) / sizeof(arr1[0]); 
  
    findElements(arr1, n1); 
  
    return 0; 
}