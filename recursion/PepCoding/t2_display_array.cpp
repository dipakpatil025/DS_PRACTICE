#include<bits/stdc++.h>
using namespace std;
void display(int *arr ,int n){
    if (n == 0)
    {
        return;
    }
    cout<<*arr<<" ";
    display(++arr,n-1);
    
}
int main()
{
    int arr[] = {10,2,30,4,50,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    display(arr,n);
 
    return 0;
}