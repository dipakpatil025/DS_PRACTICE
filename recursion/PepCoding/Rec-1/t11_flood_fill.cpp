#include <bits/stdc++.h>
using namespace std;
void print_path(vector<vector<int>> mat, int r, int c, string s, vector<vector<bool>> vis)
{
    if (r == mat.size() - 1 && c == mat.size() - 1)
    {

        cout << s << endl;
        return;
    }

    if (c < 0 || r < 0 || r >= mat.size() || c >= mat[0].size())
    {
        return;
    }
    if (mat[r][c] == 1 || vis[r][c] == true)
    {
        return;
    }

    vis[r][c] = true;
    print_path(mat, r + 1, c, s + "D", vis);

    print_path(mat, r, c + 1, s + "R", vis);
    print_path(mat, r, c - 1, s + "L", vis);
    print_path(mat, r-1, c, s + "U", vis);
    vis[r][c] = false;
}
int main()
{
    vector<vector<int>> vv = {
        {0, 0, 0},
        {1, 0, 0},
        {0, 0, 0},
    };
    vector<vector<bool>> vis = {
        {false, false, false},
        {false, false, false},
        {false, false, false}};
    print_path(vv, 0, 0, "", vis);
    return 0;
}