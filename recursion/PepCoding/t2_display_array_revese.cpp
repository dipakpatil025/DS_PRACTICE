#include<bits/stdc++.h>
using namespace std;
void display(int *arr ,int n){
    if (n == 0)
    {
        return;
    }
    cout<<arr[n-1]<<" ";
    display(arr,n-1);
    
}

// OR
void display1(int arr[] ,int n){
    cout<<sizeof(*arr)/sizeof(arr[0])<<endl;;
    if (n == 0)
    {
        return;
    }
    
    cout<<arr[n-1]<<" ";
    
    display1(arr,n-1);
    
}
int main()
{
    int arr[] = {10,2,30,4,50,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    // display(arr,n);
    display1(arr,6);
 
    return 0;
}