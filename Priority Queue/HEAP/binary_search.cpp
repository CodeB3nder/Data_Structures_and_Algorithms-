# include<iostream>

using namespace std;

int binary_search(int arr[], int low, int high, int x)
{	
	int mid;
	if(low>=high)
		mid = (low+ high)/2;

		if(arr[mid] == x)
			return mid;
		if(arr[mid] > x)
			return binary_search(arr, low, mid, x);
		else
			return binary_search(arr, mid+1, high, x);
}

int main()
{	
	int t;
	int n;
	cin >> t;
	int x;
	while(t--){
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		cin >> x;
    	cout << binary_search(arr, 0, n, x)<< endl; 
	}
    return 0;
}