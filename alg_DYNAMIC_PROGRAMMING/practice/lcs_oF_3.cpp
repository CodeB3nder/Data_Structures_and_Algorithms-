#include <iostream>
# include <bits/stdc++.h>

typedef long long int ll;



using namespace std;

int LCS(string _One, string _Second, string _third, int a, int b, int c) {
	int Longest[a+1][b+1][c+1];

	for (int i = 0; i <= a; i++) {
		for (int j = 0; j <= b; j++) {
			for (int k = 0; k <= c; k++) {
				if (i == 0 || j == 0 || k == 0)
					Longest[i][j][k] = 0;
				else if (_One[i - 1] == _Second[j - 1] && _One[i - 1] == _third[k - 1]) 
					Longest[i][j][k] = Longest[i - 1][j - 1][k - 1] + 1;
				else 
					Longest[i][j][k] =
						max( max(Longest[i - 1][j][k], Longest[i][j - 1][k]),
							Longest[i][j][k - 1]);
				
			}

		}
	}
	return Longest[a][b][c];
}

int main() {
	int t; cin >> t;
	while(t--){
	int a, b, c;
	cin >> a;cin >> b;cin >> c;
	string One, Second, Third;
	cin >> One >> Second >> Third;
	cout << LCS(One, Second, Third, a, b, c) << endl;
	}
} 