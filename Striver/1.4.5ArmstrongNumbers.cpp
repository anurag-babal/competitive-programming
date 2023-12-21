#include<iostream>
#include<math.h>

using namespace std;

bool checkArmstrong(int n) {
    int count = 0, tmp = n, result = 0;
    while(tmp > 0) {
        count++;
        tmp = tmp/10;
    }
    tmp = n;
    while(tmp > 0) {
        int digit = tmp % 10;
        result += pow(digit, count);
        tmp = tmp/10;
    }
    return result == n;
}

int main(void) {
    int n;
    cin >> n;
    cout << checkArmstrong(n);
    return 0;
}