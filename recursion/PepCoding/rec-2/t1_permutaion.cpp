#include <bits/stdc++.h>
using namespace std;

void print_permutaion(vector<int> v, int r, int rem_r = 1)
{

    if (r < rem_r)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl
             << endl;

        return;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (!v[i])
        {

            v[i] = rem_r;
            print_permutaion(v, r, rem_r + 1);
            v[i] = 0;
        }
    }
}

int main()
{
    int n, r;
    cin >> n >> r;
    vector<int> v(n, 0);
    print_permutaion(v, r);
    return 0;
}