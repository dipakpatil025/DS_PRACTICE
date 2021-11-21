#include <bits/stdc++.h>
using namespace std;
void print_path(vector<vector<int>> mat, int r, int c, string s)
{
    if (r == mat.size() - 1, c == mat[0].size() - 1)
    {

        cout << s << endl;
        return;
    }

    if (mat[r][c] == 1)
    {
        return;
    }
    if (r < mat.size() - 1)
    {
        s+="D";
        print_path(mat, r + 1, c, s + "D");
        s.pop_back;
    }
    if (c < mat[0].size() - 1)
    {
        print_path(mat, r, c + 1, s + "R");
        s.pop_back;
    }

    if (c > 0 && c < mat[0].size() - 1)
    {
        print_path(mat, r, c - 1, s + "L");
        s.pop_back;
    }
    if (r > 0 && r < mat.size() -1)
    {
        print_path(mat, r - 1, c, s + "U");
        s.pop_back;
    }
}
int main()
{
    vector<vector<int>> vv = {
        {0, 0, 0},
        {0, 1, 0},
        {0, 0, 0},
    };
    print_path(vv, 0, 0, "");
    return 0;
}