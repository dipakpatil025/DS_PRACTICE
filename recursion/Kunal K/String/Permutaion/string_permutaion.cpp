#include <bits/stdc++.h>
using namespace std;
void call(string p, string u)
{
    if (u.empty())
    {
        cout << p << endl;
        return;
    }
    char ch = u[0];
    for (int i = 0; i <= p.size(); i++)
    {
        string f = p.substr(0, i);
        string s = p.substr(i,p.size());
        string ans = f + ch + s;
        call(ans, u.substr(1));
        // call("ans", u.substr(1));
    }
    // cout << p << " : " << u << endl;
}
int main()
{
    call("", "abc");
    return 0;
}