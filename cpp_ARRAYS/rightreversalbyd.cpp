/*
Reversal Algorithm for right rotaion by d
*/

# include "utilities.cpp"

void reverse(int arr[], int low, int high)
{
    
    while(low<high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void rightRotate(int arr[], int d, int n) 
{ 
    reverse(arr, 0, n-1); 
    reverse(arr, 0, d-1); 
    reverse(arr, d, n-1); 
}

int main() 
{ 
    int arr[] = {1, 2, 3, 4, 5,  
                6, 7, 8, 9, 10}; 
      
    int n = sizeof(arr)/sizeof(arr[0]); 
    int k = 3; 
      
    rightRotate(arr, k, n); 
    display(arr, n); 
  
    return 0; 
} 
