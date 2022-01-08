#include <bits/stdc++.h>
using namespace std;
int printFibo(int n, vector<int> &v)
{
    if (n == 0 || n == 1)
        return n;

    if (v[n] != 0)
        return v[n];

    int a = printFibo(n - 1,v);
    int b = printFibo(n - 2,v);

    v[n] = a + b;
    return v[n];
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    cout << printFibo(n, v);
    return 0;
}