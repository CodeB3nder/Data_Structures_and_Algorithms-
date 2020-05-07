/*
Left rotate by d places
1. Naive O(d*n)
    Left rotate by one d times
2. Efficient (O(n))
    Reversal Algotithm
*/

# include "utilities.cpp"
void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0];
    for(int i=1; i<n; i++)
        arr[i-1]=arr[i];
    arr[n-1]=temp;
}

void reverse(int arr[], int low, int high)
{

    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftRotatebyD_naive(int arr[], int n, int d)
{
    for(int i=0; i<d; i++)
        leftRotatebyOne(arr,n);
}

void leftRotatebyD_reverse(int arr[], int n, int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main()
{
    int arr[]={1,24,12,313,15};
    display(arr, 5);
    leftRotatebyD_reverse(arr,5,2);
    display(arr,5);
    leftRotatebyD_naive(arr,5,2);
    display(arr,5);
}