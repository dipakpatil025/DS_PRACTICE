#include <bits/stdc++.h>
using namespace std;
vector<string> print_path(string s, int r, int c)
{
        static vector<string> vs;
    if (r == 1 && c == 1)
    {
        vs.push_back(s);
        return vs;
    }
    vector<string> ans;
    if (r > 1)
    {

        (print_path(s + 'D', r - 1, c));
    }
    if (c > 1)
    {

        print_path(s + 'R', r, c - 1);
    }
    return vs;
}
int main()
{
    vector<string> ans = print_path("", 3, 3);
    for (auto &&i : ans)
    {
        cout<<i<<endl;
    }
    
    return 0;
}