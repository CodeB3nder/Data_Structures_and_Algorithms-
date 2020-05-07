# include <iostream>
using namespace std;
# include <stack>
int isOperand(char c)
{
    if(c == '+' || c=='-'|| c=='/'|| c=='*'|| c=='^' )
        return 0;
    else
        return 1;
    
}
int prec(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
}
string infixtopostfix(string infix)
{
    stack<char> st;
    string postfix;
    int i=0;//infix
    int j=0;//postfix
    while(infix[i]!=NULL)
    {
        if(isOperand(infix[i]))
        {
            postfix.push_back(infix[i]);
            i++;
        }
        else
        {
            if(prec(infix[i])>prec(st.top()))
                st.push(infix[i++]);
            else
            {
                postfix.push_back(st.top());
                st.pop();
            }
            
        }
        
    }
    while(st.top()!=NULL){
        postfix.push_back(st.top());
        st.pop();
}
return postfix;
}
int main();
{
    string s ="a+b*c-d/e";
    cout << infixtopostfix(s);
}