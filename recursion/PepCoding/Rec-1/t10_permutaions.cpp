#include <bits/stdc++.h>
using namespace std;
void print_permutaion(string p, string u)
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
        string s = p.substr(i, p.size());
        print_permutaion(f + ch + s, u.substr(1));
    }
}
int main()
{
    string s = "abc";
    print_permutaion("", s);
    return 0;
}