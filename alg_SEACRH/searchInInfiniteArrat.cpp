# include <iostream>
using namespace std;
int Bsearch(int arr[], int l, int h, int x)
{
	if (l > h)
		return -1;
	
	int mid = (l+h)/2;
	
	if(x == arr[mid])
		return mid;	
	else if(arr[mid] > x)
		return Bsearch(arr, l, mid-1, x);
	else
		return Bsearch(arr, mid+1, h, x);
	
}
int search(int arr[], int x)
{
    if(arr[0]==x)
        return 0;
    
    int i=1;
    while(arr[i]<x)
        i *= 2;
    if(arr[i]==x)
        return i;
    
    return Bsearch(arr, i/2+1, i-1,x);
}
int main(){
    int arr[] = {1,10,15,20,40,60,80,100,120,200,500,1000};
    int x= 100;
    cout << search(arr,x);
}
