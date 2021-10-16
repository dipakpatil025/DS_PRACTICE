#include<bits/stdc++.h>
using namespace std;
void call(int arr[]){
    arr[1] = 1000;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = 9;

    call(arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    
    return 0;
}