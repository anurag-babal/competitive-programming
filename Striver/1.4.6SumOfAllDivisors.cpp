#include<iostream>

using namespace std;

int sumOfAllDivisors(int n) {
    int sum = n;
    if(n == 1) return sum;
    for(int i = 1; i <= n/2; i++) {
        if(n%i == 0) sum += i;
    }
    return sum + sumOfAllDivisors(n-1);
}

int main(void) {
    int n;
    cin >> n;
    cout << sumOfAllDivisors(n);
    return 0;
}