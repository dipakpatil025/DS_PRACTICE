#include<bits/stdc++.h>
using namespace std;

int  fibo(int n){
    if (n == 0)
    {
        return 0;
    }
    
    if (n == 1)
    {
        return 1;
    }
    int ans = fibo(n-2) +fibo(n-1);
    return ans;
    
    
}
int main()
{
    cout<<fibo(6);
    return 0;
}