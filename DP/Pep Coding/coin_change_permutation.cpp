// Coin Change Combination
// We have Infinite coints
// link :https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/coin-change-combination-official/ojquestion

// CODE
// We have Infinite coins 
#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    int n;
    cin>>n;
    vector<int> ip;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        ip.push_back(x);
    }
    int tar;
    cin>>tar;
    
    vector<int>dp(tar+1,0);
    
    dp[0] = 1;

    for (int  i = 1; i < dp.size(); i++)
    {
        for (int j = 0; j < ip.size(); j++)
        {
            int x = 0;
            if (ip[j]<=i && dp[i-ip[j]] != 0)
            {
                x++;
            }
            dp[i]=max(x,dp[i]);
            
        }
        
    }
    for (int i = 0; i < dp.size(); i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    
//     5
// 1 2 3 4 5
// 3
// 0

    
    
  
    cout<<dp[tar];
    return 0;
}