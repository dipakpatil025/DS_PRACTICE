#include <bits/stdc++.h>
using namespace std;
int print_max(int arr[], int n)
{
    if (n == 4)
    {
        return arr[n];
    }
    return max(arr[n], print_max(arr, n + 1));
}
int main()
{
    int arr[] = {1, 444, 2, 99, 1};
    cout << print_max(arr, 0);
    return 0;
}