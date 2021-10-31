#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> sum_4(vector<int> v, int t)
{
    vector<vector<int>> ans;
    if (v.empty())
            return ans;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i + 1; j < v.size(); j++)
        {
            int b_sum = v[i] + v[j];
            int req = t - b_sum;
            int f = j + 1;
            int b = v.size() - 1;
            while(f < b) {
                
                    int two_sum = v[f] + v[b];
                
                    if (two_sum < req) f++;
                
                    else if (two_sum > req) b--;
                
                    else {
                    
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = v[i];
                        quadruplet[1] = v[j];
                        quadruplet[2] = v[f];
                        quadruplet[3] = v[b];
                        ans.push_back(quadruplet);
                    
                        // Processing the duplicates of vber 3
                        while (f < b && v[f] == quadruplet[2]) ++f;
                    
                        // Processing the duplicates of vber 4
                        while (f < b && v[b] == quadruplet[3]) --b;
                
                    }
                }
                while(j + 1 < v.size() && v[j + 1] == v[j]) ++j;
        }
        while (i + 1 <  v.size() && v[i + 1] == v[i]) ++i;
    }

    return ans;
}
int main()
{
    vector<int> v = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    vector<vector<int>> ans = sum_4(v, 9);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}       