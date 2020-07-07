#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int rodCutting(int L, int n, int length[], int price[])
{
    int i, j;
    int K[n + 1][L + 1]; // k[sizeofarray+1][lengthofrod+1]

    // Build table K[][] in bottom up manner
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= L; j++)
        {
            if (i == 0 || j == 0)
                K[i][j] = 0;
            else if (length[i - 1] > j)
                K[i][j] = K[i - 1][j];
            else
                K[i][j] = max(price[i - 1] + K[i][j - length[i - 1]], K[i - 1][j]);
        }
    }
    return K[n][L];
}
int main()
{
    int n, L;
    cin >> L;

    int length[L];
    int price[L];
    for (int i = 0; i < L; i++){
        cin >> length[i] >> price[i];
    }

    cout << rodCutting(L, L, length, price);
}