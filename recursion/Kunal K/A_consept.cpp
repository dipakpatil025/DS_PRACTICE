#include<bits/stdc++.h>
using namespace std;

void call(int n){
    if (n == 0)
    {
        return;
    }
    cout<<n<<" ";
    call(--n);
    
}

int main()
{
    call(5);
    return 0;
}