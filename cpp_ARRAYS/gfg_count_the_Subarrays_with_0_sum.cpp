# include <iostream>
# include <unordered_map>
using namespace std;

int findSubArraySum(int arr[], int n, int sum){
    unordered_map<int, int> prevSum;
    int count = 0;
    int currSum = 0;
    int sum = 0;


    for(int i=0; i<n ; i++){
        if(arr[i]==0)
            arr[i] = -1;
        currSum += arr[i];
        if(currSum == sum)
            count++;
        if(prevSum.find(currSum-sum)!= prevSum.end()){
            count+= prevSum[currSum-sum];
        }
        prevSum[currSum]++;
    }
    return count;
}

int main(){

}