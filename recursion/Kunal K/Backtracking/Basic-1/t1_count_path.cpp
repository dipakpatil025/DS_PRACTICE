#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi (3.141592653589)
#define dd double
#define ff first
#define Y "YES"
#define N "NO"
#define fl(a, c) for (int(a) = 0; (a) < (c); (a)++)
long int gcd(long a, long b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

void solve()
{
    ll n;
    cin >> n;
    vector<int> v(n);
    int sm = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sm += v[i];
    }
    if(sm%n == 0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}