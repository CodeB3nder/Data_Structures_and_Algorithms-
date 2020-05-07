# include<iostream>
# include<bits/stdc++.h>
using namespace std;
struct compare{
  bool operator()(pair<int ,int>p1,pair<int,int>p2)
    {//MAX HEAP less<>
        return p1.second<p2.second;
    }
};
void show_(priority_queue<pair<int,int>,vector<pair<int,int>>,compare> p)
{   
    cout << "show : "<< endl;
    priority_queue<pair<int,int>,vector<pair<int,int>>,compare> q = p;
    while(!q.empty())
    {
        cout << "(" << q.top().first << "," << q.top().second<<")" << endl;
        q.pop();
    }
    cout << endl;
}
int print_N_mostFrequentNumber(int arr[], int n, int k) 
{ 
    int count=0;
	unordered_map<int ,int>m;
	for(int i=0;i<n;i++)
	    m[arr[i]]++;
    for(auto it = m.begin();it!=m.end();++it)
        cout << "(" << it->first << "," << it->second<<")" << endl;
	priority_queue<pair<int,int>,vector<pair<int,int>>,compare> p(m.begin(),m.end());
    show_(p);
	for(int j=0;j<k;j++)
	{
	    count+=p.top().second;
	    p.pop();
    }
     return count;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    cout << print_N_mostFrequentNumber(arr,n,k);
    return 0;
}