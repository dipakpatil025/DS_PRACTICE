#include<bits/stdc++.h>
using namespace std;

int call(int n){
    if (n == 1)
    {
        return 1;
    }
    return n + call(n-1);
    
}

int main()
{
    cout<<call(3);
    return 0;
}