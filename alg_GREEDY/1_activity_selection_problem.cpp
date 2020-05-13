# include <bits/stdc++.h>
using namespace std;

bool compare(const pair<pair<int,int>,int>  &p1, const pair<pair<int,int>,int>  &p2){
    return p1.first.second < p2.first.second;
}
void solve(){
        int n; cin>>n;
        vector<pair<pair<int,int>,int>> vp;
        int start[n], end[n];
        for(int i=0; i<n; i++)
            cin >> start[i];

        for(int i=0; i<n; i++)
            cin >> end[i];

        for(int i=0; i<n;i++)
        {
            vp.push_back({{start[i],end[i]},i});
        } 
        sort(vp.begin(), vp.end(),compare);

        // for(int i=0; i<n;i++)
        // {
        //     cout << vp[i].first.first <<" "<< vp[i].first.second  << " " << vp[i].second << endl;
        // }

        pair<pair<int,int>,int> curr = vp[0];
        cout << vp[0].second+1 << " ";
        for(int i=1; i<n; i++)
        {
            if(vp[i].first.first > curr.first.second){
                //count++;
                cout << vp[i].second+1<< " ";
                curr = vp[i];
            }
        }
        cout << endl;



}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}