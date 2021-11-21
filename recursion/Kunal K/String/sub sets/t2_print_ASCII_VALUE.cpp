#include <bits/stdc++.h>
using namespace std;
void call(string proc, string unpro)
{

    if (unpro.empty())
    {
        cout << proc << endl;
        return;
    }
    char ss = unpro[0];
    // ss.push_back(unpro[0/]);
    call(proc + ss, unpro.substr(1));
    call(proc, unpro.substr(1));
    int tt = (ss + 0);
    cout << tt << " t " << endl;
    // string temp = (proc + tt);
    // call(proc + (tt), unpro.substr(1));
}
int main()
{
    string s1 = "";
    string s2 = "abc";
    call(s1, s2);
    return 0;
}