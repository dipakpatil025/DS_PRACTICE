#include <iostream>
#include <vector>

using namespace std;

void unboundedKnapsack(int n, vector<int> val, vector<int> weight, int cap) {

    // write your code here
    vector<int> dp(cap+1,0);
    
    for(int i = 1; i < dp.size();i++){
        for(int w = 0; w < weight.size(); w++){
            if(weight[w]<= i){
                dp[i] = max(dp[i],dp[i-weight[w]] + val[w]);
            }
        }
    } 

    cout<<endl;
    cout<<dp[cap];
}


int main() {

  int n;
  cin >> n;
  vector<int> val(n);
  for (int i = 0; i < n; i++) {

    cin >> val[i];
  }
  vector<int> weight(n);
  for (int i = 0; i < n; i++) {
    cin >> weight[i];
  }
  int cap;
  cin >> cap;

  unboundedKnapsack(n, val, weight, cap);


}