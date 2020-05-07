# include<iostream>
# include<stack>

using namespace std;

void ssp(int arr[], int n)
{
    stack<int> s;
    s.push(0);
    for(int i=1; i<n; i++)
    {
        while(s.empty()==false && arr[s.top()]<=arr[i])
            s.pop();
        if(s.empty())
            cout << i+1 << " ";
        else
            cout << i-s.top() << " ";
        s.push(i);
    }
}