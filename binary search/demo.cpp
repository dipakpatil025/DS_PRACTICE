#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi (3.141592653589)
#define dd double
#define ff first
#define Y "YES"
#define N "NO"
long int gcd(long a, long b)
{
    return (b == 0) ? a : gcd(b, a % b);
}

int main()
{
    int n;
	string s;
	cin >> n >> s;
	
	for (int i = 1; i < int(s.size()); ++i) {
		if (s[i] < s[i - 1]) {
			cout << "YES" << endl;
			cout << i << " " << i + 1 << endl;
			return 0;
		}
	}
	
	cout << "NO" << endl;
    return 0;
}