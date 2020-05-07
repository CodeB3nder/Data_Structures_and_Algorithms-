# include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
	int size1 = mid-low + 1;
	int size2 = high - mid;

	int L1[size1];
	int L2[size2];

	for(int i = 0; i < size1; i++)	
		L1[i] = arr[low + i];
	for(int j = 0; j < size2; j++)
		L2[j] = arr[mid+1+j];
	
	int i = 0; // Index of 1st array
	int j = 0; // Index of 2nd array
	int k = low; // Index of merged sorted array

	while( i<size1 && j<size2)
	{
		if(L1[i]<=L2[j])
		{
			arr[k] = L1[i];
			i++;
		}
		else
		{
			arr[k] = L2[j];
			j++;
		}
		k++;
	}

	while ( i < size1)
	{
		arr[k] = L1[i];
		i++;
		k++;
	}
	while ( j < size2)
	{
		arr[k] = L2[j];
		j++;
		k++;
	}
}
void merge_sort(int arr[], int l, int r)
{
	if(l < r)
	{
		int mid = (l) + (r-l)/2;

		merge_sort(arr, l, mid);
		merge_sort(arr, mid+1, r);

		merge(arr, l, mid, r);
	}
}

void display(int arr[], int size)
{
	for(int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	int arr[]= {12,14,7,10,2,19,20,48,12,5};
	int n = sizeof(arr)/sizeof(arr[0]);
	display(arr, n);
	merge_sort(arr,0,n-1);
	display(arr,n);
	return 0;
}













