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
                cout << "K ";
            }
            else
            {
                cout << "- ";
            }
        }
        cout << endl;
    }
}
bool isValid(vector<vector<bool>> mt, int r, int c)
{
    if (r >= 0 && r < mt.size() && c >= 0 && c < mt.size())
    {
        return true;
    }
    return false;
}
bool isSafe(vector<vector<bool>> mt, int r, int c)
{
    if (isValid(mt, r - 2, c + 1))
    {
        if (mt[r - 2][c + 1])
        {
            return false;
        }
    }
    if (isValid(mt, r - 2, c - 1))
    {
        if (mt[r - 2][c - 1])
        {
            return false;
        }
    }
    if (isValid(mt, r + 2, c + 1))
    {
        if (mt[r + 2][c + 1])
        {
            return false;
        }
    }
    if (isValid(mt, r + 2, c - 1))
    {
        if (mt[r + 2][c - 1])
        {
            return false;
        }
    }
    if (isValid(mt, r + 1, c + 2))
    {
        if (mt[r + 1][c + 2])
        {
            return false;
        }
    }
    if (isValid(mt, r - 1, c + 2))
    {
        if (mt[r - 1][c + 2])
        {
            return false;
        }
    }
    if (isValid(mt, r + 1, c - 2))
    {
        if (mt[r + 1][c - 2])
        {
            return false;
        }
    }
    if (isValid(mt, r - 1, c - 2))
    {
        if (mt[r - 1][c - 2])
        {
            return false;
        }
    }
    return true;
}
void print_posible_ways(vector<vector<bool>> v, int r, int c, int cnt)
{
    if (cnt == 0)
    {
        display(v);
        cout << endl;
        return;
    }

    if (r == v.size() - 1 && c == v.size())
    {
        return;
    }

    if (c == v.size())
    {
        print_posible_ways(v, r + 1, 0, cnt);
        return;
    }
    if (isSafe(v, r, c))
    {
        v[r][c] = true;
        print_posible_ways(v, r, c + 1, cnt - 1);
        v[r][c] = false;
    }
    print_posible_ways(v, r, c + 1, cnt);
}
int main()
{
    int n = 1;
    vector<vector<bool>> v(n, vector<bool>(n, false));
    print_posible_ways(v, 0, 0, n);
    return 0;
}