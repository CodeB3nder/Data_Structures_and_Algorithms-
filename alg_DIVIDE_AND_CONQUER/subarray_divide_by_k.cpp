# include <iostream>
using namespace std;
int res = INT8_MAX;

int minimum(int x, int y)
{
	if(x>y)
		return y;
	else 
		return x;
}

int binary_search(int arr[],int n, int low,int high,int s)
{	
	if(low > high)
		return res;
	else
	{	
	int sum = 0;
	int mid = (low+high)/2;
	for(int i = 0; i < n; i++)
	sum = sum + (int)arr[i]/mid;
	if(sum > s)
		return binary_search(arr, n, mid+1, high, s);
	else if(sum <= s)
	{	
		res = minimum(res, mid);	
		return binary_search(arr, n, low, mid-1, s);
	}
	}

}


int find_minimum_k(int arr[], int n, int s)
{
	int maximum = arr[0];
	for(int i = 1; i < n; i++)
	{
		if(maximum<arr[i])
			maximum = arr[i];
	}
       	int low = 1;
	int high = maximum + 1;
	int res = high;
	return binary_search(arr, n, low, high,s);

}
int main()
{
	int arr[] = {19,17,11,10};
	cout << find_minimum_k(arr, 4, 40);
	return 0;
}
