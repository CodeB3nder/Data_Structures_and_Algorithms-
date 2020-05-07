// Given a circularly sorted array, find the extent of rotation of the array. Assume no duplicates and anti-clockwise rotation

# include <iostream>
using namespace std;

int countRotations(int arr[], int n)
{
	// int min = arr[0], index=0;
	// for (int i = 0; i < n; ++i)
	// {	
	// 	if(min >= arr[i])
	// 	{
	// 		min = arr[i];
	// 		index = i;
	// 	}
	// }
	// if (index == 0)
	// 	return 0;
	// return index;
	int index=0;
	for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
	          //  flag=true;
	        index=i+1;
	        break;
	    }
	}
}

int main()
{	
	int t;
	long long int n;
	cin >> t;
	while(t--){
		cin >> n;
		long long int arr[n];
		for (long long int i = 0; i < n; ++i)
			cin >> arr[i];
    	cout << countRotations(arr, n)<< endl; 
	}
    return 0;
}