#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subset(vector<int> v)
{
    vector<vector<int>> outer;

    vector<int> temp;
    outer.push_back(temp);

    for (int i = 0; i < v.size(); i++)
    {
        int sz = outer.size();
        for (int j = 0; j < sz; j++)
        {
            vector<int> internal(outer[j].begin(), outer[j].end());
            internal.push_back(v[i]);
            outer.push_back(internal);
        }
    }

    return outer;
}
int main()
{
    vector<int> v = {1, 2, 2};
    vector<vector<int>> ans = subset(v);

    for (auto &&i : ans)
    {
        cout << "[";
        for (auto &&j : i)
        {
            cout << j << ", ";
        }
        cout << "]" << endl;
    }

    return 0;
}

/*


    vector<vector<int>> call (vector<int> v){
    
    vector<vector<int>> outer;
    vector<int> temp;
    outer.PB(temp);


    for(int i = 0; i < v.size(), i++){
        int sz = outer.size(); //outer array size for adding same size of elements
        for(int j = 0; i  < sz; j++){
            vector<int> internal (outer[j].begion(),outer[j].end());
            internal.PB(v[i]);
            outer.PB(internal);
        }
    }
`   return outer;
    }

*/