#include <bits/stdc++.h>
using namespace std;

void print_patern(int arr[], int r, int c)
{
    if (r == 0)
    {
        return;
    }
    if (r > c)
    {
        // cout << "* ";
        if (arr[c] > arr[c + 1])
        {
            swap(arr[c], arr[c + 1]);
        }

        print_patern(arr, r, c + 1);
    }
    else
    {
        // cout << endl;
        print_patern(arr, r - 1, 0);
    }
}
int main()
{
    int arr[] = {50, 10, 20, 34, 4};
    print_patern(arr, 4, 0);
    for (auto &&i : arr)
    {
        cout << i << " ";
    }

    return 0;
}