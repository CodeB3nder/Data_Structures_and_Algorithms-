/* 
Leaders in an array
1. Naive
2. Efficient
    Traverse from the end, as end will always be an leader
*/
# include "utilities.cpp"

void leader_naive(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        bool flag = false;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] <= arr[j])
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
            cout << arr[i] << " ";
    }
    cout << endl;
}
void leader_efficient(int arr[], int n)
{
    int curr_ldr = arr[n-1];
    cout << curr_ldr << " ";
    for(int i=n-2; i>=0; i--)
    {
        if(curr_ldr < arr[i]) // Then it is the new leader
        {
            curr_ldr = arr[i];
            cout << curr_ldr << " ";
        }
    }
}
int main()
{
    int arr[] = {7,10,4,10,6,5,2};
    leader_naive(arr,7);
    cout<< endl;
    leader_efficient(arr,7);

}