#include<bits/stdc++.h>
using namespace std;
void print_patern(int n, int r, int c){
    if (r == n)
    {
        return;
    }
    if (r>=c)
    {
        cout<<"* ";
        print_patern(n,r,c+1);
    }
    else{
        cout<<endl;
        print_patern(n,r+1,0);
    }
    
    
}
int main()
{
    print_patern(4,0,0);
    return 0;
}