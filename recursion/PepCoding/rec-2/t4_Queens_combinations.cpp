#include <bits/stdc++.h>
using namespace std;

void print_conmination(vector<vector<char>> v, int item, int remI, int i)
{
    if (i == v.size())
    {
        return;
    }
    if (remI == item)
    {

        for (int i = 0; i < v.size(); i++)
        {
            for (int j = 0; j < v[0].size(); j++)
            {

                cout << v[i][j] << "";
            }
            cout << endl;
        }

        cout << endl;
        return;
    }

    for (int c = 0; c < v[0].size(); c++)
    {

        v[i][c] = '0';
        print_conmination(v, item, remI + 1, i + 1);
        v[i][c] = '-';
        print_conmination(v, item, remI, i + 1);
    }
}

void print_combi(vector<vector<char>> v, int item, int remItem)
{
    if (item == 0)
    {
        if (remItem == 2)
        {
            /* code */

            for (int i = 0; i < v.size(); i++)
            {
                for (int j = 0; j < v[0].size(); j++)
                {

                    cout << v[i][j] << "";
                }
                cout << endl;
            }

            cout << endl;
        }
        return;
    }
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[0].size(); j++)
        {
            if (v[i][j] != '0')
            {
                /* code */

                v[i][j] = '0';
                print_combi(v, item - 1, remItem + 1);
                v[i][j] = '-';
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int items = 2;
    int remItem = 0;
    vector<vector<char>> v(n, vector<char>(n, '-'));
    // print_conmination(v, items, remItem, 0);

    print_combi(v, items, remItem);
    return 0;
}