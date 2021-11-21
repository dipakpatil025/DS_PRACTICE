#include <bits/stdc++.h>
using namespace std;
void display(vector<vector<int>> z)
{
    for (int i = 0; i < z.size(); i++)
    {
        for (int j = 0; j < z[0].size(); j++)
        {
            cout << z[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
// void call(vector<vector<int>> mat, int r, int c, int n, int sum, vector<vector<int>> z)
void call(vector<vector<int>> mat, int r, int c, int n, int sum, int &z)
{
    if (r == n - 1)
    {

        // z[r][c] = 1;
        // display(z);
        sum += mat[r][c];
        // cout << sum << endl;
        // z.push_back(sum);
        z = min(sum, z);
        return;
    }

    // z[r][c] = 1;
    sum += mat[r][c];
    if (r < n - 1)
    {
        call(mat, r + 1, c, n, sum, z);
    }
    if (c > 0 && r < n - 1)
    {

        call(mat, r + 1, c - 1, n, sum, z);
    }
    if (c < n - 1 && r < n - 1)
    {

        call(mat, r + 1, c + 1, n, sum, z);
    }
    sum -= mat[r][c];
    // z[r][c] = 0;

    // cout << "dipak" << endl;
}
int main()
{
    int n = 4;
    vector<vector<int>> mat = {{4, 6, 14, 21},
                               {17, 0, 5, 5},
                               {4, 41, 1, 3},
                               {2, 51, 6, 0}};

    // vector<vector<int>> z = {
    //     {0, 0, 0, 0},
    //     {0, 0, 0, 0},
    //     {0, 0, 0, 0},
    //     {0, 0, 0, 0}};
    int z = INT_MAX;

    for (int i = 0; i < mat.size(); i++)
    {
        call(mat, 0, i, n, 0, z);
    }
    cout << 100 - z << endl;
    return 0;
}