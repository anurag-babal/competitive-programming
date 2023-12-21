#include<iostream>
#include<vector>

using namespace std;

vector<int> countFrequency(int n, int x, vector<int>& nums) {
    vector<int> arr(x, 0);
    for(int i = 0; i < n; i++) {
        arr[nums[i]-1]++;
    }
    return arr;
}

int main(void) {
    int n, x;
    vector<int> arr;
    cin >> n >> x;
    for(int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    for(auto i: countFrequency(n, x, arr))
        cout << i;

    return 0;
}