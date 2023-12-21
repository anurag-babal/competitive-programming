#include<iostream>

int countDigits(int n) {
    int count = 0, num = n;
    while(n > 0) {
        int digit = n%10;
        if(digit == 0) {
            n = n/10;
            continue;
        }
        if((num % digit) == 0) count++;
        n = n/10;
    }
    return count;
}

int main(void) {
    int n;
    std::cin >> n;
    std::cout << countDigits(n);
    return 0;
}