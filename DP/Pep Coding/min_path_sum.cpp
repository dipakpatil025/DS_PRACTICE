#include <bits/stdc++.h>
using namespace std;

int minPathSum(vector<vector<int>> &grid)
{
    vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), 0));

    for (int i = grid.size() - 1; i >= 0; i--)
    {
        for (int j = grid[0].size(); j >= 0; j--)
        {
            if (i == grid.size() - 1 && j == grid[0].size() - 1)
            {
                dp[i][j] = grid[i][j];
            }
            else if (i == grid.size() - 1)
            {
                dp[i][j] = grid[i][j] + dp[i][j + 1];
            }
            else if (j == grid[0].size() - 1)
            {
                dp[i][j] = grid[i][j] + dp[i + 1][j];
            }
            else
            {
                dp[i][j] = min(dp[i + 1][j], dp[i][j + 1]) + grid[i][j];
            }
        }
    }
    return dp[0][0];
}

int main()
{
    vector<vector<int>> v = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
    minPathSum(v);
    return 0;
}