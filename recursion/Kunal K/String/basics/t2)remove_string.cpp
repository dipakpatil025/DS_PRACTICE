#include <bits/stdc++.h>
using namespace std;
string findString(string s)
{
    if (s.empty())
    {
        return "";
    }
    if (s.find("apple") == 0)
    {
        return findString(s.substr(5));
    }
    else
    {
        return s[0] + findString(s.substr(1));
    }
}
int main()
{
    string s = "apple jhdksdksdj ld alsjdksl dksal jds";
    cout << s << endl;

    cout << findString(s) << endl;
    return 0;
}