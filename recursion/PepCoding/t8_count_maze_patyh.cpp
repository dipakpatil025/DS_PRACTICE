#include <bits/stdc++.h>
using namespace std;
void countPath(string s, int r, int c, int n, int m)
{
    if (r == n - 1 && c == m - 1)
    {

        cout << s << endl;
        return ;
    }

    if (c < m - 1)
    {

         countPath(s + 'H', r, c + 1, n, m);
    }
    if (r < n - 1)
    {

       countPath(s + 'V', r + 1, c, n, m);
    }
    
}
int main()
{
    int n, m;
    cin >> n >> m;
  countPath("", 0, 0, n, m);

    return 0;
}