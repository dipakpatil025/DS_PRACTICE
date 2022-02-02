#include <bits/stdc++.h>
using namespace std;

string removeReverse(string s)
{
    // code here

    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    string ans;
    int rev = 0;
  
    int l = 0; int r = s.size()-1;
    bool flag = true;
    int cnt;
    while (l<r)
    {
        if(flag){
            if(mp[s[l]] > 1){
                mp[s[l]]--;
                s.erase(l,1);
                flag =  false;
                cnt++;
            }
            else{
                l++;
            }

        }
        else{
            if(mp[s[r]] > 1){
                mp[s[r]]--;
                s.erase(r,1);
                flag =  true;
                cnt++;
            }
            else{
                r--;
            }
        }
    }
    
    // cout<<cnt<<endl ;        
    // if(rev%2 == 0){
    //     return ans;
    // }
    if(cnt%2 != 0  && cnt!=0) reverse(s.begin(),s.end());
    return s;
}
/*
dcdbeada
*/
int main()
{
    string s;
    cin >> s;
    cout << removeReverse(s) << endl;
    return 0;
}