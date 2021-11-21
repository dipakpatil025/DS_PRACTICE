#include <bits/stdc++.h>
using namespace std;

void call(int mat[4][4], int r, int c, int cal, int mt[4][4])
{
    if (r == 3)
    {
        mt[r][c] += mat[r][c];
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << mt[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
        cout << "yes" << endl;
        return;
    }
    mt[r][c] += mat[r][c];
    if (r < 3)
    {
        call(mat, r + 1, c, cal + mat[r][c], mt);
    }
    if (c < 3 && r < 3)
    {
        call(mat, r + 1, c + 1, cal + mat[r][c], mt);
    }
    if (c > 0 && r < 3)
    {
        call(mat, r + 1, c - 1, cal + mat[r][c], mt);
    }
    mt[r][c] = 0;
}

int main()
{
    int mat[4][4] = {
        {4, 6, 14, 31},
        {17, 0, 5, 5},
        {4, 41, 22, 3},
        {2, 51, 6, 0}};

    int mt[4][4] = {
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}};
    call(mat, 0, 0, 1, mt);
    return 0;
}