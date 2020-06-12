# include <iostream>
# include <bits/stdc++.h>
using namespace std;
const int MSZ = 100001;
        
int main(){
	// given upper bound of N
	short T;
	int N, K, i, j;
	cin >> T;
	while(T--)
	{
	    int arr[MSZ] = {0};
	    cin >> N;
	    while(N--)
	    {
	        cin >> i;
	        arr[i]++;
	    }
	    cin >> K;
	    i = 0;
	    j = 0;
	    while(j < K)
	    {
	        j = j + arr[i];
	        i++;
	    }
	    cout << i-1 << '\n';
	}
}