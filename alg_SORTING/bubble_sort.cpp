# include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int bubble_sort(int arr[], int n)
{
    for(int i=0; i<n-1; i++) // Passes
    {   
        int flag = 1;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}

int main()
{
    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n;i++)
        cin >> arr[i];
    bubble_sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]  << " ";
    }
    
}
