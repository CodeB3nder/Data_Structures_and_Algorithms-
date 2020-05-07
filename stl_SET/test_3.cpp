# include<bits/stdc++.h>
using namespace std;

int count_triplets(int n, vector<pair<int,int>> points)
{
    set<pair<int,int>> pts;
    int count = 0;

    for(int i=0; i<n; i++)
        pts.insert(points[i]);
    
    for (int i = 0; i < n; i++) 
        for (int j = i + 1; j < n; j++) { 
            int x = points[i].first + points[j].first; 
            int y = points[i].second + points[j].second; 
  
            // If the mid point exists in the set 
            //if (x % 2 == 0 && y % 2 == 0) 
                if (pts.find(make_pair(x / 2, y / 2)) 
                    != pts.end()) 
                    count++; 
        } 
        return count;
}
int main() 
{ 
    vector<pair<int, int> > points 
        = { { 1, 1 }, { 2, 2 }, { 3, 3 } }; 
    int n = points.size(); 
    cout << count_triplets(n, points); 
} 