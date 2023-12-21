#include<iostream>
#include<vector>

using namespace std;

int partitionArray(int input[], int start, int end) {
    int pivot = (start + end)/2;
    int num = input[pivot];
    swap(input[start], input[pivot]);
    for(int i = 1; i < end; i++) {
        if(input[i] <= num);
    }
}

void quickSort(int input[], int start, int end) {
    if(start >= end) return;
    int n = partitionArray(input, start, end);
    quickSort(input, start, n);
    quickSort(input, n+1, end);
}

int main(void) {
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) std::cin >> arr[i];
    quickSort(arr, 0, n);
    for(int i: arr) std::cout << i << " ";
    return 0;
}