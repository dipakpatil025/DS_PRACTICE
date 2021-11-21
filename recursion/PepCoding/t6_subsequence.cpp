#include <bits/stdc++.h>
using namespace std;
void print_all_subsequences(string p, string up)
{
    if (up.empty())
    {
        cout << p << " ";
        return;
    }

    char ch = up[0];
    print_all_subsequences(p + ch, up.substr(1));
    print_all_subsequences(p, up.substr(1));
}
int main()
{
    string s = "abc";
    print_all_subsequences("", s);
    // cout<<s<<endl;
    return 0;
}