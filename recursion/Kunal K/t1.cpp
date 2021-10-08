#include<bits/stdc++.h>
using namespace std;
void call(int n){

    if (n == 0)
    {
        return;
    }
    call(n-1);
    cout<<n<<endl;
    

}
int main()
{
    call(5);
    return 0;
} 