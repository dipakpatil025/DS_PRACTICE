#include<bits/stdc++.h>
using namespace std;
void call_rec(int arr[], int n)
{
    if (n < 1)
    {
        return;
    }
    int temp[n-1];
    for (int i = 0; i < n-1; i++)
    {
        int sum =   arr[i] + arr[i+1];
        temp[i] = sum;
    }
    
    call_rec(temp,n-1);

    
    // cout<<arr[n-1]<<" ";    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";    
    }
    cout<<endl;
}
int main()
{
    int arr[] = {1,2,3,5,6};
    int n =  sizeof(arr)/sizeof(arr[0]);
    call_rec(arr,n);
    return 0;
}