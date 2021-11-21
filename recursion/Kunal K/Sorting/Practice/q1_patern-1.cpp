#include <bits/stdc++.h>
using namespace std;

void print_patern(int r, int c)
{
    if (r == 0)
    {
        return;
    }
    if (r > c)
    {
        cout << "* ";
        print_patern(r, c + 1);
    }
    else
    {
        cout << endl;
        print_patern(r - 1, 0);
    }
}
int main()
{
    print_patern(4, 0);
    return 0;
}