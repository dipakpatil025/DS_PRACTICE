#include <bits/stdc++.h>
using namespace std;
void print_pacal_triangle(int n)
{
    vector<vector<int>> vv;
    for (int i = 0; i < n; i++)
    {
        vector<int> tp(i + 1);
        tp[0] = tp[tp.size() - 1] = 1;
        for (int j = 1; j < i; j++)
        {
            tp[j] = vv[i - 1][j - 1] + vv[i - 1][j];
        }
        vv.push_back(tp);
    }
    for (auto &&i : vv)
    {
        for (auto &&j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
void print_value(int r, int c)
{

    int a = 1;
    int b = 1;

    for (int i = 0; i < c; i++)
    {
        a *= r;
        r--;
    }

    while (c)
    {
        b *= c;
        c--;
    }

    cout << a / b << endl;
}
int main()
{
    print_pacal_triangle(5);
    print_value(3, 3);
    return 0;
}