#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    if(m*a <= b){ // b --> m
        cout<<n*a<<"\n";
    }else{
        cout<<(n/m)*b + min ((n%m)*a,b);
		
    }
    return 0;
}
