# include <iostream> 
# include <unordered_map>
# include <math.h>
using namespace std;

int maxLen(int arr[], int n)
{
    int ans = 0;
    int sum = 0;
    int j=0;
    unordered_map <int, int> preSum;

    for(int i=0; i<n ; i++)
    {
        sum += arr[i];
        if(sum == 0)
            return i+1;
        else{
            if(preSum.find(sum) == preSum.end())
                preSum[sum] = i;
            else
            {
                j = preSum[sum];
                ans = max(ans, i-j);
            }
            
        }
        return ans;
    }
}