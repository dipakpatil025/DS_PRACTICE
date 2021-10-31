#include <bits/stdc++.h>
using namespace std;
void bubble(vector<int> &v, int i, int n)
{
    if (n == 1)
    {
        return;
    }
    if (i < n)
    {
        bubble(v, i, n);
    }
    else
    {
    }
}

int main()
{
    vector<int> v = {6, 5, 3, 1, 2, 3, 4};
    bubble(v, 0, v.size());
    return 0;
}