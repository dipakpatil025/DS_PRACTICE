#include <bits/stdc++.h>
using namespace std;

void count_path(vector<vector<bool>> &maze, int r, int c, string s)
{
    if (r == maze.size() - 1 && c == maze[0].size() - 1)
    {
        cout << s << endl;
        return;
    }
    if (maze[r][c] == false)
    {
        return;
    }
    maze[r][c] = false;

    if (r < maze.size() - 1)
    {
        count_path(maze, r + 1, c, s + 'D');
    }
    if (c < maze[0].size() - 1)
    {
        count_path(maze, r, c + 1, s + 'R');
    }
    if (r > 0)
    {
        count_path(maze, r - 1, c, s + 'U');
    }

    if (c > 0)
    {
        count_path(maze, r, c - 1, s + 'L');
    }

    maze[r][c] = true;
}
int main()
{
    vector<vector<bool>> mat = {
        {true, true, true},
        {true, true, true},
        {true, true, true}};

    count_path(mat, 0, 0, "");
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}