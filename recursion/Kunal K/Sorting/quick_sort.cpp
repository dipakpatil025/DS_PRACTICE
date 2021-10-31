#include <bits/stdc++.h>
using namespace std;
void quickSort(vector<int> &v, int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int low = s;
    int hi = e;
    int mid = low + (hi - low) / 2;
    int pivot = v[mid];

    while (low <= hi)
    {
        while (v[low] < pivot)
        {
            low++;
        }
        while (v[hi] > pivot)
        {
            hi--;
        }         
        if (low<=hi)
        {
            swap(v[low],v[hi]);
            low++;
            hi--;
        }
                
    }


    quickSort(v,low,e);
    quickSort(v,s,hi);

}

int main()
{
    vector<int> v = {1,2,3,4,5,7};
    quickSort(v, 0, v.size() - 1);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}