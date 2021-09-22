#include <bits/stdc++.h>
using namespace std;
double max_sum_K_window(vector<int> v, int k)
{
    int i = 0;
    int j = 0;
    double mx = -9999999999999999;
    double sum = 0;
    int c = 0;
    int n = v.size();
    
    // while(j<n){
    //     if (j-i != (k))
    //     {
    //         sum+=v[j];
    //         j++;
    //         mx = max(mx,sum);
    //         cout<<"MX " << mx<<endl;
    //     }
    //     else{
    //         sum-=v[i];
    //         i++;
    //         // cout<<v[i]<<" "<<v[j]<<" "<<endl;

    //         sum+=v[j];
    //         j++;
    //         mx = max(mx,sum);
    //         cout<<"MX " << mx<<endl;
    //     }
    //     c++;
        
    // }



    for (int i = 0; i < k; i++)
    {
        sum+=v[i];
    }
    mx = max(sum,mx);

    for (int i = k; i < n; i++)
    {
        /* code */
        sum+=v[i];
        sum-=v[i-k];

    mx = max(sum,mx);
        
    }
    
    
    // cout<<i<<" "<<j<<endl;
    // cout<<c<<endl;
    return mx/k;
}
int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 6, 8, 9, 10};
    vector<int> v = {-6662,5432,-8558,-8935,8731,-3083,4115,9931,-4006,-3284,-3024,1714,-2825,-2374,-2750,-959,6516,9356,8040,-2169,-9490,-3068,6299,7823,-9767,5751,-7897,6680,-1293,-3486,-6785,6337,-9158,-4183,6240,-2846,-2588,-5458,-9576,-1501,-908,-5477,7596,-8863,-4088,7922,8231,-4928,7636,-3994,-243,-1327,8425,-3468,-4218,-364,4257,5690,1035,6217,8880,4127,-6299,-1831,2854,-4498,-6983,-677,2216,-1938,3348,4099,3591,9076,942,4571,-4200,7271,-6920,-1886,662,7844,3658,-6562,-2106,-296,-3280,8909,-8352,-9413,3513,1352,-8825};
    cout<<v.size()<<endl;
    int k = 90;

    cout<<fixed<<setprecision(5) << max_sum_K_window(v, k);
    return 0;
}