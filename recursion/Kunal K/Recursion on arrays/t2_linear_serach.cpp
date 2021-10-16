#include <bits/stdc++.h>
using namespace std;
bool serachL(int arr[], int n, int i, int k)
{

    if (i == n)
    {
        return false;
    }
    if (arr[i] == k)
    {
        return true;
    }
    
    return serachL(arr,n,++i,k);
}
// bool serachL(int arr[], int n, int i, int k)
// {

//     if (i == n)
//     {
//         return false;
//     }
//     return arr[i] == k || serachL(arr, n, ++i, k);
// }
int main()
{
    int arr[] = {1, 2, 4, 5, 6, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << serachL(arr, n, 0, 5);
    return 0;
}