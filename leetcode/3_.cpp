// Longest Substring Without Repeating Characters
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if (a >= b)
        return a;
    else
        return b;
}
int lsrc(string s)
{
    unordered_set<int> coll;
    int a_pointer = 0, b_pointer = 0, max_ = 0;
    while (b_pointer < s.length())
    {
        if (coll.find(s[b_pointer]) == coll.end())
        {
            coll.insert(s[b_pointer]);
            b_pointer++;
            max_ = max(coll.size(), max_);
        }
        else
        {
            coll.erase(s[a_pointer]);
            a_pointer++;
        }
    }
    return max_;
}
int main()
{
    string s;
    cin >> s;
    cout << lsrc(s);
}