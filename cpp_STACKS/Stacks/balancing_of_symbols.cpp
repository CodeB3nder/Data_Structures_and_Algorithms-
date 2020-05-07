#include <iostream>
#include <stack>
using namespace std;
bool matching(char a, char b){
    return ((a=='(' && b==')') ||(a=='{' && b=='}')||(a=='[' && b==']') );
}
bool balanced(string expr)
{
    stack<char> s;
    char x;
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
        {
            s.push(expr[i]);
            //continue;
        }
    else {
        if(s.empty()==true)
            return false;
        else if(matching(s.top(),expr[i])==false)
            return false;
        else 
            s.pop();
    }
    }
    return(s.empty());
}
int main()
{
    int t;
    cin >>t ;
    while(t--){
        string s;cin>>s;
        if(balanced(s))
            cout << "balanced" <<endl;
        else
            cout <<"not balanced"<<endl;
    }
}