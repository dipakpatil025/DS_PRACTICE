#include <bits/stdc++.h>
using namespace std;
void print_stair_path(string p, int n)
{

    if (n == 0)
    {
        cout << p << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        /* code */
        char ch = '0' + i;
        print_stair_path(p + ch, n - i);
    }

    // print_stair_path(p,n);
}

int print_stair_path_cnt(string p, int n)
{

    if (n == 0)
    {
        cout << p << endl;
        return 1;
    }

    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        /* code */
        char ch = '0' + i;
        c += print_stair_path_cnt(p + ch, n - i);
    }

    return c;
    // print_stair_path(p,n);
}
int main()
{
    int n = 3;
    cout << print_stair_path_cnt("", n);
    return 0;
}