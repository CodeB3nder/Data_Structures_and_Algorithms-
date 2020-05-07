/*
Set of vectors
*/

# include<bits/stdc++.h>
using namespace std;

set<vector<int>>set_of_vectors;

void print(vector<int> v)
{
    for(int x:v)
        cout << x << " ";
    cout << endl;
}

int main()
{
    vector<int> data_1{ 10, 20, 30, 40 }; 
    vector<int> data_2{ 5, 10, 15 }; 
    vector<int> data_3{ 1, 3, 5, 7, 9, 11, 13 }; 
    vector<int> data_4{ 5, 10, 15 }; 
    vector<int> data_5{ 10, 20, 30, 40 }; 

    set_of_vectors.insert(data_1); 
    set_of_vectors.insert(data_2); 
    set_of_vectors.insert(data_3); 
    set_of_vectors.insert(data_4); 
    set_of_vectors.insert(data_5);

    for(auto it = set_of_vectors.begin();it!=set_of_vectors.end();++it)
    {
        print(*it);
    }
    return 0;
}
