#include<bits/stdc++.h>
using namespace std;
    
int find_and_return_index(int arr[],int n, int i, int k){
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == k)
    {
        return i;
    }
    
    return find_and_return_index(arr,n,++i,k);
    
    

}
int main()
{
    int arr[] = {1, 2, 4,5, 5, 6, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<find_and_return_index(arr,n,0,5);
    return 0;
}