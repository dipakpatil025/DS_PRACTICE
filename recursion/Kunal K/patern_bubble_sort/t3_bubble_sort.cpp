#include <bits/stdc++.h>
using namespace std;
// * * * * 
// * * *
// * *
// *
void print_patern(vector<int> &v,int r, int c)
{
    if (r == 0)
    {
        return;
    }

    if (r > c)
    {
        if (v[c] >  v[c+1])
        {
            swap(v[c],v[c+1]);
        }
        
        print_patern(v,r, ++c);
    }
    else
    {

        print_patern(v,--r, 0);
    }
}
int main()
{
    vector<int> v = {3,1,4,2,5};
    print_patern(v,4, 0);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}