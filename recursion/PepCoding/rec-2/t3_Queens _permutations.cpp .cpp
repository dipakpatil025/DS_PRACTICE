#include <bits/stdc++.h>
using namespace std;
void print_queens_permutation(vector<vector<int>> &vv, int q)
{
    if (vv.size() == q)
    {
        int k = 1;
        for (int i = 0; i < vv.size(); i++)
        {
            for (int j = 0; j < vv[0].size(); j++)
            {
               
               if(vv[i][j] != 0){
                   
                    cout << "q"<< vv[i][j] <<"\t";
               }
               else{
                   
                    cout<<"-\t";
               }
               
            }
            cout << endl;
        }
        cout<<endl;
      

        return;
    }
    for (int i = 0; i < vv.size(); i++)
    {
        for (int j = 0; j < vv[0].size(); j++)
        {
            if (vv[i][j] == 0)
            {
                vv[i][j] = q+1;
                print_queens_permutation(vv, q + 1);
                vv[i][j] = 0;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> vv(n, vector<int>(n, 0));
    print_queens_permutation(vv, 0);

    return 0;
}