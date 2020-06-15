// https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1/?track=SPCF-Hashing&batchId=154

# include <iostream>
# include <unordered_set>

using namespace std;

int main(){

}
int findLongestConseqSubseq(int arr[], int n)
{
  //Your code here
    int curr,res;
    res = 1;
    unordered_set <int> hash;
    for(int i = 0; i<n; i++)
        hash.insert(arr[i]);
    for(int i=0; i<n; i++){
        if(hash.find(arr[i]-1) == hash.end()){
            curr = 1;
            int j = 1;
            bool flag = false;
            while(!flag){
                if(hash.find(arr[i]+j) != hash.end()){
                    curr++;
                    j++;
                }
                else{
                    flag = true;
                }
            }
            res = max(res, curr);
                
        }
    }
    return res;
}
int main(){
    
}