#include <bits/stdc++.h>
using namespace std;
string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

vector<string> printKPC(string p, string up)
{
    if (up.empty())
    {
        cout << p << endl;
        vector<string> temp;
        temp.push_back(p);
        return temp;
    }
    int n = up[0] - '0';
    vector<string> ans;
    for (int i = 0; i < codes[n].size(); i++)
    {
        vector<string> tt = printKPC(p + codes[n][i], up.substr(1));
        ans.insert(ans.begin(), tt.begin(), tt.end());
    }
    return ans;
}
int main()
{
    string s = "12";
    vector<string> ans = printKPC("", s);
    cout << "[ ";
    for (auto &&i : ans)
    {
        cout << "[ " << i << "] ";
    }
    cout << "]" << endl;

    return 0;
}
