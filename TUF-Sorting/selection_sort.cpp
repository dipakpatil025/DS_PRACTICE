#include <bits/stdc++.h>
using namespace std;

void selection_sort (vector<int> &arr) {
    for (int i = 0; i < arr.size()-1; ++i) {
        int min = i;
        for (int j = i; j < arr.size(); ++j) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }

}

int main () {

    vector<int> arr = {13,46,24,52,20,9};

    selection_sort(arr);

    for (int i = 0; i < arr.size() ; ++i) {
        cout<< arr[i] <<" ";
    }

    return 0;
}