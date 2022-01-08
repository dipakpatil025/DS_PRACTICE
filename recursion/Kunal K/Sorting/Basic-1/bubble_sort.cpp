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
        if (i < n - 1 && v[i] > v[i + 1])
        {
            swap(v[i], v[i + 1]);
        }

        bubble(v, i + 1, n);
    }
    else
    {
        bubble(v, 0, n - 1);
    }
}

int main()
{
    vector<int> v = {6, 5, 3, 1, 2, 3, 4};
    bubble(v, 0, v.size());
    for (auto &&i : v)
    {
        cout << i << " ";
    }

    return 0;
}