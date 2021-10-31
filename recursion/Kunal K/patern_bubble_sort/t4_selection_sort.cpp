#include <bits/stdc++.h>
using namespace std;
void call(vector<int> &v, int mx, int c, int r)
{
    if (r == 0)
    {
        return;
    }
    if (c < r)
    {
        if (v[c] > v[mx])
        {
            call(v, c, c+1, r);
        }
        else
        {
            call(v, mx, c + 1, r);
        }
    }
    else
    {
        swap(v[mx], v[r - 1]);
        call(v, 0, 0, --r);
    }
}
int main()
{
    vector<int> v = {3, 6, 4, 1, 2, 5};
    call(v, 0, 0, v.size());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}
