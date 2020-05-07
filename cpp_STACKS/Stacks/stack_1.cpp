/* Implementing stacks using array*/
# include <iostream>
# define MAXSIZE 1000
using namespace std;
class stack{
    int top;
    public:
        int arr[MAXSIZE];
        stack(){top=-1;}
        bool push(int x){
            if(top>=MAXSIZE){
                cout<<"Stack Overflow" << endl;
                return false;
            }
            else
            {
                arr[++top] = x;
                cout << x << " is pushed in stack" << endl;
                return true;
            }
                            
        }
        int peek()
        {   
            if(top<0){
                cout << "Stack is Empty\n";
                return -1;
            }
            return arr[top];
        }
        int pop()
        {
            if(top<0){
                cout << "Underflow Error";
                return -1;
            }
            else
                return arr[top--];
            
        }
        bool isEmpty() 
        { 
        return (top < 0); 
        }    
};
int main() 
{ 
    class stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.peek() << endl;
    cout << s.pop() << " Popped from stack\n"; 
  
    return 0; 
} 
