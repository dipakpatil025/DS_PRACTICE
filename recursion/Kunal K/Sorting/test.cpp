#include <bits/stdc++.h>
using namespace std;
void call(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> ans = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    call((ans.begin(), ans.begin() + 3));
    return 0;
}