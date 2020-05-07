# include<iostream>
# include<stack>

using namespace std;

void next_greater(int arr[], int n)
{
    stack<int> s;
    int res[n];
    s.push(0);
    for(int i=1; i<n; i++)
    {
        while(s.empty()==false && arr[s.top()]<=arr[i]){
            //cout << arr[s.top()] << "=< " << arr[i] << " ";
            res[s.top()] = arr[i]; 
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty())
    {   

        res[s.top()]=-1;
        s.pop();
    }
    for(int i=0; i<n; i++)
        cout << res[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {   
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i< n; i++)
            cin >> arr[i];
        next_greater(arr,n);
        
    }
}