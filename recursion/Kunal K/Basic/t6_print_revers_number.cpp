#include<bits/stdc++.h>
using namespace std;
 
void call(int n){

    if(n == 0 ){
        return; 
    }
    cout<<n%10;
    call(n/10);
}

int main()
{
    call(123);
    return 0;
}