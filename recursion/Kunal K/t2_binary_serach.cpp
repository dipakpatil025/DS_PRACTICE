#include<bits/stdc++.h>
using namespace std;
 int bs(vector<int> v, int targate,int start,int end)
 {
     if (start  > end)
     {
         return -1;
     }
     int mid = start+(end-start)/2;
     if (v[mid] < targate  )
     {
        return  bs(v,targate,mid+1,end);
     }
     else if (v[mid] > targate)
     {
        return bs(v,targate,start,mid-1);
     }
     
     return v[mid];
     
     
 }
int main()
{
    vector<int> v{1,2,3,4,5,6,7,8,9};
    cout<<bs(v,1,0,v.size());
    return 0;
}