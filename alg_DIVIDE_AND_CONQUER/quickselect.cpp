# include<iostream>
# include "partitioning.cpp"
using namespace std;

int quickselect(int arr[], int lower, int upper, int k)
{	
	int pivot_index;
	if (lower == upper)
		return arr[lower];
	else 
	{
		pivot_index = partition(arr, lower, upper);
		if (k-1 == pivot_index)
			return arr[pivot_index-1];
		else
		if (k-1 < pivot_index)
			return quickselect(arr,lower, pivot_index-1,k);
		else
		if (k-1 >pivot_index)	
			return quickselect(arr, pivot_index+1, upper,k);
	}
}

int main()
{
	int arr[] = {5,1,3,10,23,12,18,28,32,25};
	cout << quickselect(arr, 0, sizeof(arr)/sizeof(arr[0])-1,5);
	return 0;
}