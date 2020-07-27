#include<iostream>
using namespace std;
void swap(int &i , int &j)
{
	int temp;
	temp = j;
	j = i;
	i = temp;
}
void display(int arr[], int n)
{
	for (int i=0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int partition(int arr[], int p, int r)
{
	int x = arr[r];
	int i =  p-1;
	for (int j=p; j<r-1; j++)
	{
		if (arr[j] < x)
		{
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[r]);
	return i+1;
}



/*int main()
{
	int arr[] = {5,1,3,10,23,12,18,28,32,25};
	cout <<	partition(arr, 0, sizeof(arr)/sizeof(arr[0])-1) << "\n";	
	display(arr, sizeof(arr)/sizeof(arr[0]));
	return 0;
}*/


	

