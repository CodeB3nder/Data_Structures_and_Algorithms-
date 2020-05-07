/*
Reverse an array
*/

# include "utilities.cpp"

void reverse(int arr[], int n)
{
    int low=0;
    int high=n-1;
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
// int main()
// {
//     int arr[]={1,24,12,313,15};
//     reverse(arr,5);
//     display(arr, 5);
// }