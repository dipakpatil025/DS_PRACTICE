#include <bits/stdc++.h>
using namespace std;
void call(int r, int c)
{
    if (r == 0)
    {
        return;
    }

    if (c < r)
    {
        call(r, ++c);
        cout << "* ";
    }
    else
    {
        call(--r, 0);
        cout << endl;
    }
}
int main()
{
    call(5, 0);
    return 0;
}