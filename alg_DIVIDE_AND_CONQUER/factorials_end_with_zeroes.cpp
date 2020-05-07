// Binary search based CPP program to find 
// numbers with n trailing zeros. 
#include <bits/stdc++.h> 
using namespace std; 

// Function to calculate trailing zeros 
int trailingZeroes(int n) 
{ 
	int cnt = 0; 
	while (n > 0) { 
		n /= 5; 
		cnt += n; 
	} 
	return cnt; 
} 

void binarySearch(int n) 
{ 
	int low = 0; 
	int high = 1e6; // range of numbers 

	// binary search for first number with 
	// n trailing zeros 
	while (low < high) { 
		int mid = (low + high) / 2; 
		int count = trailingZeroes(mid); 
		if (count < n) 
			low = mid + 1; 
		else
			high = mid; 
	} 

	// Print all numbers after low with n 
	// trailing zeros. 
	vector<int> result; 
	while (trailingZeroes(low) == n) { 
		result.push_back(low); 
		low++; 
	} 

	// Print result 
	for (int i = 0; i < result.size(); i++) 
		cout << result[i] << " "; 
} 

// Driver code 
int main() 
{ 
	int n = 2; 
	binarySearch(n); 
	return 0; 
} 
