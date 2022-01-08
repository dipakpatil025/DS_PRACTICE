// Target Sum Subsets - Dp
// Ptoblem Linki : https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/target-sum-subsets-dp-official/ojquestion

/*
    SAMPLE INPUT :  
                    5
                    4
                    2
                    7
                    1
                    3
                    10
    SAMPLE OUTPUT :  true
*/
// code :

#include <iostream>
#include <vector>
using namespace std;

void targetSumSubset(int n, vector<int> arr, int tar)
{

    // write your code here

    vector<vector<bool>> dp(arr.size() + 1, vector<bool>(tar + 1, false));

    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            if (i == 0 && j == 0)
            {
                dp[i][j] = true;
            }
            else if (i == 0)
            {
                dp[i][j] = false;
            }
            else if (j == 0)
            {
                dp[i][j] = true;
            }
            else
            {
                if (dp[i - 1][j])
                {
                    dp[i][j] = true;
                }
                else
                {
                    int val = arr[i - 1];
                    if (j >= val)
                    {
                        if (dp[i - 1][j - val])
                        {
                            dp[i][j] = true;
                        }
                    }
                }
            }
        }
    }

    if (dp[dp.size() - 1][dp[0].size() - 1])
    {
        cout << "true";
    }
    else
    {

        cout << "false";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int tar;
    cin >> tar;
    targetSumSubset(n, arr, tar);
}