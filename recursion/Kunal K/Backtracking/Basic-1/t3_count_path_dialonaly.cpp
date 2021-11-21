#include <bits/stdc++.h>
using namespace std;
int print_path(int r, int c)
{
    if (r == 1 || c == 1)
    {
        return 1;
    }
    int left = print_path(r - 1, c);
    int diagonal = print_path(r - 1, c - 1);
    int right = print_path(r, c - 1);

    return left + right + diagonal;
}
int main()
{
    cout << print_path(2, 2);
    return 0;
}