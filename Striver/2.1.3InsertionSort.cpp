#include<iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        for(int j = i; j > 0; j--) {
            if(arr[j] > arr[j-1]) break;
            swap(arr[j], arr[j-1]);
        }
    }
}

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    insertionSort(arr, n);
    for(int i: arr) cout << i << " ";
    return 0;
}