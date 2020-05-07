#include <stdio.h>

// Function to find number of 1's in a sorted binary array
int count(int arr[], int n)
{
	// if last element of the array is 0, no ones can
	// be present in it since it is sorted
	if (arr[n - 1] == 0) {
		return 0;
	}

	// if first element of the array is 1, all its elements
	// are ones only since it is sorted
	if (arr[0]) {
		return n;
	}

	// divide array into left and right sub-array and recur
	return count(arr, n/2) + count(arr + n/2, n - n/2);
}

// main function
int main(void)
{
	int arr[] = { 0, 0, 0, 0, 1, 1, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Total number of 1's present are %d", count(arr, n));

	return 0;
}