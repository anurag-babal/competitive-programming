#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int>& arr, int start, int mid, int end) {
    vector<int> tmp;
    int i = start, j = mid + 1;
    while(i <= mid && j <= end) {
        if(arr[i] < arr[j]) tmp.push_back(arr[i++]);
        else tmp.push_back(arr[j++]);
    }

    while(i <= mid) tmp.push_back(arr[i++]);
    while(j <= end) tmp.push_back(arr[j++]);

    for(int i = start; i <= end; i++) arr[i] = tmp[i-start]; 
}

void mergeSort(vector<int>& arr, int start, int end) {
    //Base case
    if(start >= end) return;
    
    //find mid
    int mid = (start + end) / 2;
    
    //sort first half
    mergeSort(arr, start, mid);
    
    //sort second half
    mergeSort(arr, mid+1, end);

    //merge
    merge(arr, start, mid, end); 
}

int main(void) {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    mergeSort(arr, 0, n-1);
    for(int i: arr)
        cout << i << " ";

    return 0;
}