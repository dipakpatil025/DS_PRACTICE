    #include <bits/stdc++.h>
    using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> val(n);
    vector<int> weight(n);
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }

    int tar;
    cin >> tar;

    vector<vector<int>> dp(n + 1, vector<int>(tar + 1, 0));
    for (int i = 0; i < n; i++)
    {
        cout << weight[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < dp.size(); i++)
    {
        for (int j = 1; j < dp[i].size(); j++)
        {
            dp[i][j] = dp[i - 1][j];

            if (j >= weight[i - 1])
            {
                int rCap = j - weight[i - 1];
                if (dp[i - 1][rCap] + val[i - 1] > dp[i - 1][j])
                {
                    dp[i][j] = dp[i - 1][rCap] + val[i - 1];
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
                // dp[i][j] = max(dp[i][j], dp[i - 1][j - weight[i - 1]] + val[j - 1]);
            }
        }
    }
    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}