# include<iostream>
# include<vector>
# include<bits/stdc++.h>
using namespace std;




void f(int nums[],int n,int k)
{   
    deque<int> q(k);
    //vector<int> res;
    if(n==0)
        return;
    int i;
    for(i = 0; i<k; i++)
    {
        while(!q.empty() && nums[i] >= nums[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    for(;i<n;++i){
        //res.push_back(nums[q.front()]);

        cout << nums[q.front()] << " ";
        while(!q.empty() && q.front()<=i-k)
            q.pop_front();
        while(!q.empty() && nums[i] >= nums[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    //res.push_back(nums[q.front()]);
    cout << nums[q.front()] ;
    //return res;
}
int main() 
{ 
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        f(arr,n,k);
        cout << endl;
    }
}