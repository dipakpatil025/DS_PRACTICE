#include <bits/stdc++.h>
using namespace std;

void print_target_sum(vector<int> v, int i, int sum, int target, string ans)
{
    if (v.size() == i)
    {
        if (sum == target)
        {
            cout << ans << endl;
        }
        return;
    }

    print_target_sum(v, i + 1, sum + v[i], target, ans + to_string(v[i]) + " ");

    print_target_sum(v, i + 1, sum, target, ans);
}
void print_target_sum_vecrot(vector<int> v, int i, int sum, int target, vector<int> ans)
{
    if (v.size() == i)
    {
        if (sum == target)
        {
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }

    ans.push_back(v[i]);
    print_target_sum_vecrot(v, i + 1, sum + v[i], target, ans);
    ans.pop_back();

    print_target_sum_vecrot(v, i + 1, sum, target, ans);
}

int main()
{
    vector<int> v = {10, 50, 20, 30, 60, 40};
    vector<int> ans;
    string s = "";
    s += 10;
    // cout << s << endl;
    print_target_sum_vecrot(v, 0, 0, 60, ans);
    return 0;
}