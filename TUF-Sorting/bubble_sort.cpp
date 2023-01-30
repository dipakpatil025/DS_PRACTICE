#include <bits/stdc++.h>
using namespace std;
void bubble_sot(vector<int> & arr){
    for (int i = arr.size(); i >= 0; --i) {
        for (int j = 0; j < i-1; ++j) {
            if (arr[j] > arr[j+1]) swap(arr[j] , arr[j+1]);
        }
    }
}
int main () {
    vector<int> arr = { 13, 24, 46, 20, 9, 52};
    bubble_sot(arr);
    for (auto i : arr) {
        cout<< i << " ";
    }
    return  0;
}
