//setting up own comaparator
// Min Heap of Intervals
# include<iostream>
# include<bits/stdc++.h>

using namespace std;
class Interval{
    public:
        int start;
        int end;
        Interval(int st, int en)
        {
            start = st;
            end = en;
        }
};

class compare{
    public:
        bool operator()(const Interval &a, Interval &b){
            //greater means minHeap
            // a is greater than b
            return a.start > b.start;
        }
};
int main()
{
    priority_queue<Interval, vector<Interval>, compare> pq;
    int t, n, i, s, e;
    cin >> t;
    while(t--){
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> s >> e;
            pq.push(Interval(s,e));
        }
        cout << "size: " << pq.size() << endl;
        while(!pq.empty()){
            Interval ie = pq.top();
            cout << ie.start<< " " << ie.end << endl;
            pq.pop();
            cout <<"size :"  << pq.size() << endl; 
        }
    }
    return 0;
}