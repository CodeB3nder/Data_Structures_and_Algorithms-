/*
Remove duplicates from a sorted array
1.Naive  Time : O(n) Space : O(n)
        In a temporary array, the elements which are not repeated gets copied
2.Efficient Time : O(n) Space : O(1)
        The previous element is the same as the current element being traversed if they are not same
*/
# include "utilities.cpp"


int remDupNaive(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for(int i=0; i<n; i++)
    {
        if(temp[res-1]!=arr[i])
        {
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0; i<res; i++)
        arr[i]=temp[i];
    return res;
}

int remDupEfficient(int arr[], int n)
{
    int res=1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=arr[res-1])
        {
            arr[res]=arr[i];
            res++;
        }
    }
        return res;
}

int main()
{
    int arr[] = {10,20,20,30,30,30};
    display(arr,6);
    cout << "By naive: " << endl;
    int size = remDupEfficient(arr,6);
    display(arr,size);
     size = remDupNaive(arr,6);
    cout << "By efficient: "<< endl;
    display(arr,size);

}

