#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> combinationSum(vector<int> candidates, vector<int> ans, int target, int sum, vector<vector<int>> &as, int k = 0)
{

    if (sum >= target)
    {
        // vector<vector<int>> tt;
        if (sum == target)
        {
            /* code */
            as.push_back(ans);
            return as;
        }
        return {};
    }

    vector<vector<int>> temp;
    for (int i = k; i < candidates.size(); i++)
    {
        /* code */
        sum += candidates[i];
        ans.push_back(candidates[i]);
        temp = combinationSum(candidates, ans, target, sum, as, k);
        ans.pop_back();
        sum -= candidates[i];
        k++;
    }

    return temp;
}

int main()
{
    vector<int> candidates = {2, 3, 5};
    int target = 8;
    vector<int> ans;
    vector<vector<int>> ans1;
    vector<vector<int>> mm = (candidates, ans, target, 0, ans1);
    for (int i = 0; i < mm.size(); i++)
    {
        for (int j = 0; j < mm[i].size(); j++)
        {
            cout << mm[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}