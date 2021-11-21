
// Given an array of integers, print a sum triangle from it such that the first level has all array elements. From then, at each level number of elements is one less than the previous level and elements at the level is be the Sum of consecutive two elements in the previous level.
#include <bits/stdc++.h>
using namespace std;
void print_trianle(vector<int> v)
{
    if (v.size() == 0)
    {
        return;
    }

    vector<int> tp;
    for (int i = 0; i < v.size() - 1; i++)
    {
        int x = v[i] + v[i + 1];
        tp.push_back(x);
    }
    print_trianle(tp);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // v.insert(v.begin(),10);
    print_trianle(v);

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5};
//     int n = (v.size() * (v.size() + 1)) / 2;
//     vector<int> ans;
//     for (int i = 0; i < v.size(); i++)
//     {
//         ans.push_back(v[i]);
//     }

//     for (int i = v.size(); i < n; i++)
//     {
//         int x = ans[ans.size() - v.size()] + ans[ans.size() - v.size() + 1];
//         ans.push_back(x);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << " ";
//     }

//     cout << n << endl;
//     return 0;
// }