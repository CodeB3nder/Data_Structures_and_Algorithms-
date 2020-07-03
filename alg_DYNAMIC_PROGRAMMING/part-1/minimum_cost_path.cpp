/*Given a cost matrix cost[][] and a position (m, n) in cost[][], write a function that returns cost of minimum cost path to reach (m, n) from (0, 0). Each cell of the matrix represents a cost to traverse through that cell. Total cost of a path to reach (m, n) is sum of all the costs on that path (including both source and destination). You can only traverse down, right and diagonally lower cells from a given cell*/

#include <bits/stdc++.h>
using namespace std;
int max(int a, int b, int c)
{
    return max(max(a, b), c);
}

int maxAverageOfPath(int **cost, int N)
{
    int dp[N + 1][N + 1];
    dp[0][0] = cost[0][0];
    for (int i = 1; i <= N; i++)
        dp[i][0] = dp[i - 1][0] + cost[i][0];

    for (int j = 1; j <= N; j++)
        dp[0][j] = dp[0][j - 1] + cost[0][j];

    for (int i = 1; i < N; i++)
        for (int j = 1; j <= N; j++)
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]) + cost[i][j];

    return dp[N][N];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int **cost = new int *[n];
        for (int i = 0; i < n; i++)
            cost[i] = new int[n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> cost[i][j];
            }
        }
        cout << maxAverageOfPath(cost, n);
    }
}