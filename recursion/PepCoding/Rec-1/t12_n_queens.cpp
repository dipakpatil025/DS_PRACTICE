#include <bits/stdc++.h>
using namespace std;

void display(vector<vector<bool>> m)
{
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[0].size(); j++)
        {
            if (m[i][j])
            {
                cout << "Q ";
            }
            else
            {
                cout << "X ";
            }
        }
        cout << endl;
    }
}
bool isSafe(vector<vector<bool>> mat, int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        if (mat[i][c])
        {
            return false;
        }
    }
    for (int i = 1; i <= min(r, c); i++)
    {
        if (mat[r - i][c - i])
        {
            return false;
        }
    }
    int sn = mat.size();
    for (int i = 1; i <= min(r, (sn - c - 1)); i++)
    {
        if (mat[r - i][c + i])
        {
            return false;
        }
    }
    return true;
}
int print_ans(vector<vector<bool>> mat, int r)
{
    if (r == mat.size())
    {
        display(mat);
        cout << endl;
        return 1;
    }
    int cn = 0;
    for (int i = 0; i < mat.size(); i++)
    {
        if (isSafe(mat, r, i))
        {
            mat[r][i] = true;
            cn += print_ans(mat, r + 1);
            mat[r][i] = false;
        }
    }
    return cn;
}
int main()
{
    int n = 4;
    vector<vector<bool>> vv(n, vector<bool>(n, false));
    cout << print_ans(vv, 0);
    return 0;
}