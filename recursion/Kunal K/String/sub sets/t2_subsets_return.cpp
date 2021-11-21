#include <bits/stdc++.h>
using namespace std;
vector<string> call(string proc, string unpro)
{

    if (unpro.empty())
    {
        // cout << proc << endl;
        vector<string> temp;
        temp.push_back(proc);
        return temp;
    }
    char ss = unpro[0];
    // ss.push_back(unpro[0/]);
    vector<string> left = call(proc + ss, unpro.substr(1));
    vector<string> right = call(proc, unpro.substr(1));
    left.insert(left.end(), right.begin(), right.end());
    return left;
}
int main()
{
    string s1 = "";
    string s2 = "abc";
    vector<string> ans = call(s1, s2);
    for (auto &&i : ans)
    {
        cout << i << " ";
    }

    return 0;
}