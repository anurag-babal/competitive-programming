#include<iostream>

using namespace std;

void insertionSort(int arr[], int index, int n) {
    if(index == n-1) return;
    int swapIndex = index;
    for (int i = index-1; i >= 0; i--) {
        if(arr[index] < arr[i]) swapIndex = i;
        else break;
    }
    int tmp = arr[index];
    int i = index-1;
    while(i >= swapIndex) {
        arr[i+1] = arr[i];
        i--;
    }
    arr[swapIndex] = tmp; 
    insertionSort(arr, index+1, n);
}

int main(void) {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    insertionSort(arr, 0, n);
    for(int i: arr) cout << i << " ";
    return 0;
}