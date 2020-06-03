/*
Left rotate an array by one
*/

# include "utilities.cpp"

void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0];
    for(int i=1; i<n; i++)
        arr[i-1]=arr[i];
    arr[n-1]=temp;
}

// int main()
// {
//     int arr[]={1,24,12,313,15};
//     display(arr, 5);
//     leftRotatebyOne(arr,5);
//     display(arr,5);
// }