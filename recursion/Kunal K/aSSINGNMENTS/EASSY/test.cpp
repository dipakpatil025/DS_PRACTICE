#include <bits/stdc++.h>
using namespace std;
// int call(vector<int> v, int mn)
// {
//     if (v.size() == 0)
//     {
//         return mn;
//     }

//     int x = v[v.size() - 1];
//     mn = min(mn, x);
//     v.pop_back();
//     return call(v, mn);
// }
int call(vector<int> v)
{
    if (v.size() == 1)
    {
        return v[0];
    }
    v.pop_back();
    return min(v[v.size() - 1], call(v));
}
int main()
{
    vector<int> v = {55, 20, 3, 22};

    cout << call(v, INT_MAX);
    return 0;
}