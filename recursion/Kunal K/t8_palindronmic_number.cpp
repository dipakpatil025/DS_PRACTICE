#include<bits/stdc++.h>
using namespace std;
int sum = 0;
int rev(int n){
    if (n == 0)
    {
        return 0;
    }
    int rem = n%10;
    sum = sum * 10 + rem;
    rev(n/10);
    return sum; 
    
}
bool call(int n){
    return n == rev(n);
}
int main()
{
    cout<<call(12321);
    return 0;
}