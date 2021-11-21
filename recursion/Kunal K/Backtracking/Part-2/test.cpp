#include <bits/stdc++.h>
using namespace std;
#define N 3
void print_path(bool maze[3][3], int r, int c, int ans[N][N])
{
    if (r == 2 && c == 2)
    {
        ans[r][c] = 1;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        return;
    }

    if (!maze[r][c])
    {
        return;
    }
    maze[r][c] = false;
    ans[r][c] = 1;

    if (r < N - 1)
    {
        print_path(maze, r + 1, c, ans);
    }
    if (c < N - 1)
    {
        print_path(maze, r, c + 1, ans);
    }

    maze[r][c] = true;
    ans[r][c] = 0;
    return;
}
int main()
{
    cout << N << endl;
    bool maze[3][3] = {
        {true, true, true},
        {true, true, false},
        {true, true, true}};
    int ans[N][N] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}};
    print_path(maze, 0, 0, ans);
    return 0;
}