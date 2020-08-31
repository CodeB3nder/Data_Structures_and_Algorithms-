# include <iostream>
using namespace std;

int binary_Search(int arr[], int n, int x){
	int low = 0; 
	int high = n-1;
	while (low<=high)
	{
		int mid = (low+high)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[low] < arr[mid]) // 1st half is sorted
        {
            if(x >= arr[low] && x < arr[mid])
                high = mid - 1;
            else
                low = mid+1;
        }
        else{
            
        }
	}
	return -1;
}
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n ; i++)
		cin >> arr[i];
	int x;
	cin >> x;
	cout << binary_Search(arr, n, x);
	return 0;
}
