# include <iostream>
# include <bits/stdc++.h>
using namespace std;
int pow_(int x, int y)
{
	if(y == 1)
		return x;
	else
		return pow_(x,y/2)*pow_(x,y-y/2);
		
}

int main()
{
	int x,y,p;
	cin >> x >> y >> p;
	cout << pow_(x,y)%p;
	return 0;
}

