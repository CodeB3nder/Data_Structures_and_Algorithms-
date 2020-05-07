// A C/C++ program to find floor of a given number 
// in a sorted array 
#include<stdio.h> 

/* Function to get index of floor of x in 
arr[low..high] */
int floorSearch(int arr[], int low, int high, int x) 
{ 
	// If low and high cross each other 
	if (low > high) 
		return -1; 

	// If last element is smaller than x 
	if (x >= arr[high]) 
		return high; 

	// Find the middle point 
	int mid = (low+high)/2; 

	// If middle point is floor. 
	if (arr[mid] == x) 
		return mid; 

	// If x lies between mid-1 and mid 
	if (mid > 0 && arr[mid-1] <= x && x < arr[mid]) 
		return mid-1; 

	// If x is smaller than mid, floor must be in 
	// left half. 
	if (x < arr[mid]) 
		return floorSearch(arr, low, mid-1, x); 

	// If mid-1 is not floor and x is greater than 
	// arr[mid], 
	return floorSearch(arr, mid+1, high, x); 
} 

/* Driver program to check above functions */
int main() 
{ 
	int arr[] = {1, 2, 4, 6, 10, 12, 14}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	int x = 7; 
	int index = floorSearch(arr, 0, n-1, x); 
	if (index == -1) 
		printf("Floor of %d doesn't exist in array ", x); 
	else
		printf("Floor of %d is %d", x, arr[index]); 
	return 0; 
} 
