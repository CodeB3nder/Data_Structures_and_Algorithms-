// Using min - Heap
// O_klogn
# include <bits/stdc++.h>
# include <iostream>
# include <queue>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0; i<n; i++){
            int data; cin>>data;
            pq.push(data);
        }
        int k; cin>>k;
        int p = k-1;
        while(p--){
            pq.pop();
        }
        cout << pq.top() << endl;
    }
}