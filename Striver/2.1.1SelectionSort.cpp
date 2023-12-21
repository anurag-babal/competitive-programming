#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int>& arr, int n) {
    for (int i = 0; i < n; i++) {
        int min = arr[i];
        int index = i;
        for (int j = i+1; j < n; j++) {
            if(arr[j] < min) {
                min = arr[j];
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }
}

int main(void) {
    int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    selectionSort(arr, n);
    for(int i: arr) cout << i;
    return 0;
}