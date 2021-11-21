#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subset(vector<int> v)
{
    sort(v.begin(),v.end());
    vector<vector<int>> outer;
    int start = 0;
    int end  = 0;
    vector<int> temp;
    outer.push_back(temp);

    for (int i = 0; i < v.size(); i++)
    {
        start = 0;
        if (i>0 && v[i] == v[i-1])
        {
            start = end + 1;
        }
        end = outer.size()-1;
        
        int sz = outer.size();
        for (int j = start; j < sz; j++)
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