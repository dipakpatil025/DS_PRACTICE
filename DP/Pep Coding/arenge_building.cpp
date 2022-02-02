#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int n;
    cin>>n;
    int o = 1;
    int  z = 1;

    for (int i = 2; i <= n; i++)
    {
        int nw0 = o;
        int nw1 = o + z;
        o = nw1;
        z = nw0;
    }
    cout<<(o+z) * (o+z);

    return 0;
}