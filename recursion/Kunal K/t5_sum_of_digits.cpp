#include<bits/stdc++.h>
using namespace std;

int call(int n){
    if (n == 0)
    {
        return 0;
    }
    return (n%10) + call((n/10));
    
}

int main()
{
    cout<<call(99);
    return 0;
}