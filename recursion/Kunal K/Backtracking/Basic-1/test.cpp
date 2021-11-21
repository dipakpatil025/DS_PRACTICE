#include <bits/stdc++.h>
using namespace std;

void count_path(vector<vector<int>> &maze, int r, int c, string s,int ct, vector<vector<int>> mt)
{
    if (r == maze.size() - 1)
    {
        // cout << s << endl;
        mt[r][c] = ct;
        for (int i = 0; i < mt.size(); i++)
        {
            for (int j = 0; j < mt[0].size(); j++)
            {
                cout<<mt[i][j]<<" ";
            }
            cout<<endl;
            
        }
            cout<<endl;
        
        return;
    }

    
    mt[r][c] = ct;

    if (r < maze.size() - 1)
    {
        count_path(maze, r + 1, c, s + 'D',ct+1,mt);
    }
    if (c < maze[0].size() - 1)
    {
        count_path(maze, r, c + 1, s + 'R',ct+1,mt);
    }
    if (r > 0)
    {
        count_path(maze, r - 1, c, s + 'U',ct+1,mt);
    }

    if (c > 0)
    {
        count_path(maze, r, c - 1, s + 'L',ct+1,mt);
    }

    mt[r][c] = 0;
}
int main()
{
    vector<vector<int>> mat = {
        {1, 2, 3},
        {3, 1, 1},
        {1, 1,1}};
    vector<vector<int>> mt = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}};

    count_path(mat, 0, 0, "",1,mt);
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