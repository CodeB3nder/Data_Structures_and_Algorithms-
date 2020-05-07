# include<iostream>
using namespace std;

void display(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}