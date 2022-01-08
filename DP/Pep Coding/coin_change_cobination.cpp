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
    for(int i = 0; i < ip.size(); i++){
        for(int j = ip[i]; j < dp.size(); j++){
           dp[j] += dp[j-ip[i]];
        }
    }
  
    cout<<dp[tar];
    return 0;
}