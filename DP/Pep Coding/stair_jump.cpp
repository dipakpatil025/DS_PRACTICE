#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> dp(n + 1, -1);

    dp[n] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        int mx = INT_MAX;
        if (v[i] != 0)
        {

            for (int j = 1; j <= v[i] && j + i < dp.size(); j++)
            {
                if (dp[i + j] != -1)
                {
                    mx = min(mx, dp[i + j]);
                }
            }
            if (mx != INT_MAX)
            {
                dp[i] = mx + 1;
            }
        }
    }

    cout << dp[0] << endl;
    return 0;
}