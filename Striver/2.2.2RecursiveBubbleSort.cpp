#include<iostream>
#include<vector>

using namespace std;

void bubbleSortRec(vector<int>& arr, int end) {
    if(end <= 0) return;
    for(int i = 0; i < end; i++) {
        if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
    }
    bubbleSortRec(arr, end-1);
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
    bubbleSortRec(arr, n-1);
    for(int i: arr) cout << i << " ";

    return 0;
}