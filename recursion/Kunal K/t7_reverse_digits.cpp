#include<bits/stdc++.h>
using namespace std;
int sum = 0;
int call(int n){
    if (n == 0)
    {
        return 0;
    }
    int rem = n%10;
    sum = sum * 10 + rem;
    call(n/10);
    return sum; 
    
}
int main()
{
    cout<<call(123945);
    return 0;
}