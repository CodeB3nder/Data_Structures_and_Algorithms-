# include <iostream>
using namespace std;

int search(int arr[], int n, int x){
	int low = 0; 
	int high = n-1;
	while (low<=high)
	{
		int mid = (low+high)/2;
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]>x)
			high = mid-1;
		else
			low = mid+1;
	}
	return -1;
}
int first_occurence_iter(int arr[], int n, int x)
{       
    int low = 0;
    int high = n-1;
    while(low>=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>x)
            high = mid-1;
        else if(arr[mid]<x)
            low = mid+1;
        else{
            if(mid==0 || arr[mid-1]!=arr[mid])
                return mid;
            else
                high = mid-1;
        }

    }
}

int first_occurence_rec(int arr[], int l, int h, int x)
{
	if (l > h)
		return -1;
	
	int mid = (l+h)/2;

	if(arr[mid] > x)
		return first_occurence_rec(arr, l, mid-1, x);
	else if(arr[mid] < x)
		return first_occurence_rec(arr, mid+1, h, x);
    else{
        if(mid==0 || arr[mid-1]!=arr[mid])
            return mid;
        else
            return first_occurence_rec(arr,l,mid-1, x);
    }
}
int last_occurence_rec(int arr[], int l, int h, int x)
{
	if (l > h)
		return -1;
	
	int mid = (l+h)/2;
	if(arr[mid] > x)
		return last_occurence_rec(arr, l, mid-1, x);
	else if(arr[mid] < x)
		return last_occurence_rec(arr, mid+1, h, x);
    else{
        if(mid!=n-1 || arr[mid+1]!=arr[mid])
            return mid;
        else
            return last_occurence_rec(arr,mid+1,h, x);
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--){
	int n, x;
	cin >> n >> x;
	int arr[n];
	for(int i = 0; i < n ; i++)
		cin >> arr[i];
    if(search(arr,n,x)==-1){
        cout << -1 << endl;
        continue;
    }
	cout <<first_occurence_rec(arr,0,n,x)<< " " <<last_occurence_rec(arr, 0, n, x) << endl;
    }
	return 0;
}
