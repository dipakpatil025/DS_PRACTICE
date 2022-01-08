// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // vector<vector<vector<int>>> v(5, vector<vector<int>>(5, vector<int>(5, 0)));
//     // for (auto &&i : v)
//     // {
//     //     for (auto &&j : i)
//     //     {
//     //         for (auto &&k : j)
//     //         {
//     //             cout << k << " ";
//     //         }
//     //         cout << endl;
//     //     }
//     //     // cout << endl;
//     // }
//     vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
//     for (auto &&i : v)
//     {
//         cout << i << " ";
//     }
//     v.insert(v.begin() + 8, 5);
//     cout << endl;
//     for (auto &&i : v)
//     {
//         cout << i << " ";
//     }

//     return 0;
// }

// uniquwe ele
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 1, 2, 43, 1, 2, 3, 4, 2};

    set<int> s;
    for (auto &&i : v)
    {
        s.insert(i);
    }
    // for (auto &&i : s)
    // {
    //     cout << i << " ";
    // }
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    // DELETE FIRST ELE
    // auto it = s.begin();
    // it++;
    // it++;
    // s.erase(s.begin(), it);
    // s.erase(1);

    auto it = 

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}