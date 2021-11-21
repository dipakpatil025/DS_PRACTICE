#include <bits/stdc++.h>
using namespace std;
// vector<int> print_all_indexes(vector<int> v, int i, int key , vector<int> &ans)
// {
//     if (i == v.size())
//     {
//         return {};
//     }
//     if (v[i] == key)
//     {
//         ans.push_back(i);
//     }
//     print_all_indexes(v, i + 1, key, ans);
//     return ans;
// }
vector<int> print_all_indexes(vector<int> v, int i, int key)
{
    if (i == v.size())
    {
        return {};
    }
    if (v[i] == key)
    {
        vector<int> ans = print_all_indexes(v, i + 1, key);
        ans.push_back(i);
        return ans;
    }
     return print_all_indexes(v, i + 1, key);
}
int main()
{
    vector<int> v = {1, 3, 4, 5, 3, 5, 6, 3, 4, 2, 2, 2, 2, 3};
    // using output as argument
    // vector<int> ans;
    // print_all_indexes(v, 0, 3, ans);

    // using output without  argument
    vector<int> ans = print_all_indexes(v, 0, 3);
    for (auto &&i : ans)
    {
        cout << i << " ";
    }

    return 0;
}