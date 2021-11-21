#include <bits/stdc++.h>
using namespace std;
int print_posible_ways(string p, string u)
{
    if (u.empty())
    {
        cout << p << endl;
        return 1;
    }
    if (u[0] == '0')
    {
        return 0;
    }
    int cn = 0;
    char ch1 = u[0] - '0' + 'a' - 1;
    cn += print_posible_ways(p + ch1, u.substr(1));

    if (u.size() > 1)
    {
        string s = u.substr(0, 2);
        int sn = stoi(s);
        if (sn <= 26)
        {
            char ch = 'a' + sn - 1;
            cn += print_posible_ways(p + ch, u.substr(2));
        }
    }
    return cn;
}
int main()
{
    string s = "226";
    // char ch = s[0] - '0' + 'a';
    // cout << ch;
    cout << print_posible_ways("", s);
    return 0;
}