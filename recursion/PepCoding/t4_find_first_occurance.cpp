#include <bits/stdc++.h>
using namespace std;
int print_first_indx(int arr[], int i, int key, int n)
{
    if (i == n)
    {
        return -1;
    }
    return (arr[i] == key) ? i : print_first_indx(arr, i + 1, key, n);

    // return sizeof(arr);
}
int main()
{
    int arr[] = {1, 3, 4, 6, 2, 4, 4, 4};
    int key = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << print_first_indx(arr, 0, key, n);

    return 0;
}