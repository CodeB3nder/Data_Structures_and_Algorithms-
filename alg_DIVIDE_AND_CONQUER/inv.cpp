# include <iostream>
using namespace std;
int inv(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(arr[i] > arr[j])
				cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
		}
	}
}

int main()
{
	int arr[] = {2,4,1,3,5};
	inv(arr,sizeof(arr)/sizeof(arr[0]));
	return 0;
}


