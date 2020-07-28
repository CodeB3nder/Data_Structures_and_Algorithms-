# include <iostream>
using namespace std;

int sqrtFloor(int x){
    int low = 1; 
    int high = x; 
    int ans = -1;
    while(low<=high){
        int mid = (low + high)/2;
        int mSq = mid*mid;
        if(mSq == x)
            return mid;
        else if(mSq > x)
            high = mid -1;
        else{
            ans = mid;
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    int x; 
    cin >> x;
    sqrtFloor(x);

}