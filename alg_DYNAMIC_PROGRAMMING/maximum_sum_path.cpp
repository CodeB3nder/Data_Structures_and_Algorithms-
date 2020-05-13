// Given a square matrix of size N*N, where each cell is associated with a specific cost. A path is defined as a specific sequence of cells which starts from the top left cell move only right or down and ends on bottom right cell. We want to find a path with the maximum average over all existing paths. Average is computed as total cost divided by the number of cells visited in the path.

#include <bits/stdc++.h>
using namespace std;

double maxAverageOfPath(int **cost, int N)
{
    int dp[N + 1][N + 1];
    dp[0][0] = cost[0][0];

    for (int i = 1; i < N; i++)
        dp[i][0] = dp[i - 1][0] + cost[i][0];

    for (int j = 1; j < N; j++)
        dp[0][j] = dp[0][j - 1] + cost[0][j];

    for (int i = 1; i < N; i++)
        for (int j = 1; j <= N; j++)
            dp[i][j] = max(dp[i - 1][j],
                           dp[i][j - 1]) +
                       cost[i][j];

    return (double)dp[N - 1][N - 1] / (2 * N - 1);
}
int main()
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
    cout << maxAverageOfPath(cost,n);

}