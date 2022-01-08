#include <bits/stdc++.h>
using namespace std;
int digitSum(int n)
{
    int ans = 0;
    while (n)
    {
        int rem = n % 10;
        ans += (pow(rem, 2));
        n /= 10;
    }
    return ans;
}
bool isHappy(int n)
{
    int f = n;
    int s = n;
    do
    {
        s = digitSum(s);
        f = digitSum(digitSum(f));
    } while (f != s);
    if (s == 1)
    {
        return true;
    }
    return false;
}
int main()
{
    cout << isHappy(1);
    return 0;
}