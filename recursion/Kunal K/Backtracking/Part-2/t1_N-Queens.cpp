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
    // check vertical row
    for (int i = 0; i < r; i++)
    {
        if (mat[i][c])
        {
            return false;
        }
    }
    // diagonal left
    int mxLeft = min(r, c);
    for (int i = 1; i <= mxLeft; i++)
    {
        if (mat[r - i][c - i])
        {
            return false;
        }
    }

    // diagonal Right
    int sn = mat.size();
    int mxRight = min(r, (sn - c - 1));
    for (int i = 1; i <= mxRight; i++)
    {
        if (mat[r - i][c + i])
        {
            return false;
        }
    }
    return true;
}
int print_posible_ways(vector<vector<bool>> mat, int r)
{
    if (r == mat.size())
    {
        display(mat);
        cout << endl;
        return 1;
    }
    int coutn = 0;

    // placing the queen and cheking for ewvry row and colum
    for (int c = 0; c < mat.size(); c++)
    {
        // place the queue if it is safe
        if (isSafe(mat, r, c))
        {
            mat[r][c] = true;
            coutn += print_posible_ways(mat, r + 1);
            mat[r][c] = false;
        }
    }
    return coutn;
}
int main()
{
    int n = 4;
    std::vector<std::vector<bool>> mat(n, std::vector<bool>(n, false));

    cout << print_posible_ways(mat, 0) << endl;
    return 0;
}
