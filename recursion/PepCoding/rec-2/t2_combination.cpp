#include <bits/stdc++.h>
using namespace std;
void print_combination(vector<char> v, int r, int q = 0)
{
    if (v.size() == q)
    {
        if (r == 2)
        {
            /* code */

            for (int i = 0; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
        }

        return;
    }

    v[q] = 'q';
    print_combination(v, r + 1, q + 1);
    v[q] = '-';
    print_combination(v, r, q + 1);
}
void pcwf(vector<char> v, int r, int tr, int c = 0)
{
    if (tr == r)
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = c; i < v.size(); i++)
    {
        if (v[i] == '-')
        {

            v[i] = 'q';
            pcwf(v, r, tr + 1, i);
            v[i] = '-';
        }
    }
}

int main()
{
    int n, r;
    cin >> n >> r;
    vector<char> v(n, '-');
    // print_combination(v, 0);
    pcwf(v, r,0);
    return 0;
}