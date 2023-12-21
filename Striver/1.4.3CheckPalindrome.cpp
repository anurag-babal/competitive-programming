#include<iostream>

using namespace std;

bool palindrome(int n) {
    int num = n, result = 0;
    while(n > 0) {
        int ld = n % 10;
        result = (result * 10) + ld;
        n = n / 10;
    }
    return (num == result) ? true : false;
}

int main(void) {
    int num;
    cin >> num;
    cout << palindrome(num);
    return 0;
}