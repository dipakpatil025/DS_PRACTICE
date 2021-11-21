#include <bits/stdc++.h>
using namespace std;
void print_path(string s, int r, int c)
{
    if (r == 1 && c == 1)
    {
        cout << s << endl;
        return;
    }
    if (r > 1 && c > 1)
    {
        print_path(s + "↘", r - 1, c - 1);
    }
    if (r > 1)
    {

        print_path(s + "↓", r - 1, c);
    }
    if (c > 1)
    {

        print_path(s + "→", r, c - 1);
    }
}
int main()
{
    print_path("", 3, 3);
    return 0;
}