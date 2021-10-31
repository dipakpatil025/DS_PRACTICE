#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> f, vector<int> s)
{
    int fi = 0;
    int si = 0;
    int mi = 0;
    vector<int> ans;
    while (fi < f.size() && si < s.size())
    {
        if (f[fi] < s[si])
        {
            ans.push_back(f[fi]);
            fi++;
        }
        else
        {
            ans.push_back(s[si]);
            si++;
        } 
    }

    while (fi < f.size())
    {
        ans.push_back(f[fi]);
        fi++;
    }
    while (si < s.size())
    {
        ans.push_back(s[si]);
        si++;
    }
    return ans;
}

vector<int> mergeSort(vector<int> v)
{
    if (v.size() == 1)
    {
        return v;
    }
    int mid = (v.size()) / 2;
    vector<int> left(v.begin(), v.begin() + mid);
    vector<int> right(v.begin() + mid, v.end());
 
    vector<int> f = mergeSort(left);
    vector<int> s = mergeSort(right);

    return merge(f, s);
}
int main()
{
    vector<int> v1 = {6,5,4,3,2,1};

    vector<int> ans = mergeSort(v1);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}