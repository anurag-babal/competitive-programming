#include<iostream>
#include<vector>

using namespace std;

void reverseArrayRec(int left, int right, vector<int>& nums) {
    if(left >= right) return;
    swap(nums[left], nums[right]);
    reverseArrayRec(++left, --right, nums);
}
vector<int> reverseArray(int n, vector<int> &nums) {
    reverseArrayRec(0, nums.size()-1, nums);
    return nums;
}

int main(void) {
    int count;
    vector<int> arr;
    cin >> count;
    while(count-- > 0) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    for(int i: reverseArray(arr.size()-1, arr)) cout << i;
    return 0;
}