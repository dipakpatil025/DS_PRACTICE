#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int s, int mid, int e)
{
    cout << s << " " << mid << " " << e << " " << endl;
    vector<int> ans;
    int i = s;
    int j = mid;
    while (i < mid && j < e)
    {
        if (v[s] < v[j])
        {
            ans.push_back(v[i]);
            i++;
        }
        else
        {
            ans.push_back(v[j]);
            j++;
        }
    }

    while (i < mid)
    {
        ans.push_back(v[i]);
        i++;
    }
    while (j < e)
    {
        ans.push_back(v[j]);
        j++;
    }

    for (int i = 0; i < ans.size(); i++)
    {
        v[s + i] = ans[i];
    }

}

void mergeSort(vector<int> &v, int s, int e)
{
    if (e - s == 1)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(v, s, mid);
    mergeSort(v, mid, e);

    // vector<int> f = mergeSort(left);
    // vector<int> s = mergeSort(right);
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // cout << endl;

  merge(v, s, mid, e);
}
int main()
{
    vector<int> v1 = {6, 5, 4, 3, 2, 1};

    mergeSort(v1, 0, v1.size());
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}