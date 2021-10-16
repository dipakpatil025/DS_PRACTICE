#include<bits/stdc++.h>
using namespace std;
void solve(int arr[], int d, int n){

    for (int dd = 0; dd < d; dd++)
    {
        int temp = arr[0];

        for (int i = 0; i < n-1; i++)
        {
           arr[i] = arr[i+1]; 
        }
        arr[n-1] = temp;
    }
    
    // 1 2 3 4 5 6 7
    // temp = 1;
    // arr[0] = arr[0+1] =  aee[0] = 2
    // arr[1] = arr[1+1] = arr[1] = 3
 
    // 2 3 4 5 6 7 1
    // 3 4 5 6 7 1 2
    
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


int main()
{
    int arr[] ={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d = 2;
    solve(arr,d,n);
    return 0;
}