// Median of 2 sorted array
# include <iostream>
using namespace std;
int max(int a, int b)
{
    if(a>=b)
        return a;
    else
        return b;
}
int min(int a, int b)
{
    if(a<b)
        return a;
    else 
        return b;

}
int median(int a[],int b[], int start_a, int end_a, int start_b, int end_b){
    if(end_a-start_a== 1 && end_b-start_b==1)
        return (max(a[start_a],b[start_b])+min(a[end_a],b[end_b]))/2;
    
    int m1_index = (start_a +end_a)/2;
    int m2_index = (start_b +end_b)/2;

    int m1 = a[m1_index];
    int m2 = b[m2_index];

    if(m1==m2)
        return m1;

    if(m1 < m2)
        return median( a, b, m1_index, end_a, start_b, m2_index);

    else
        return median(a,b,start_a, m1_index,m2_index, end_b);
}
int main()
{
    int n1,n2;
    cin >> n1 >> n2;
    int a[n1];
    int b[n2];

    for(int i = 0; i< n1; i++)
        cin >> a[i];
    for(int i = 0; i< n2; i++)
        cin >> b[i];

    cout << median(a,b,0,n1-1,0,n2-1);
    return 0;
}
// // A Simple Merge based O(n) 
// // solution to find median of 
// // two sorted arrays 
// #include <bits/stdc++.h> 
// using namespace std; 

// /* This function returns 
// median of ar1[] and ar2[]. 
// Assumptions in this function: 
// Both ar1[] and ar2[] 
// are sorted arrays 
// Both have n elements */
// int getMedian(int ar1[], 
// 			int ar2[], int n) 
// { 
// 	int i = 0; /* Current index of 
// 				i/p array ar1[] */
// 	int j = 0; /* Current index of 
// 				i/p array ar2[] */
// 	int count; 
// 	int m1 = -1, m2 = -1; 

// 	/* Since there are 2n elements, 
// 	median will be average of elements 
// 	at index n-1 and n in the array 
// 	obtained after merging ar1 and ar2 */
// 	for (count = 0; count <= n; count++) 
// 	{ 
// 		/* Below is to handle case where 
// 		all elements of ar1[] are 
// 		smaller than smallest(or first) 
// 		element of ar2[]*/
// 		if (i == n) 
// 		{ 
// 			m1 = m2; 
// 			m2 = ar2[0]; 
// 			break; 
// 		} 

// 		/*Below is to handle case where 
// 		all elements of ar2[] are 
// 		smaller than smallest(or first) 
// 		element of ar1[]*/
// 		else if (j == n) 
// 		{ 
// 			m1 = m2; 
// 			m2 = ar1[0]; 
// 			break; 
// 		} 

// 		if (ar1[i] < ar2[j]) 
// 		{ 
// 			/* Store the prev median */
// 			m1 = m2; 
// 			m2 = ar1[i]; 
// 			i++; 
// 		} 
// 		else
// 		{ 
// 			/* Store the prev median */
// 			m1 = m2; 
// 			m2 = ar2[j]; 
// 			j++; 
// 		} 
// 	} 

// 	return (m1 + m2)/2; 
// } 

// // Driver Code 
// int main() 
// { 
// 	int ar1[] = {1, 12, 15, 26, 38}; 
// 	int ar2[] = {2, 13, 17, 30, 45}; 

// 	int n1 = sizeof(ar1) / sizeof(ar1[0]); 
// 	int n2 = sizeof(ar2) / sizeof(ar2[0]); 
// 	if (n1 == n2) 
// 		cout << "Median is "
// 			<< getMedian(ar1, ar2, n1) ; 
// 	else
// 		cout << "Doesn't work for arrays"
// 			<< " of unequal size" ; 
// 	getchar(); 
// 	return 0; 
// } 

// // This code is contributed 
// // by Shivi_Aggarwal 
