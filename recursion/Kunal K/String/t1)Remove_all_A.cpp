#include <bits/stdc++.h>
using namespace std;
string remove_A(string s, int n)
{
    static string st;
    if (n + 1 >= s.size())
    {
        return st;
    }
    if (s[n] != 'a')
    {
        st.push_back(s[n]);
    }

    return remove_A(s, n + 1);
    // return st;
}
void remove_A_1(string s, string &ans)
{
    if (s.empty())
    {
        return;
    }
    char ch = s[0];
    // cout << ch << " ";
    if (ch == 'a')
    {
        remove_A_1(s.substr(1), ans);
    }
    else
    {
        remove_A_1(s.substr(1), ans += ch);
    }
}
int main()
{
    string s = "aaaaaaaaaa";

    // Testing
    string t = s.substr(1);
    // cout << t << endl;

    //  1: usoing static string
    // string ans = remove_A(s, 0);
    // cout << ans << endl;

    string ans = "";
    remove_A_1(s, ans);
    cout << ans << endl;

    return 0;
}