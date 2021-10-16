#include<bits/stdc++.h>
using namespace std;
void call(int n){
    if (n == 0 )
    {
        /* code */
        return;
    }
    
    cout<<n<<" ";
    call(n-1);
    cout<<n<<" ";
}
int main()
{
    call(5);
    return 0;
}