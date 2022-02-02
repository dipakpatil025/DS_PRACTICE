#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    vector<int> dp(s.size());
    dp[0] = 1;
    for (int i = 1; i < dp.size(); i++)
    {
        if (s[i - 1] == '0' && s[i] == '0')
        {
            dp[i] = 0;
        }
        else if (s[i - 1] == '0' && s[i] != '0')
        {
            dp[i] = dp[i - 1];
        }
        else if (s[i - 1] != '0' && s[i] == '0')
        {
            string tp = s.substr(i - 1, i + 1);
            int n = stoi(tp);
            if (n <= 26)
            {
                dp[i] = i>=2 ? dp[i - 2] : 1;
            }
            else
            {
                dp[i] = 0;
            }
        }
        else
        {
            string tp = s.substr(i - 1, i + 1);
            int n = stoi(tp);
            if (n <= 26)
            {
                dp[i] = i>=2 ? dp[i - 2] : 1;
            }
            dp[i] += dp[i - 1];
        }
    }
    // for (int i = 0; i < dp.size(); i++)
    // {
    //     cout << dp[i] << " ";
    // }

    cout<<dp[dp.size()-1]<<" ";
    return 0;
}
