#include<bits/stdc++.h>
using namespace std;
int search(int arr[],int l,int r,int k){
    if (r<l)
    {
        return -1;
    }
    int mid  = l + (r-l) / 2;
    if (arr[mid] == k)
    {
        return mid;
    }
    
    if (arr[l] <= arr[mid])
    {
        if (k <= arr[mid] && k >= arr[l])
        {
           return search(arr,l,mid-1,k);
            // r = mid-1;
        }
        else{
           return search(arr,mid+1,r,k);
            // l = mid+1;
        }
        
    }
        if (k >= arr[mid] && k <= arr[r])
        {
            // l = mid+1;
           return search(arr,mid+1,r,k);

        }
        else{
            // r = mid-1;
           return search(arr,l,mid-1,k);
        }
        
 
}   
int main()
{
    int arr[] = {5,6,7,8,9,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<search(arr,0,n-1,4);
    return 0;
}