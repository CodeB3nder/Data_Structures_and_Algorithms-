# include <iostream>
using namespace std;
int binary_search(int arr[], int l, int h, int x)
{
	if (l > h)
		return -1;
	
	int mid = (l+h)/2;
	
	if(x == arr[mid])
		return mid;	
	else if(arr[mid] > x)
		return binary_search(arr, l, mid-1, x);
	else
		return binary_search(arr, mid+1, h, x);
	
}
int binary_Search_iter(int arr[], int n, int x){
	int low = 0; 
	int high = n-1;
	while (low<=high)
	{
		int mid = (low+high)/2;
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]>x)
			high = mid-1;
		else
			low = mid+1;
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
	cout << binary_Search_iter(arr, n, x);
	return 0;
}
