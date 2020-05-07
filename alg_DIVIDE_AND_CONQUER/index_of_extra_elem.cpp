// C++ program to find an extra 
// element present in arr1[] 
#include <iostream> 
using namespace std; 

// Returns index of extra element 
// in arr1[]. n is size of arr2[]. 
// Size of arr1[] is n-1. 
int findExtra(int arr1[], 
			int arr2[], int n) 
{ 
for (int i = 0; i < n; i++) 
	if (arr1[i] != arr2[i]) 
		return i; 

return n; 
} 

// Driver code 
int main() 
{ 
	int arr1[] = {2, 4, 6, 8, 
				10, 12, 13}; 
	int arr2[] = {2, 4, 6, 
				8, 10, 12}; 
	int n = sizeof(arr2) / sizeof(arr2[0]); 

	// Solve is passed both arrays 
	cout << findExtra(arr1, arr2, n); 
	return 0; 
} 
