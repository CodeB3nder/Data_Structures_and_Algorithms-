# include<iostream>
using namespace std;
bool isUgly(int i)
{
    while(i%2==0)
        i=i/2;
    while(i%3==0)
        i=i/3;
    while(i%5==0)
        i=i/5;
    if(i==1)
        return true;
    else    
        return false;
}
int getNthUglyNo(int n)
{   
    int count = 1;
    int i=1;
    while(count<n)
    {
        i++;
        if(isUgly(i))
            count++;        
    }
    return i;
}
int main()
{
    cout << getNthUglyNo(150);
}