#include<bits/stdc++.h>
using namespace std;



// printing all indexs 
void print_allindexs(int arr[], int n, int i,int k){
    if (i == n)
    {
        cout<<endl;
        return;
    }
    if (arr[i] == k)
    {
        cout<<i<<" ";
    }
    print_allindexs(arr,n,++i,k);    
    
}

// bohat galta hai yar hai 
int global_array[50];

int *ptr = global_array;

int  *return_array_outsize(int arr[], int n, int i,int k){
    if (i == n)
    {
        cout<<endl;
        return global_array;
    }
    if (arr[i] == k)
    {
     
        *ptr = i;
        ptr++;
    }   
    return return_array_outsize(arr,n,++i,k);
}


// simple and sarrad
vector<int> global_ans;
vector<int> return_all_out_vector(int arr[], int n, int i,int k){
if (i == n)
    {
        cout<<endl;
        return global_ans;
    }
    if (arr[i] == k)
    {
    global_ans.push_back(i);
    }   
    return return_all_out_vector(arr,n,++i,k);
}



// without using extesrnal vector

vector<int> return_all_in_vector(int arr[], int n, int i,int k){
     vector<int> ans;
if (i == n)
    {
        cout<<endl;
        return ans;
    }
    if (arr[i] == k)
    {
        ans.push_back(i);
    }   
    return return_all_in_vector(arr,n,++i,k);
    
    
}
int main()
{
    int arr[] = {1, 2, 4,5, 5, 6, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    print_allindexs(arr,n,0,5);
    return_array_outsize(arr,n,0,5);
    for (int i = 0; i < 5; i++)
    {
        cout<<global_array[i]<<" ";
    }
    return_all_out_vector(arr,n,0,5);
    for (int i = 0; i < global_ans.size(); i++)
    {
        cout<<global_ans[i]<<" ";
    }
    return_all_in_vector(arr,n,0,5);
    for (int i = 0; i < global_ans.size(); i++)
    {
        cout<<global_ans[i]<<" ";
    }
   
    // int *ptr = arr;
    // ptr++;
    // *ptr = 55;
    // cout<<arr[1] <<" ";
    return 0;
}