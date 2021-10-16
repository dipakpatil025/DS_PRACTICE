#include<bits/stdc++.h>
using namespace std;
bool checkSort(int arr[], int n,int i){

    if (i == n-1)
    {
        return true;
    }
    if (arr[i] > arr[i+1])
    {
        return false;
    }
    // cout<<arr[i]<<" ";
    return checkSort(arr,n,++i);
      // return (arr[i] < arr[i+1]) && checkSort(arr,n,++i);
}
// OR
// bool checkSort(int arr[], int n,int i){

//     if (i == n-1)
//     {
//         return true;
//     }
    
//     return (arr[i] < arr[i+1]) && checkSort(arr,n,++i);
// }
int main()
{
    int arr[] = {1,2,4,5,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<checkSort(arr,n,0);
    return 0;
}