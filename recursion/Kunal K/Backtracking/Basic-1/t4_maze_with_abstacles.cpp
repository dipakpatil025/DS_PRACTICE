#include <bits/stdc++.h>
using namespace std;
void print_path(bool maze[3][3], string s, int r, int c)
{
    if (r == 2 && c == 2)
    {
        cout << s << endl;
        // cout << s << endl;
        return;
    }
    if (!maze[r][c])
    {
        return;
    }

    // if (r < 2 && c < 2)
    // {
    //     print_path(maze, s + "D", r + 1, c + 1);
    // }
    if (r < 2)
    {

        print_path(maze, s + "V", r + 1, c);
    }
    if (c < 2)
    {
        print_path(maze, s + "H", r, c + 1);
    }
}
int main()
{
    bool maze[3][3] = {
        {true, true, true},
        {true, false, true},
        {true, true, true}};

    print_path(maze, "", 0, 0);
    return 0;
}