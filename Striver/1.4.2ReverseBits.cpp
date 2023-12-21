#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

long reverseBits(long n) {
    int i = 0;
    vector<int> arr(32, 0);
    while(n > 0) {
        arr[i++] = (n & 1) ? 1 : 0;
        n = n >> 1;
    }

    int left = 0, right = 31;
    while(left <= right) {
        int tmp = arr[left];
        arr[left++] = arr[right];
        arr[right--] = tmp;
    }
    long result = 0;
    for(int i = 0; i < arr.size(); i++)
        result = result + (arr[i] * pow(2, i));
    return result;
}

int main(void) {
    int count;
    vector<long> arr;
    cin >> count;
    while(count-- > 0) {
        long tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    for(long i : arr) {
        cout << reverseBits(i) << endl;
    }
    return 0;
}